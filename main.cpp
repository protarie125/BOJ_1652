#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n;
vs S;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  S = vs(n);
  for (auto&& s : S) {
    cin >> s;
  }

  auto ans1 = 0LL;
  for (auto i = 0LL; i < n; ++i) {
    auto temp = 0LL;
    for (auto j = 0LL; j < n; ++j) {
      if ('.' == S[i][j]) {
        ++temp;
      } else {
        if (2 <= temp) {
          ++ans1;
        }
        temp = 0;
      }
    }

    if (2 <= temp) {
      ++ans1;
    }
  }

  auto ans2 = 0LL;
  for (auto j = 0LL; j < n; ++j) {
    auto temp = 0LL;
    for (auto i = 0LL; i < n; ++i) {
      if ('.' == S[i][j]) {
        ++temp;
      } else {
        if (2 <= temp) {
          ++ans2;
        }
        temp = 0;
      }
    }

    if (2 <= temp) {
      ++ans2;
    }
  }

  cout << ans1 << ' ' << ans2;

  return 0;
}