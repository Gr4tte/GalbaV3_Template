#include "galba.h"

constexpr unsigned short WINDOW_WIDTH = 1080;
constexpr unsigned short WINDOW_HEIGHT = 720;

void update()
{

}

void render()
{
	
}

int main()
{
	initialize(WINDOW_WIDTH, WINDOW_HEIGHT, "Main_Window");

	while (is_window_open())
	{
		update();

		clear_window();
		render();
		display();
	}

	return 0;
}