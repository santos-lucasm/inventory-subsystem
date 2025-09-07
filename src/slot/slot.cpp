#include "slot/slot.hpp"

namespace inv::slot {

ISlot::ISlot(const Vector2 &position, const float &size,
             const Color &background)
    : rect_(Rectangle{
          .x = position.x, .y = position.y, .width = size, .height = size}),
      background_(background) {}

void ISlot::Draw() const { DrawRectangleLinesEx(rect_, 1, background_); }

} // namespace inv::slot
