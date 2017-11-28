#include <windows.h>

typedef struct {
	int x;
	int y;
	
	char *text;	
} button_t;

button_t *init_button(const char *text);
