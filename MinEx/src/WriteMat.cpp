#include <Rcpp.h>

using namespace Rcpp;

//extern "C"{
//  #include "fwrite.h"
//}

extern "C" SEXP fwriteMain(SEXP MAT,   //matrix test
                SEXP filename_Arg,
                SEXP sep_Arg,
                SEXP eol_Arg,
                SEXP dec_Arg,
                SEXP buffMB_Arg);         // [1-1024] default 8MB
  

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
  fwriteMain(wrap(testMat), wrap(patchName), wrap(comma), wrap(eol), wrap(dot), wrap(buffMem));

}
