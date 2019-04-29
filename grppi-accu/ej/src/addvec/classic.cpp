#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using numvec = std::vector<double>;

numvec add(const numvec & v1, const numvec & v2) {
  numvec res;
  res.reserve(v1.size()) ; // Asume equal sizes
  for (int i =0; i <v1.size(); ++i) {
    res.push_back(v1[i]+v2[i]) ;
  }
  return res;
}


void print(std::ostream & os, const numvec & v) {
  for (auto x : v) {
    os << x << "  ";
  }
  os << "\n";
}

void f() {
  using std::cout;
  constexpr int max = 5;
  numvec a(max),b(max);
  std::iota(a.begin(), a.end(), 0);
  std::iota(b.begin(), b.end(), 10);

  print(cout, a);
  print(cout, b);
  
  auto res = add(a,b);
  print(cout, res);
}

int main() {
  f();
}


