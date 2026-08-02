## `hi!`
this is a github repository for C++ templates that are used for competitve programming.  
the main option is using `base/template.cpp` and `base/Makefile`. but for support for some Macs copy `extras/bits` into the same folder as `main.cpp` including with `#include "bits/stdc++.h"` instead of `#include <bits/stdc++.h>`
this repository is under the **MIT License**

note: the `bits/stdc++.h` extra is under the **GNU General Public License** with **GCC Runtime Library Exception**. Read the comment in the specified file before using it.  

### `contents`  
`base/template.cpp`    

- fast i/o.
- testcase support. (uncomment //cin >> tsc;).
- `nl` char instead of `'\n'`.
- `pb(x)` for vector/deque `push_back(x)`.
- `all(x)` for `(x).begin(), (x).end()`.
- `INF` settable infinity long long (default 1e6).
- `sz(x)` returns int instead of size_t.
- *minimal ;)*
  
`base/Makefile`

* simple compile-and-run setup.
* uses `g++` by default.
* compiles `main.cpp` into `main`.
* default standard: `C++17`.
* `make run` builds and runs the program.
* `make clean` removes the compiled binary.

`extras/template.cpp`

* older template version.
* includes extra aliases and constants.
* uses `#pragma GCC optimize("O3")`.
* includes `bits/stdc++.h`.
* not recommended for regular use.

*thanks for using this template!*
