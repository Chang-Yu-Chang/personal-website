#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
float simulateC (int k, int room, int replicate) {
  IntegerVector result (replicate); 
  for (int r=0; r<replicate; r++){
    IntegerVector counts(365);
    for (int i=0; i<room; i++) {
      int pos = rand() % 365;
      if (pos < 365 && pos >= 0) counts[pos] ++;
    } 
    if (max(counts) >= k) {
      result[r] = TRUE;
    } else result[r] = FALSE;
  }
  float prob = float(sum(result))/float(replicate);
  return prob;
}


#include <Rcpp.h>
// simulateC
float simulateC(int k, int room, int replicate);
RcppExport SEXP sourceCpp_1_simulateC(SEXP kSEXP, SEXP roomSEXP, SEXP replicateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type room(roomSEXP);
    Rcpp::traits::input_parameter< int >::type replicate(replicateSEXP);
    rcpp_result_gen = Rcpp::wrap(simulateC(k, room, replicate));
    return rcpp_result_gen;
END_RCPP
}
