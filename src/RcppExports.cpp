// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cistem_stem
std::vector<std::wstring> cistem_stem(std::vector<std::wstring> words, bool case_insensitive);
RcppExport SEXP _cistem_cistem_stem(SEXP wordsSEXP, SEXP case_insensitiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::wstring> >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< bool >::type case_insensitive(case_insensitiveSEXP);
    rcpp_result_gen = Rcpp::wrap(cistem_stem(words, case_insensitive));
    return rcpp_result_gen;
END_RCPP
}
// cistem_segment
StringMatrix cistem_segment(std::vector<std::wstring> words, bool case_insensitive);
RcppExport SEXP _cistem_cistem_segment(SEXP wordsSEXP, SEXP case_insensitiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::wstring> >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< bool >::type case_insensitive(case_insensitiveSEXP);
    rcpp_result_gen = Rcpp::wrap(cistem_segment(words, case_insensitive));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cistem_cistem_stem", (DL_FUNC) &_cistem_cistem_stem, 2},
    {"_cistem_cistem_segment", (DL_FUNC) &_cistem_cistem_segment, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_cistem(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
