#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void custom_check_elf(unsigned char *e_ident);
void custom_print_magic(unsigned char *e_ident);
void custom_print_class(unsigned char *e_ident);
void custom_print_data(unsigned char *e_ident);
void custom_print_version(unsigned char *e_ident);
void custom_print_osabi(unsigned char *e_ident);
void custom_print_abi(unsigned char *e_ident);
void custom_print_type(unsigned int e_type, unsigned char *e_ident);
void custom_print_entry(unsigned long int e_entry, unsigned char *e_ident);
void custom_close_elf(int elf);

#endif
