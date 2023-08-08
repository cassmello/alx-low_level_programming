#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <errno.h>

void display_elf_header(const char *filename);
void print_error(const char *msg);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    display_elf_header(argv[1]);

    return 0;
}

void display_elf_header(const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Error: Can't read file");
        exit(98);
    }

    Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read == -1) {
        print_error("Error reading ELF header");
        close(fd);
        exit(98);
    }

    if (bytes_read < sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Error: Not an ELF file");
        close(fd);
        exit(98);
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; ++i) {
        printf("%2.2x ", header.e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (header.e_ident[EI_CLASS]) {
        case ELFCLASSNONE: printf("none\n"); break;
        case ELFCLASS32:   printf("ELF32\n"); break;
        case ELFCLASS64:   printf("ELF64\n"); break;
        default:           printf("<unknown>\n");
    }

    printf("  Data:                              ");
    switch (header.e_ident[EI_DATA]) {
        case ELFDATANONE: printf("none\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default:          printf("<unknown>\n");
    }

    printf("  Version:                           %d", header.e_ident[EI_VERSION]);
    switch (header.e_ident[EI_VERSION]) {
        case EV_CURRENT: printf(" (current)\n"); break;
        default:         printf("\n");
    }

    printf("  OS/ABI:                            ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_NONE:     printf("UNIX - System V\n"); break;
        case ELFOSABI_LINUX:    printf("UNIX - Linux\n"); break;
     
        default:                printf("<unknown>\n");
    }

    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (header.e_type) {
        case ET_NONE:   printf("NONE (None)\n"); break;
        case ET_REL:    printf("REL (Relocatable file)\n"); break;
        case ET_EXEC:   printf("EXEC (Executable file)\n"); break;
        
        default:        printf("<unknown>\n");
    }

    printf("  Entry point address:               %#lx\n", (unsigned long)header.e_entry);

    close(fd);
}

void print_error(const char *msg) {
    fprintf(stderr, "%s %s\n", msg, strerror(errno));
}

