#include <grid.hpp>
#include <iostream>
#include <raylib.h>
#include <slot/slot.hpp>

static constexpr int kWindowWidth = 1200;
static constexpr int kWindowHeight = 720;

void DrawInventoryTitle() {
  std::string_view text = "INVENTORY HERE";
  const int text_font_size = 20;
  const int text_width = MeasureText(text.data(), 20);
  const int text_pos_x = kWindowWidth / 2 - text_width / 2;
  const int text_pos_y = kWindowHeight / 10;
  DrawText(text.data(), text_pos_x, text_pos_y, text_font_size, DARKPURPLE);
}

int main(void) {

  InitWindow(kWindowWidth, kWindowHeight, "INVENTORY");

  inv::Grid backpack_grid(Vector2(50.f, kWindowHeight / 2.f), 6, 6, 50.0f,
                          BLACK);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BEIGE);

    DrawInventoryTitle();
    backpack_grid.Draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
