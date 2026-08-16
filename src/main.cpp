#include "main.hpp"

int main() {
    int screenWidth = 600;
    int screenHeight = 1200;

    raylib::Window window(screenWidth, screenHeight, "ray-base++");
    window.SetTargetFPS(60);

    while (!raylib::Window::ShouldClose()) {
        window.BeginDrawing();
        window.ClearBackground(raylib::Color::White());
        raylib::DrawText("Hello, raylib-cpp!", 190, 200, 32, raylib::Color::DarkGray());
        window.EndDrawing();
    }

    return 0;
}
