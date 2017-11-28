#include <windows.h>
#include <stdio.h>

#include "application.h"
#include "window.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	application_t *app = init_application(hInstance, "TestApp");

	window_t *win = init_window(hInstance);

	return run_window();
}
