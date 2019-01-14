
#include "cistem.h"
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::plugins(cpp11)]]

// [[Rcpp::export]]
std::vector<std::wstring> cistem_stem(std::vector<std::wstring>  words, bool case_insensitive) {
    for (size_t i = 0; i < words.size(); i++) {
        words[i] = Cistem::stem(words[i], case_insensitive);
    }

    return words;
}

// [[Rcpp::export]]
StringMatrix cistem_segment(std::vector<std::wstring>  words, bool case_insensitive) {

	StringMatrix segmented_words(words.size(), 2);
	std::array<std::wstring, 2> segmented_word;

    for (size_t i = 0; i < words.size(); i++) {
        segmented_word = Cistem::segment(words[i], case_insensitive);
        segmented_words(i, 0) = segmented_word[0];
        segmented_words(i, 1) = segmented_word[1];
    }

    return segmented_words;
}
