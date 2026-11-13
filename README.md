# SummaryLasso

A shrinkage estimator for polygenic risk prediction models based on summary statistics of genome-wide association studies.

Compatibility updates by Renova.

Version 1.2.1.9001 makes these changes. `DESCRIPTION`: the author is also listed in an `Authors@R` entry and `Author` reads `Ting-Huei Chen [aut, cre]` (maintainer address unchanged). `src/gsPEN.c` and `src/gsfPEN.c`: the include of `R_ext/PrtUtil.h` was removed and `string.h` added. New `src/init.c` registers the C routines `gsPEN` and `gsfFunc`. No R code was changed.

## Install

From R-universe:

```r
install.packages("SummaryLasso", repos = c(
  Renova = "https://renova-r.r-universe.dev",
  CRAN = "https://cloud.r-project.org"
))
```

Or the exact release tag:

```r
install.packages("remotes")
remotes::install_github("renova-r/SummaryLasso@renova-1.2.1.9001")
```

[Release notes](NEWS.md) · [Renova package directory](https://github.com/renova-r/revival-catalog)

SummaryLasso was written by Ting-Huei Chen (maintainer). License: GPL-3 (see [COPYING](COPYING)).
