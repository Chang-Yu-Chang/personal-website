#include <Rcpp.h>

// [[Rcpp::export]]
int fibonacci(const int x) {
    if (x == 0 || x == 1) return(x);
    return (fibonacci(x - 1)) + fibonacci(x - 2);
}



#include <Rcpp.h>
// fibonacci
int fibonacci(const int x);
RcppExport SEXP sourceCpp_1_fibonacci(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fibonacci(x));
    return rcpp_result_gen;
END_RCPP
}
