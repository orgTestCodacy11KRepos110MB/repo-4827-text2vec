% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/vocabulary.R
\name{create_vocabulary}
\alias{create_vocabulary}
\alias{vocabulary}
\alias{create_vocabulary.character}
\alias{create_vocabulary.itoken}
\alias{create_vocabulary.itoken_parallel}
\title{Creates a vocabulary of unique terms}
\usage{
create_vocabulary(it, ngram = c(ngram_min = 1L, ngram_max = 1L),
  stopwords = character(0), sep_ngram = "_", window_size = 0L, ...)

vocabulary(it, ngram = c(ngram_min = 1L, ngram_max = 1L),
  stopwords = character(0), sep_ngram = "_", window_size = 0L, ...)

\method{create_vocabulary}{character}(it, ngram = c(ngram_min = 1L,
  ngram_max = 1L), stopwords = character(0), sep_ngram = "_",
  window_size = 0L, ...)

\method{create_vocabulary}{itoken}(it, ngram = c(ngram_min = 1L,
  ngram_max = 1L), stopwords = character(0), sep_ngram = "_",
  window_size = 0L, ...)

\method{create_vocabulary}{itoken_parallel}(it, ngram = c(ngram_min = 1L,
  ngram_max = 1L), stopwords = character(0), sep_ngram = "_",
  window_size = 0L, ...)
}
\arguments{
\item{it}{iterator over a \code{list} of \code{character} vectors,
which are the documents from which the user wants to construct a vocabulary.
See \link{itoken}.
Alternatively, a \code{character} vector of user-defined vocabulary terms
(which will be used "as is").}

\item{ngram}{\code{integer} vector. The lower and upper boundary of the range
of n-values for different n-grams to be extracted. All values of \code{n}
such that ngram_min <= n <= ngram_max will be used.}

\item{stopwords}{\code{character} vector of stopwords to filter out. \bold{NOTE} that
stopwords will be used "as is". This means that if preprocessing function in \link{itoken} does some
text modification (like stemming), then this preprocessing need to be applied to stopwords before passing them here.
See \url{https://github.com/dselivanov/text2vec/issues/228} for example.}

\item{sep_ngram}{\code{character} a character string to concatenate words in ngrams}

\item{window_size}{\code{integer} (0 by default). If \code{window_size > 0} than vocabulary will
be created from pseudo-documents which are obtained by virtually splitting each documents into
chunks of the length \code{window_size} by going with sliding window through them.
This is useful for creating special statistics which are used for coherence estimation in topic models.}

\item{...}{placeholder for additional arguments (not used at the moment).}
}
\value{
\code{text2vec_vocabulary} object, which is actually a \code{data.frame}
 with following columns:
 \item{\code{term}       }{ \code{character} vector of unique terms}
 \item{\code{term_count} }{ \code{integer} vector of term counts across all
 documents} \item{\code{doc_count}  }{ \code{integer} vector of document
 counts that contain corresponding term}
Also it contains metainformation in attributes:
 \code{ngram}: \code{integer} vector, the lower and upper boundary of the
 range of n-gram-values.
 \code{document_count}: \code{integer} number of documents vocabulary was
 built.
 \code{stopwords}: \code{character} vector of stopwords
 \code{sep_ngram}: \code{character} separator for ngrams
}
\description{
This function collects unique terms and corresponding statistics.
 See the below for details.
}
\section{Methods (by class)}{
\itemize{
\item \code{character}: creates \code{text2vec_vocabulary} from predefined
character vector. Terms will be inserted \bold{as is}, without any checks
(ngrams number, ngram delimiters, etc.).

\item \code{itoken}: collects unique terms and corresponding statistics from object.

\item \code{itoken_parallel}: collects unique terms and corresponding
statistics from iterator.
}}

\examples{
data("movie_review")
txt = movie_review[['review']][1:100]
it = itoken(txt, tolower, word_tokenizer, n_chunks = 10)
vocab = create_vocabulary(it)
pruned_vocab = prune_vocabulary(vocab, term_count_min = 10, doc_proportion_max = 0.8,
doc_proportion_min = 0.001, vocab_term_max = 20000)
}
