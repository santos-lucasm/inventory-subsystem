#pragma once

#include <raylib.h>

namespace inv::slot {

class ISlot {
public:
  explicit ISlot(const Vector2 &position, const float &size,
                 const Color &background);

  void Draw() const;

private:
  Rectangle rect_;
  Color background_;
};

} // namespace inv::slot
