#include <iostream>
#include <vector>
#include <algorithm>

#include <grppi/grppi.h>

#include "frames.h"

using frameseq = std::vector<frame>;

frameseq seq_togray(const frameseq & s) {
  frameseq r(s.size());

  grppi::sequential_execution seq;
  grppi::map(seq, s.begin(), s.end(), r.begin(), my_filter{64});

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
