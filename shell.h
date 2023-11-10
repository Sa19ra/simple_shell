#ifndef SHELL_H
#define SHELL_H

/**
 *struct builtin - Structure holding a command flag
 *                 and its corresponding function
 *@type: A string representing the built-in command flag
 *@func: Pointer to the function associated with the specified command
 */
typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
} builtin_table;

/* string_functions.c */
int _strlen(char *);
int _strcmp(char *, char *);
char *starts_with(const char *, const char *);
char *_strcat(char *, char *);

/* string_functions2.c */
char *_strcpy(char *, char *);
char *_strdup(const char *);
void _puts(char *);
int _putchar(char);

/* string_functions3.c */
char *_strncpy(char *, char *, int);
char *_strncat(char *, char *, int);
char *_strchr(char *, char);
char **strtow(char *, char *);
char **strtow2(char *, char);

/* storage_functions */
char *_memset(char *, char, unsigned int);
void ffree(char **);
void *_realloc(void *, unsigned int, unsigned int);
int bfree(void **);

/* path.c */
int is_cmd(info_t *, char *);
char *dup_chars(char *, int, int);
char *find_path(info_t *, char *, char *);

/* exit_emulators.c */
int _myexit(info_t *);
int _mycd(info_t *);
int _myhelp(info_t *);
int _myhistory(info_t *);

/* alias_builtin.c */
int _myalias(info_t *);
