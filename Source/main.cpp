// Name

// Assignment text

#include "galba.h"
#include <iostream>

constexpr unsigned short WINDOW_WIDTH = 1080;
constexpr unsigned short WINDOW_HEIGHT = 720;
const std::string WINDOW_TITLE = "Main_Window";
constexpr Color BACKGROUND_COLOR = BLACK;

static void Update()
{

}

static void Render()
{

}

int main()
{
	initialize(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

	while (is_window_open())
	{
		Update();

		ClearBackground(BACKGROUND_COLOR);
		Render();
		EndDrawing();
	}

	return 0;
}