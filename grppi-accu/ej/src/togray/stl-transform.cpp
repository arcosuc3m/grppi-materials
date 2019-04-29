#include <iostream>
#include <vector>
#include <algorithm>

#include "frames.h"

using frameseq = std::vector<frame>;

frameseq seq_togray(const frameseq & s) {
  frameseq r;
  r.reserve(s.size ()) ;

  std::transform(s.begin(), s.end(), std::back_inserter(r), togray);

  return r;
}

int main() {
  frameseq s;
  for (int i=0;i<10;++i) {
    s.push_back(frame{i});
  }

  auto t = seq_togray(s);

  for (int i=0; i<t.size(); ++i) {
    std::cout << "i -> " << t[i] << "\n";
  }
}
