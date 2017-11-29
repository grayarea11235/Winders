#include <windows.h>

#include "button.h"

#define CTRL_RADIO 0
#define CTRL_BUTTON 1

typedef enum {

} control_type_t;

typedef union {
	int type;
	void *control_data;
} control_t;

typedef struct {
	HINSTANCE hInstance;
	char *name;
		
} application_t;


application_t *get_application();
application_t *init_application(HINSTANCE hInstance, const char *name);
void application_run();

