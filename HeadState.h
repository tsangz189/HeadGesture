#ifndef HEAD_STATE_H_
#define HEAD_STATE_H_

#include "HeadGesture.h"

class HeadGesture;

class HeadState {
 public:
  virtual void enter(HeadGesture* gesture) = 0;
  virtual void exit(HeadGesture* gesture) = 0;

  virtual ~HeadState() {}
};

#endif  // HEAD_STATE_H_
