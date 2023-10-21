#include "main.h"
/**
 * custom_check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit with a custom error code.
 */
void custom_check_elf(unsigned char *e_ident)
{
int i;

for (i = 0; i < 4; i++)
{
if (e_ident[i] != 127 &&
e_ident[i] != 'E' &&
e_ident[i] != 'L' &&
e_ident[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n")
exit(ELF_NOT_FOUND);
}
}
}

/**
 * custom_print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void custom_print_magic(unsigned char *e_ident)
{
int x;

printf("  Custom Magic:   ");

for (x = 0; x < EI_NIDENT; x++)
{
printf("%02x", e_ident[x]);

if (x == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
 * custom_print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void custom_print_class(unsigned char *e_ident)
{
printf("  Custom Class:                             ");
switch (e_ident[EI_CLASS])
{
case CUSTOM_ELFCLASS_NONE:
printf("none\n");
break;
case CUSTOM_ELFCLASS_32:
printf("ELF32\n");
break;
case CUSTOM_ELFCLASS_64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * custom_print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF data.
 */
void custom_print_data(unsigned char *e_ident)
{
printf("  Custom Data:                              ");

switch (e_ident[EI_DATA])
{
case CUSTOM_ELFDATA_NONE:
printf("none\n");
break;
case CUSTOM_ELFDATA_2LSB:
printf("2's complement, little endian\n");
break;
case CUSTOM_ELFDATA_2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * custom_print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void custom_print_version(unsigned char *e_ident)
{
printf("  Custom Version:                           %d",
e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case CUSTOM_EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
 * custom_print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF OS/ABI.
 */
void custom_print_osabi(unsigned char *e_ident)
{
printf("  Custom OS/ABI:                            ");

switch (e_ident[EI_OSABI])
{
case CUSTOM_ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case CUSTOM_ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case CUSTOM_ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case CUSTOM_ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case CUSTOM_ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case CUSTOM_ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case CUSTOM_ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case CUSTOM_ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case CUSTOM_ELFOSABI_ARM:
printf("ARM\n");
break;
case CUSTOM_ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}

/**
 * custom_print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void custom_print_abi(unsigned char *e_ident)
{
printf("  Custom ABI Version:                       %d\n",
e_ident[EI_ABIVERSION]);
}

/**
 * custom_print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void custom_print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == CUSTOM_ELFDATA_2MSB)
e_type >>= 8;

printf("  Custom Type:                              ");

switch (e_type)
{
case CUSTOM_ET_NONE:
printf("NONE (None)\n");
break;
case CUSTOM_ET_REL:
printf("REL (Relocatable file)\n");
break;
case CUSTOM_ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case CUSTOM_ET_DYN:
printf("DYN (Shared object file)\n");
break;
case CUSTOM_ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}

/**
 * custom_print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void custom_print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Custom Entry point address:               ");

if (e_ident[EI_DATA] == CUSTOM_ELFDATA_2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident[EI_CLASS] == CUSTOM_ELFCLASS_32)
printf("%#x\n", (unsigned int)e_entry);
else
printf("%#lx\n", e_entry);
}

/**
 * custom_close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed
 */
void custom_close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Custom Error: Can't close fd %d\n", elf);
exit(CUSTOM_CANT_CLOSE_FD);
}
}

/**
 * custom_main - Displays the information contained in header file
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: A custom success code on success.
 *
 * Description: If the file is not an ELF File or the function fails
 */
int custom_main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *custom_header;
int fd, s;

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Custom Error: Can't read file %s\n", argv[1]);
exit(CUSTOM_CANT_READ_FILE);
}
custom_header = malloc(sizeof(Elf64_Ehdr));
if (custom_header == NULL)
{
custom_close_elf(fd);
dprintf(STDERR_FILENO, "Custom Error: Can't read file %s\n", argv[1]);
exit(CUSTOM_CANT_READ_FILE);
}
s = read(fd, custom_header, sizeof(Elf64_Ehdr));
if (s == -1)
{
free(custom_header);
custom_close_elf(fd);
dprintf(STDERR_FILENO, "Custom Error: `%s`: No such file\n", argv[1]);
exit(CUSTOM_NO_SUCH_FILE);
}

custom_check_elf(custom_header->e_ident);
printf("Custom ELF Header:\n");
custom_print_magic(custom_header->e_ident);
custom_print_class(custom_header->e_ident);
custom_print_data(custom_header->e_ident);
custom_print_version(custom_header->e_ident);
custom_print_osabi(custom_header->e_ident);
custom_print_abi(custom_header->e_ident);
custom_print_type(custom_header->e_type, custom_header->e_ident);
custom_print_entry(custom_header->e_entry, custom_header->e_ident);

free(custom_header);
custom_close_elf(fd);
return (CUSTOM_SUCCESS);
}
