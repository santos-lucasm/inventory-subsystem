#include <iostream>
#include <raylib.h>

int main(void) {

  const int w_width = 1200;
  const int w_height = 720;
  InitWindow(w_width, w_height, "INVENTORY");

  while (!WindowShouldClose()) {

    BeginDrawing();
    ClearBackground(BEIGE);

    std::string_view text = "INVENTORY HERE";
    const int text_font_size = 20;
    const int text_width = MeasureText(text.data(), 20);
    const int text_pos_x = w_width / 2 - text_width / 2;

    DrawText(text.data(), text_pos_x, w_height / 2, text_font_size, DARKPURPLE);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
