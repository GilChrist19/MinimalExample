// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// WriteMatCpp
void WriteMatCpp(String& fileName, NumericMatrix& testMat);
RcppExport SEXP _MinEx_WriteMatCpp(SEXP fileNameSEXP, SEXP testMatSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String& >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type testMat(testMatSEXP);
    WriteMatCpp(fileName, testMat);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MinEx_WriteMatCpp", (DL_FUNC) &_MinEx_WriteMatCpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_MinEx(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
