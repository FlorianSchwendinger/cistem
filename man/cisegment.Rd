\name{cisegment}
\alias{cisegment}
\title{Segment words}
\description{
    This function computes the stems of a given vector of words.
    It is assumed that the language of the words is German.
}
\usage{
    cisegment(words, case_sensitive = TRUE)
}
\arguments{
  \item{words}{a character vector of words.}
  \item{case_sensitive}{a logical giving if a case sensitive stemming should
  be performed (default is \code{TRUE}). Case insensitive stemming can
  improve the performance if there are errors in the text.}
}
\value{
  A matrix with two columns where the first column contains the 
  stem and the second column contains the rest that was removed at
  the end.
}
\references{
  \url{https://github.com/LeonieWeissweiler/CISTEM}

  Leonie Weissweiler, Alexander Fraser (2017). Developing a Stemmer for German Based on a Comparative Analysis of Publicly Available Stemmers. In Proceedings of the German Society for Computational Linguistics and Language Technology (GSCL), to appear.
}
\author{Florian Schwendinger}
\examples{
  cisegment(c("Programmieren", "Programmierer"))
}
