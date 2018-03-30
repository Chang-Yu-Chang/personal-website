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
