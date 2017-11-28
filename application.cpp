#include <windows.h>
#include <string.h>

#include "application.h"

static application_t *application;

application_t *init_application(HINSTANCE hInstance, const char *name) {
	application = (application_t *)malloc(sizeof(application_t));
	application->hInstance = hInstance;
	application->name = strdup(name);
}

void deinit_application(application_t *app) {
	
}

application_t *get_application() {
	return application;
}


