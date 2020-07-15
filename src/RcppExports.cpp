// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// compute_groupcond_logl
double compute_groupcond_logl(NumericMatrix x, NumericMatrix muy, NumericVector sigmayw, NumericMatrix muwz, NumericMatrix sigmaz, NumericVector ghweight, double detvarz, IntegerVector dims);
RcppExport SEXP _CountReg_compute_groupcond_logl(SEXP xSEXP, SEXP muySEXP, SEXP sigmaywSEXP, SEXP muwzSEXP, SEXP sigmazSEXP, SEXP ghweightSEXP, SEXP detvarzSEXP, SEXP dimsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type muy(muySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sigmayw(sigmaywSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type muwz(muwzSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sigmaz(sigmazSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ghweight(ghweightSEXP);
    Rcpp::traits::input_parameter< double >::type detvarz(detvarzSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dims(dimsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_groupcond_logl(x, muy, sigmayw, muwz, sigmaz, ghweight, detvarz, dims));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _CountReg_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CountReg_compute_groupcond_logl", (DL_FUNC) &_CountReg_compute_groupcond_logl, 8},
    {"_CountReg_rcpp_hello_world", (DL_FUNC) &_CountReg_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_CountReg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
