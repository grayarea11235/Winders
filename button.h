#include <windows.h>

#ifndef _BUTTON_H
#define _BUTTON_H

typedef struct {
	int x;
	int y;
	
	char *text;	
} button_t;

button_t *init_button(const char *text);

#endif
