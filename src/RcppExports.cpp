// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// hasher
IntegerVector hasher(CharacterVector x, int hash_size);
RcppExport SEXP _text2vec_hasher(SEXP xSEXP, SEXP hash_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(hasher(x, hash_size));
    return rcpp_result_gen;
END_RCPP
}
// cpp_hash_corpus_create
SEXP cpp_hash_corpus_create(uint32_t size, uint32_t n_min, uint32_t n_max, int use_signed_hash);
RcppExport SEXP _text2vec_cpp_hash_corpus_create(SEXP sizeSEXP, SEXP n_minSEXP, SEXP n_maxSEXP, SEXP use_signed_hashSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint32_t >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< int >::type use_signed_hash(use_signed_hashSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_hash_corpus_create(size, n_min, n_max, use_signed_hash));
    return rcpp_result_gen;
END_RCPP
}
// cpp_hash_corpus_insert_document_batch
void cpp_hash_corpus_insert_document_batch(SEXP ptr, const ListOf<const CharacterVector>& docs_batch, int grow_dtm, int context, uint32_t window_size, const NumericVector& weights);
RcppExport SEXP _text2vec_cpp_hash_corpus_insert_document_batch(SEXP ptrSEXP, SEXP docs_batchSEXP, SEXP grow_dtmSEXP, SEXP contextSEXP, SEXP window_sizeSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const ListOf<const CharacterVector>& >::type docs_batch(docs_batchSEXP);
    Rcpp::traits::input_parameter< int >::type grow_dtm(grow_dtmSEXP);
    Rcpp::traits::input_parameter< int >::type context(contextSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type window_size(window_sizeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    cpp_hash_corpus_insert_document_batch(ptr, docs_batch, grow_dtm, context, window_size, weights);
    return R_NilValue;
END_RCPP
}
// cpp_hash_corpus_get_tcm
S4 cpp_hash_corpus_get_tcm(SEXP ptr);
RcppExport SEXP _text2vec_cpp_hash_corpus_get_tcm(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_hash_corpus_get_tcm(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_hash_corpus_get_dtm
S4 cpp_hash_corpus_get_dtm(SEXP ptr);
RcppExport SEXP _text2vec_cpp_hash_corpus_get_dtm(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_hash_corpus_get_dtm(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_vocabulary_corpus_create
SEXP cpp_vocabulary_corpus_create(const CharacterVector vocab_R, uint32_t n_min, uint32_t n_max, const CharacterVector stopwords_R, const String delim);
RcppExport SEXP _text2vec_cpp_vocabulary_corpus_create(SEXP vocab_RSEXP, SEXP n_minSEXP, SEXP n_maxSEXP, SEXP stopwords_RSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector >::type vocab_R(vocab_RSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type stopwords_R(stopwords_RSEXP);
    Rcpp::traits::input_parameter< const String >::type delim(delimSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_vocabulary_corpus_create(vocab_R, n_min, n_max, stopwords_R, delim));
    return rcpp_result_gen;
END_RCPP
}
// cpp_vocabulary_corpus_insert_document_batch
void cpp_vocabulary_corpus_insert_document_batch(SEXP ptr, const ListOf<const CharacterVector>& docs_batch, int grow_dtm, int context, uint32_t window_size, const NumericVector& weights, int flag_binary_cooccurence);
RcppExport SEXP _text2vec_cpp_vocabulary_corpus_insert_document_batch(SEXP ptrSEXP, SEXP docs_batchSEXP, SEXP grow_dtmSEXP, SEXP contextSEXP, SEXP window_sizeSEXP, SEXP weightsSEXP, SEXP flag_binary_cooccurenceSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const ListOf<const CharacterVector>& >::type docs_batch(docs_batchSEXP);
    Rcpp::traits::input_parameter< int >::type grow_dtm(grow_dtmSEXP);
    Rcpp::traits::input_parameter< int >::type context(contextSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type window_size(window_sizeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type flag_binary_cooccurence(flag_binary_cooccurenceSEXP);
    cpp_vocabulary_corpus_insert_document_batch(ptr, docs_batch, grow_dtm, context, window_size, weights, flag_binary_cooccurence);
    return R_NilValue;
END_RCPP
}
// cpp_vocabulary_corpus_get_tcm
S4 cpp_vocabulary_corpus_get_tcm(SEXP ptr);
RcppExport SEXP _text2vec_cpp_vocabulary_corpus_get_tcm(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_vocabulary_corpus_get_tcm(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_vocabulary_corpus_get_dtm
S4 cpp_vocabulary_corpus_get_dtm(SEXP ptr);
RcppExport SEXP _text2vec_cpp_vocabulary_corpus_get_dtm(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_vocabulary_corpus_get_dtm(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_vocab_create
SEXP cpp_vocab_create(uint32_t ngram_min, uint32_t ngram_max, const CharacterVector stopwords_R, const String delim, int window_size);
RcppExport SEXP _text2vec_cpp_vocab_create(SEXP ngram_minSEXP, SEXP ngram_maxSEXP, SEXP stopwords_RSEXP, SEXP delimSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint32_t >::type ngram_min(ngram_minSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type ngram_max(ngram_maxSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type stopwords_R(stopwords_RSEXP);
    Rcpp::traits::input_parameter< const String >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_vocab_create(ngram_min, ngram_max, stopwords_R, delim, window_size));
    return rcpp_result_gen;
END_RCPP
}
// cpp_vocabulary_insert_document_batch
void cpp_vocabulary_insert_document_batch(SEXP ptr, const ListOf<const CharacterVector> document_batch);
RcppExport SEXP _text2vec_cpp_vocabulary_insert_document_batch(SEXP ptrSEXP, SEXP document_batchSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const ListOf<const CharacterVector> >::type document_batch(document_batchSEXP);
    cpp_vocabulary_insert_document_batch(ptr, document_batch);
    return R_NilValue;
END_RCPP
}
// cpp_vocabulary_insert_document_batch_xptr
void cpp_vocabulary_insert_document_batch_xptr(SEXP ptr, SEXP document_batch_ptr);
RcppExport SEXP _text2vec_cpp_vocabulary_insert_document_batch_xptr(SEXP ptrSEXP, SEXP document_batch_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type document_batch_ptr(document_batch_ptrSEXP);
    cpp_vocabulary_insert_document_batch_xptr(ptr, document_batch_ptr);
    return R_NilValue;
END_RCPP
}
// cpp_get_vocab_statistics
DataFrame cpp_get_vocab_statistics(SEXP ptr);
RcppExport SEXP _text2vec_cpp_get_vocab_statistics(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_vocab_statistics(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_document_count
int cpp_get_document_count(SEXP ptr);
RcppExport SEXP _text2vec_cpp_get_document_count(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_document_count(ptr));
    return rcpp_result_gen;
END_RCPP
}
// create_xptr_unordered_set
SEXP create_xptr_unordered_set(CharacterVector x);
RcppExport SEXP _text2vec_create_xptr_unordered_set(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(create_xptr_unordered_set(x));
    return rcpp_result_gen;
END_RCPP
}
// collapse_collocations_cpp
ListOf<CharacterVector> collapse_collocations_cpp(const ListOf<const CharacterVector>& docs, SEXP xptr_unordered_set_phrases, SEXP xptr_unordered_set_stopwords, const String r_sep);
RcppExport SEXP _text2vec_collapse_collocations_cpp(SEXP docsSEXP, SEXP xptr_unordered_set_phrasesSEXP, SEXP xptr_unordered_set_stopwordsSEXP, SEXP r_sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const ListOf<const CharacterVector>& >::type docs(docsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xptr_unordered_set_phrases(xptr_unordered_set_phrasesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xptr_unordered_set_stopwords(xptr_unordered_set_stopwordsSEXP);
    Rcpp::traits::input_parameter< const String >::type r_sep(r_sepSEXP);
    rcpp_result_gen = Rcpp::wrap(collapse_collocations_cpp(docs, xptr_unordered_set_phrases, xptr_unordered_set_stopwords, r_sep));
    return rcpp_result_gen;
END_RCPP
}
// colMins
NumericVector colMins(const NumericMatrix x);
RcppExport SEXP _text2vec_colMins(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(colMins(x));
    return rcpp_result_gen;
END_RCPP
}
// colMaxs
NumericVector colMaxs(const NumericMatrix x);
RcppExport SEXP _text2vec_colMaxs(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(colMaxs(x));
    return rcpp_result_gen;
END_RCPP
}
// rowMins
NumericVector rowMins(const NumericMatrix x);
RcppExport SEXP _text2vec_rowMins(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowMins(x));
    return rcpp_result_gen;
END_RCPP
}
// rowMaxs
NumericVector rowMaxs(const NumericMatrix x);
RcppExport SEXP _text2vec_rowMaxs(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowMaxs(x));
    return rcpp_result_gen;
END_RCPP
}
// euclidean_dist
NumericMatrix euclidean_dist(const NumericMatrix x, const NumericMatrix y);
RcppExport SEXP _text2vec_euclidean_dist(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(euclidean_dist(x, y));
    return rcpp_result_gen;
END_RCPP
}
// malloc_trim
SEXP malloc_trim();
RcppExport SEXP _text2vec_malloc_trim() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(malloc_trim());
    return rcpp_result_gen;
END_RCPP
}
// is_invalid_ptr
int is_invalid_ptr(SEXP sexp_ptr);
RcppExport SEXP _text2vec_is_invalid_ptr(SEXP sexp_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp_ptr(sexp_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(is_invalid_ptr(sexp_ptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_fixed_char_tokenizer
SEXP cpp_fixed_char_tokenizer(CharacterVector x, char delim);
RcppExport SEXP _text2vec_cpp_fixed_char_tokenizer(SEXP xSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< char >::type delim(delimSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_fixed_char_tokenizer(x, delim));
    return rcpp_result_gen;
END_RCPP
}
// warplda_create
SEXP warplda_create(int n_topics, double doc_topic_prior, double topic_word_prior);
RcppExport SEXP _text2vec_warplda_create(SEXP n_topicsSEXP, SEXP doc_topic_priorSEXP, SEXP topic_word_priorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_topics(n_topicsSEXP);
    Rcpp::traits::input_parameter< double >::type doc_topic_prior(doc_topic_priorSEXP);
    Rcpp::traits::input_parameter< double >::type topic_word_prior(topic_word_priorSEXP);
    rcpp_result_gen = Rcpp::wrap(warplda_create(n_topics, doc_topic_prior, topic_word_prior));
    return rcpp_result_gen;
END_RCPP
}
// warplda_init_dtm
void warplda_init_dtm(SEXP ptr, const S4& m, const IntegerVector& z_old, const IntegerVector& z_new, const IntegerVector& seeds);
RcppExport SEXP _text2vec_warplda_init_dtm(SEXP ptrSEXP, SEXP mSEXP, SEXP z_oldSEXP, SEXP z_newSEXP, SEXP seedsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const S4& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type z_old(z_oldSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type z_new(z_newSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type seeds(seedsSEXP);
    warplda_init_dtm(ptr, m, z_old, z_new, seeds);
    return R_NilValue;
END_RCPP
}
// warplda_set_topic_word_count
void warplda_set_topic_word_count(SEXP ptr, const Rcpp::IntegerMatrix& topic_word_count);
RcppExport SEXP _text2vec_warplda_set_topic_word_count(SEXP ptrSEXP, SEXP topic_word_countSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type topic_word_count(topic_word_countSEXP);
    warplda_set_topic_word_count(ptr, topic_word_count);
    return R_NilValue;
END_RCPP
}
// run_one_iter_doc
void run_one_iter_doc(SEXP ptr, bool update_topics);
RcppExport SEXP _text2vec_run_one_iter_doc(SEXP ptrSEXP, SEXP update_topicsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< bool >::type update_topics(update_topicsSEXP);
    run_one_iter_doc(ptr, update_topics);
    return R_NilValue;
END_RCPP
}
// run_one_iter_word
void run_one_iter_word(SEXP ptr, bool update_topics);
RcppExport SEXP _text2vec_run_one_iter_word(SEXP ptrSEXP, SEXP update_topicsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< bool >::type update_topics(update_topicsSEXP);
    run_one_iter_word(ptr, update_topics);
    return R_NilValue;
END_RCPP
}
// warplda_pseudo_loglikelihood
double warplda_pseudo_loglikelihood(SEXP ptr);
RcppExport SEXP _text2vec_warplda_pseudo_loglikelihood(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(warplda_pseudo_loglikelihood(ptr));
    return rcpp_result_gen;
END_RCPP
}
// warplda_get_doc_topic_count
IntegerMatrix warplda_get_doc_topic_count(SEXP ptr);
RcppExport SEXP _text2vec_warplda_get_doc_topic_count(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(warplda_get_doc_topic_count(ptr));
    return rcpp_result_gen;
END_RCPP
}
// warplda_get_topic_word_count
IntegerMatrix warplda_get_topic_word_count(SEXP ptr);
RcppExport SEXP _text2vec_warplda_get_topic_word_count(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(warplda_get_topic_word_count(ptr));
    return rcpp_result_gen;
END_RCPP
}
// warplda_get_local_diff
IntegerVector warplda_get_local_diff(SEXP ptr);
RcppExport SEXP _text2vec_warplda_get_local_diff(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(warplda_get_local_diff(ptr));
    return rcpp_result_gen;
END_RCPP
}
// warplda_get_c_global
IntegerVector warplda_get_c_global(SEXP ptr);
RcppExport SEXP _text2vec_warplda_get_c_global(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(warplda_get_c_global(ptr));
    return rcpp_result_gen;
END_RCPP
}
// warplda_set_c_global
void warplda_set_c_global(SEXP ptr, const IntegerVector& c_all);
RcppExport SEXP _text2vec_warplda_set_c_global(SEXP ptrSEXP, SEXP c_allSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type c_all(c_allSEXP);
    warplda_set_c_global(ptr, c_all);
    return R_NilValue;
END_RCPP
}
// warplda_reset_local_diff
void warplda_reset_local_diff(SEXP ptr);
RcppExport SEXP _text2vec_warplda_reset_local_diff(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    warplda_reset_local_diff(ptr);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_text2vec_hasher", (DL_FUNC) &_text2vec_hasher, 2},
    {"_text2vec_cpp_hash_corpus_create", (DL_FUNC) &_text2vec_cpp_hash_corpus_create, 4},
    {"_text2vec_cpp_hash_corpus_insert_document_batch", (DL_FUNC) &_text2vec_cpp_hash_corpus_insert_document_batch, 6},
    {"_text2vec_cpp_hash_corpus_get_tcm", (DL_FUNC) &_text2vec_cpp_hash_corpus_get_tcm, 1},
    {"_text2vec_cpp_hash_corpus_get_dtm", (DL_FUNC) &_text2vec_cpp_hash_corpus_get_dtm, 1},
    {"_text2vec_cpp_vocabulary_corpus_create", (DL_FUNC) &_text2vec_cpp_vocabulary_corpus_create, 5},
    {"_text2vec_cpp_vocabulary_corpus_insert_document_batch", (DL_FUNC) &_text2vec_cpp_vocabulary_corpus_insert_document_batch, 7},
    {"_text2vec_cpp_vocabulary_corpus_get_tcm", (DL_FUNC) &_text2vec_cpp_vocabulary_corpus_get_tcm, 1},
    {"_text2vec_cpp_vocabulary_corpus_get_dtm", (DL_FUNC) &_text2vec_cpp_vocabulary_corpus_get_dtm, 1},
    {"_text2vec_cpp_vocab_create", (DL_FUNC) &_text2vec_cpp_vocab_create, 5},
    {"_text2vec_cpp_vocabulary_insert_document_batch", (DL_FUNC) &_text2vec_cpp_vocabulary_insert_document_batch, 2},
    {"_text2vec_cpp_vocabulary_insert_document_batch_xptr", (DL_FUNC) &_text2vec_cpp_vocabulary_insert_document_batch_xptr, 2},
    {"_text2vec_cpp_get_vocab_statistics", (DL_FUNC) &_text2vec_cpp_get_vocab_statistics, 1},
    {"_text2vec_cpp_get_document_count", (DL_FUNC) &_text2vec_cpp_get_document_count, 1},
    {"_text2vec_create_xptr_unordered_set", (DL_FUNC) &_text2vec_create_xptr_unordered_set, 1},
    {"_text2vec_collapse_collocations_cpp", (DL_FUNC) &_text2vec_collapse_collocations_cpp, 4},
    {"_text2vec_colMins", (DL_FUNC) &_text2vec_colMins, 1},
    {"_text2vec_colMaxs", (DL_FUNC) &_text2vec_colMaxs, 1},
    {"_text2vec_rowMins", (DL_FUNC) &_text2vec_rowMins, 1},
    {"_text2vec_rowMaxs", (DL_FUNC) &_text2vec_rowMaxs, 1},
    {"_text2vec_euclidean_dist", (DL_FUNC) &_text2vec_euclidean_dist, 2},
    {"_text2vec_malloc_trim", (DL_FUNC) &_text2vec_malloc_trim, 0},
    {"_text2vec_is_invalid_ptr", (DL_FUNC) &_text2vec_is_invalid_ptr, 1},
    {"_text2vec_cpp_fixed_char_tokenizer", (DL_FUNC) &_text2vec_cpp_fixed_char_tokenizer, 2},
    {"_text2vec_warplda_create", (DL_FUNC) &_text2vec_warplda_create, 3},
    {"_text2vec_warplda_init_dtm", (DL_FUNC) &_text2vec_warplda_init_dtm, 5},
    {"_text2vec_warplda_set_topic_word_count", (DL_FUNC) &_text2vec_warplda_set_topic_word_count, 2},
    {"_text2vec_run_one_iter_doc", (DL_FUNC) &_text2vec_run_one_iter_doc, 2},
    {"_text2vec_run_one_iter_word", (DL_FUNC) &_text2vec_run_one_iter_word, 2},
    {"_text2vec_warplda_pseudo_loglikelihood", (DL_FUNC) &_text2vec_warplda_pseudo_loglikelihood, 1},
    {"_text2vec_warplda_get_doc_topic_count", (DL_FUNC) &_text2vec_warplda_get_doc_topic_count, 1},
    {"_text2vec_warplda_get_topic_word_count", (DL_FUNC) &_text2vec_warplda_get_topic_word_count, 1},
    {"_text2vec_warplda_get_local_diff", (DL_FUNC) &_text2vec_warplda_get_local_diff, 1},
    {"_text2vec_warplda_get_c_global", (DL_FUNC) &_text2vec_warplda_get_c_global, 1},
    {"_text2vec_warplda_set_c_global", (DL_FUNC) &_text2vec_warplda_set_c_global, 2},
    {"_text2vec_warplda_reset_local_diff", (DL_FUNC) &_text2vec_warplda_reset_local_diff, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_text2vec(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
