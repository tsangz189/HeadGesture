#ifndef HEAD_GESTURE_H_
#define HEAD_GESTURE_H_

#include "HeadState.h"

class HeadGesture {
 public:
  HeadGesture();
  inline HeadState* GetCurrentState() const { return current_state; }

  void SetState(HeadState& new_state);

 private:
  HeadState* current_state;
};

#endif  // HEAD_GESTURE_H_
