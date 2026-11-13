# SummaryLasso 1.2.1.9001

Renova release, based on CRAN SummaryLasso 1.2.1 (published 2019-11-15).

- `DESCRIPTION`: added `Authors@R` (Ting-Huei Chen, aut/cre, same maintainer address) and changed `Author` to `Ting-Huei Chen [aut, cre]`.
- `src/gsPEN.c`, `src/gsfPEN.c`: removed `#include <R_ext/PrtUtil.h>`; added `#include <string.h>`.
- `src/init.c` (new): registers `gsPEN` and `gsfFunc` with `R_registerRoutines` and turns off dynamic symbol lookup; no algorithm was changed.
- `DESCRIPTION`: `Version` set to `1.2.1.9001`; "Compatibility updates by Renova." appended to `Description`.
- The stale `MD5` file was removed. `COPYING` (license text), `README.md`, `NEWS.md` and `.Rbuildignore` were added.
