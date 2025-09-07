#include <grid.hpp>
#include <slot/slot.hpp>

namespace inv {

Grid::Grid(const Vector2 &starting_position, const int width, const int height,
           const float grid_size, const Color background_color)
    : position_(starting_position), bg_color_(background_color) {
  InitializeSlots(width, height, grid_size);
}

void Grid::InitializeSlots(const int width, const int height,
                           const float grid_size) {
  for (int i = 0; i < width * height; i++) {
    auto slot = slot::ISlot(Vector2(position_.x + (i / width) * grid_size,
                                    position_.y + (i % width) * grid_size),
                            grid_size, bg_color_);
    slots_.push_back(slot);
  }
}

void Grid::Draw() const {
  for (auto slot : slots_) {
    slot.Draw();
  }
}
} // namespace inv
