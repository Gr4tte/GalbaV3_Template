#include "galba.h"

#include "raylib.h"

#include <cstdlib>
#include <ctime>

Color clear_color = BLACK;

void initialize(unsigned int window_width, unsigned int window_height, const std::string& title)
{
    InitWindow(window_width, window_height, title.c_str());
    
    SetExitKey(0);
    SetTargetFPS(0);

    SetWindowState(FLAG_VSYNC_HINT);

    srand((unsigned int) time(NULL));
}

bool is_window_open()
{
    BeginDrawing();
    return !WindowShouldClose();
}

int get_window_width()
{
    return GetRenderWidth();
}

int get_window_height()
{
    return GetRenderHeight();
}

void set_window_title(const std::string& title)
{
    SetWindowTitle(title.c_str());
}

float random_float_01()
{
    return rand() / (float) RAND_MAX;
}

float random_float_in_range(float min, float max)
{
    return random_float_01() * (max - min) + min;
}

int random_int_in_range(int min, int max)
{
    return rand() % (max - min) + min;
}

constexpr int key_to_raylib(Key key)
{
    switch(key)
    {
        case Key::Left: return KEY_LEFT;
        case Key::Right: return KEY_RIGHT;
        case Key::Up: return KEY_UP;
        case Key::Down: return KEY_DOWN;
        case Key::Space: return KEY_SPACE;
        case Key::Escape: return KEY_ESCAPE;
        case Key::Return: return KEY_ENTER;
    }

    return 0;
}

constexpr int button_to_raylib(Button button)
{
    switch(button)
    {
        case Button::Left: return MOUSE_BUTTON_LEFT;
        case Button::Right: return MOUSE_BUTTON_RIGHT;
    }

    return 0;
}

bool is_key_held_down(Key key)
{
    return IsKeyDown(key_to_raylib(key));
}

bool is_key_pressed(Key key)
{
    return IsKeyPressed(key_to_raylib(key));
}

bool is_key_released(Key key)
{
    return IsKeyReleased(key_to_raylib(key));
}

int get_mouse_x()
{
    return (int) GetMousePosition().x;
}

int get_mouse_y()
{
    return (int) GetMousePosition().y;
}

bool is_button_held_down(Button button)
{
    return IsMouseButtonDown(button_to_raylib(button));
}

bool is_button_pressed(Button button)
{
    return IsMouseButtonPressed(button_to_raylib(button));
}

bool is_button_released(Button button)
{
    return IsMouseButtonReleased(button_to_raylib(button));
}

void clear_window()
{
    ClearBackground(clear_color);
}

void display()
{
    EndDrawing();
}

void set_clear_color(unsigned char r, unsigned char g, unsigned char b)
{
    clear_color.r = r;
    clear_color.g = g;
    clear_color.b = b;
    clear_color.a = 255;
}

void set_clear_color(Color color)
{
    clear_color.r = color.r;
    clear_color.g = color.g;
    clear_color.b = color.b;
    clear_color.a = color.a;
}

void draw_pixel(int x, int y)
{
    DrawPixel(x, y, WHITE);
}

void draw_pixel(int x, int y, Color color)
{
    DrawPixel(x, y, color);
}

void draw_pixel(int x, int y, unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    DrawPixel(x, y, Color{r, g, b, a});
}

void draw_rectangle(int top_left_x, int top_left_y, int width, int height)
{
    DrawRectangle(top_left_x, top_left_y, width, height, WHITE);
}

void draw_rectangle(int top_left_x, int top_left_y, int width, int height, Color color)
{
    DrawRectangle(top_left_x, top_left_y, width, height, color);
}

void draw_rectangle(int top_left_x, int top_left_y, int width, int height, unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    DrawRectangle(top_left_x, top_left_y, width, height, Color{r, g, b, a});
}

void draw_circle(int center_x, int center_y, int radius)
{
    DrawCircle(center_x, center_y, (float) radius, WHITE);
}

void draw_circle(int center_x, int center_y, int radius, Color color)
{
    DrawCircle(center_x, center_y, (float) radius, color);
}

void draw_circle(int center_x, int center_y, int radius, unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    DrawCircle(center_x, center_y, (float) radius, Color{r, g, b, a});
}

void draw_text(int x, int y, unsigned char r, unsigned char g, unsigned char b, unsigned char a, const std::string& text)
{
    DrawText(text.c_str(), x, y, 24, Color{ r, g, b, a });
}

void draw_text(int x, int y, Color color, const std::string& text)
{
    DrawText(text.c_str(), x, y, 24, color);
}