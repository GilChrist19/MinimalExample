#' @export
#' @useDynLib MinimalExample fwriteMain
WriteMat <- function(mat, file, sep, eol, dec, buffMB) .Call(fwriteMain, mat, file, sep, eol, dec, buffMB)
