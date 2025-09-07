#pragma once

#include <slot/slot.hpp>
#include <vector>

namespace inv {
class Grid {
public:
  explicit Grid(const Vector2 &starting_position, const int width,
                const int height, const float grid_size,
                const Color background_color);

  void InitializeSlots(const int width, const int height,
                       const float grid_size);
  void Draw() const;

private:
  std::vector<slot::ISlot> slots_;
  Vector2 position_;
  Color bg_color_;
};
} // namespace inv
