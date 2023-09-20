#ifndef SHELL_H
#define SHELL_H

/---Standard C Library---/
#include <unistd.h> /isatty/
#include <stdio.h>
#include <stdlib.h> /exit functions/


/---Prototypes Functions---/
/main.c file/
void interactive_mode(void);
void non_interactive_mode(void);


#endif
