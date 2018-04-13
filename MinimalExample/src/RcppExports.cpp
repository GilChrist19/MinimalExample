// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// WriteMatCpp
void WriteMatCpp(String& fileName, NumericMatrix& testMat);
RcppExport SEXP _MinimalExample_WriteMatCpp(SEXP fileNameSEXP, SEXP testMatSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String& >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type testMat(testMatSEXP);
    WriteMatCpp(fileName, testMat);
    return R_NilValue;
END_RCPP
}

RcppExport SEXP fwriteMain(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_MinimalExample_WriteMatCpp", (DL_FUNC) &_MinimalExample_WriteMatCpp, 2},
    {"fwriteMain",                  (DL_FUNC) &fwriteMain,                  6},
    {NULL, NULL, 0}
};

RcppExport void R_init_MinimalExample(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
