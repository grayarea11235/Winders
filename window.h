// window.h

typedef struct {
	WNDCLASSEX wc; 
	HWND hwnd; 		
} window_t;

window_t *init_window(HINSTANCE hInstance);
int run_window();
