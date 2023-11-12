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

/* first_shell.c */
int hsh(info_t *, char **);
int find_builtin(info_t *);
void find_cmd(info_t *);
void fork_cmd(info_t *);

/* err_functions.c */
void _eputs(char *);
int _eputchar(char);
int _putfd(char c, int fd);
int _putsfd(char *str, int fd);

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
int unset_alias(info_t *, char *);
int set_alias(info_t *, char *);
int print_alias(list_t *);
int _myalias(info_t *);

/* getline_function */
ssize_t input_buf(info_t *, char **, size_t *);
ssize_t get_input(info_t *);
ssize_t read_buf(info_t *, char *, size_t *);
int _getline(info_t *, char **, size_t *);
void sigintHandler(int);

/* env_builtin.c */
char *_getenv(info_t *, const char *);
int _myenv(info_t *);
int _mysetenv(info_t *);
int _myunsetenv(info_t *);
int populate_env_list(info_t *);

/* updatenv_builtin.c */
char **get_environ(info_t *);
int _unsetenv(info_t *, char *);
int _setenv(info_t *, char *, char *);
