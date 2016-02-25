// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// backgroundModel2
List backgroundModel2(NumericMatrix P, int nsamples, int samplesize);
RcppExport SEXP triwise_backgroundModel2(SEXP PSEXP, SEXP nsamplesSEXP, SEXP samplesizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< int >::type samplesize(samplesizeSEXP);
    __result = Rcpp::wrap(backgroundModel2(P, nsamples, samplesize));
    return __result;
END_RCPP
}