#ifndef FRAMES_H
#define FRAMES_H

#include <iostream>

struct frame {
  int value;
};

frame togray(const frame & f) {
  return frame{f.value + 1000};
}

frame filter(const frame & f, int level) {
  return frame{f.value + level};
}

struct my_filter {
  int level;
  frame operator()(const frame & f) {
    return filter(f,level);
  }
};

std::ostream & operator<<(std::ostream & os, const frame & f) {
  return os << f.value;
}

#endif
