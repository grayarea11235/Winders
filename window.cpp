#include <windows.h>

typedef struct {
	WNDCLASSEX wc; 
	HWND hwnd; 		
} window_t;


#include <windows.h>

/* This is where all the input to the window goes to */
LRESULT CALLBACK _WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
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


window_t *init_window(HINSTANCE hInstance) {
	MSG msg; 
	window_t *new_window = (window_t *)malloc(sizeof(window_t));
	
	memset(&new_window->wc, 0, sizeof(new_window->wc));
	new_window->wc.cbSize = sizeof(WNDCLASSEX);
	new_window->wc.lpfnWndProc = _WndProc; 
	new_window->wc.hInstance = hInstance;
	new_window->wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	
	new_window->wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	new_window->wc.lpszClassName = "WindowClass";
	new_window->wc.hIcon = LoadIcon(NULL, IDI_APPLICATION); 
	new_window->wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION); 

	if (!RegisterClassEx(&new_window->wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!", MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}

	new_window->hwnd = CreateWindowEx(WS_EX_CLIENTEDGE, "WindowClass", "Caption", WS_VISIBLE | WS_OVERLAPPEDWINDOW,
										CW_USEDEFAULT, /* x */
										CW_USEDEFAULT, /* y */
										640, /* width */
										480, /* height */
										NULL,NULL,hInstance,NULL);

	if(new_window->hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!", "Error!", MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	return new_window;
}

void destroy_window(window_t *wnd) {
	
}




