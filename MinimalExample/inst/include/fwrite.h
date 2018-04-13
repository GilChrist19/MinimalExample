#ifndef FWRITE
#define FWRITE


  #define STRICT_R_HEADERS
  #include <R.h>
  #define STOP     error

  #define USE_RINTERNALS

  #include <Rinternals.h>
  #include <stdint.h>

  typedef void (*writer_fun_t)(void *, int64_t, char **);

  void writeInt32();
  void writeFloat64();
  void writeString();

  void write_chars(const char *source, char **dest);

  SEXP fwriteMain(SEXP MAT, SEXP filename_Arg, SEXP sep_Arg,
                  SEXP eol_Arg, SEXP dec_Arg, SEXP buffMB_Arg);


#endif
