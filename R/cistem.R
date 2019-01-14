

cistem <- function(words, case_sensitive = TRUE) {
    stopifnot(is.character(words), is.logical(case_sensitive))
    cistem_stem(words, !case_sensitive)
}


cisegment <- function(words, case_sensitive = TRUE) {
    stopifnot(is.character(words), is.logical(case_sensitive))
    cistem_segment(words, !case_sensitive)
}

