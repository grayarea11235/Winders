#include <windows.h>

#include "button.h"

typedef union {
	int type;	
} control_t;

typedef struct { 
} form_t;

typedef struct {
	HINSTANCE hInstance;
	char *name;
		
} application_t;


application_t *get_application();
application_t *init_application(HINSTANCE hInstance, const char *name);
