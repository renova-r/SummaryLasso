#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

void gsPEN(double* RsummaryBetas, int* ldJ, int* dims, int* Numitervec,
     int* RIndexMatrix, int* IndJ,
     double* ldvec, double* inv_summaryBetas, int* ChrIndexBeta, double* RupperVal,
     double* Init_summaryBetas, double* RSDvec,
     double* RtuningMatrix, double* RBetaMatrix, char **penalty_);

void gsfFunc(double* RsummaryBetas, int* ldJ, int* dims, int* Numitervec,
     int* RIndexMatrix, int* IndJ,
     double* ldvec, int* ChrIndexBeta, double* RupperVal,
     double* Init_summaryBetas, double* RSDvec,
     double* RtuningMatrix, double* RBetaMatrix, char **penalty_,
     double* lambda0vec, double* RZmatrix, int* dims2,
     double* RAllTuningMatrix, double* lambdavec, int* RfuncLambda,
     int* IfuncSNP);

static const R_CMethodDef cMethods[] = {
  {"gsPEN", (DL_FUNC) &gsPEN, 15},
  {"gsfFunc", (DL_FUNC) &gsfFunc, 21},
  {NULL, NULL, 0}
};

void R_init_SummaryLasso(DllInfo *dll)
{
  R_registerRoutines(dll, cMethods, NULL, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
