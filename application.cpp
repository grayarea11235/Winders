#include <windows.h>
#include <string.h>

#include "application.h"

static application_t *application;

LRESULT CALLBACK app_wnd_proc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

application_t *init_application(HINSTANCE hInstance, const char *name) {
	application = (application_t *)malloc(sizeof(application_t));
	application->hInstance = hInstance;
	application->name = strdup(name);
	
	return application;
}

void deinit_application(application_t *app) {
	
}

application_t *get_application() {
	return application;
}

void app_add_form(control_t *control) {
	
}

void application_run() {
}
