#include <Rcpp.h>

using namespace Rcpp;

extern "C"{
  #include "fwrite.h"
}


//' @export
// [[Rcpp::export]]
void WriteMatCpp(String& fileName, NumericMatrix& testMat){

  Rcpp::Rcout<<"I did start!"<<std::endl;

  String patchName = fileName;
  int whichRow = 1;
  
  std::string new_string = std::string(3 - toString(whichRow).length(), '0')
    + toString(whichRow);
  patchName.replace_last(".csv", new_string+".csv");
  
  
  //Set objects to pass to print function
  String comma = ",";
  String eol = "\n";
  String dot = ".";
  int buffMem = 8;
  
  //This is where I crash, giving a SIGSEV error
  fwriteMain(testMat, (SEXP)&patchName, (SEXP)&comma, (SEXP)&eol,
             (SEXP)&dot, (SEXP)&buffMem);

}
