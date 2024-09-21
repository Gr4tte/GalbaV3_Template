// Name

// Assignment text

#include "galba.h"
#include <iostream>

constexpr unsigned short WINDOW_WIDTH = 1080;
constexpr unsigned short WINDOW_HEIGHT = 720;
const std::string WINDOW_TITLE = "Main_Window";
constexpr Color BACKGROUND_COLOR = BLACK;

struct Circle
{
	Vector2 Position;
	float Radius;
	Color Color;

	Circle(const Vector2 &position, const float &radius, const RAYLIB_H::Color &color = white)
		: Position(position), Radius(radius), Color(color) { }

	void Render() const
	{
		DrawCircle(static_cast<int>(Position.x), static_cast<int>(Position.y), Radius, Color);
	}

	bool IsPointInside(Vector2 point) const
	{
		return CheckCollisionPointCircle(point, Position, Radius);
	}
};

static void Update()
{
	Vector2 mousePosition = GetMousePosition();
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