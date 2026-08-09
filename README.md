## `hi!`
this is a github repository for C++ templates that are used for competitve programming.  
the main option is using `base/template.cpp` and `base/Makefile`. but for support for some Macs copy `extras/bits` into the same folder as `main.cpp` including with `#include "bits/stdc++.h"` instead of `#include <bits/stdc++.h>`
this repository is under the **MIT License**
note: the `bits/stdc++.h` extra is under the **GNU General Public License** with **GCC Runtime Library Exception**. Read the comment in the specified file before using it.  
### `contents`  
`base/template.cpp`    
- fast i/o.
- testcase support. (uncomment //cin >> tsc;).
- `endl` char instead of `'\n'`.
- `pb(x)` for vector/deque `push_back(x)`.
- `all(x)` for `(x).begin(), (x).end()`.
- `sz(x)` returns int instead of size_t.
- `pii` for `pair<int,int>`.
- `YES`/`NO` macros for quick output.
- local runtime timing via `#ifdef LOCAL` (compile with `-D LOCAL` to enable).
- *minimal*
  
`base/Makefile`
* uses `ccache g++` for fast incremental compiles (or `g++` if ccache unavailable).
* compiles `main.cpp` into `main`.
* `-D LOCAL` flag enables runtime timing in template.
* default standard: `C++20`.
* `make run` builds and runs the program.
* `make clean` removes the compiled binary.

`extras/template.cpp`
* older template version.
* includes extra aliases and constants.
* uses `#pragma GCC optimize("O3")`.
* includes `bits/stdc++.h`.
* not recommended for regular use.

*thanks for using this template!*
