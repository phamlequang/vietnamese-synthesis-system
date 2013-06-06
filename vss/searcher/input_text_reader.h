/*
 * input_text_reader.h
 *
 *  Created on: May 29, 2013
 *      Author: quangpham
 */

#include <string>
#include <vector>

using namespace std;

#include "../parser/tokenizer.h"
#include "../utils/string_utils.h"
#include "../utils/text_file_utils.h"
#include "../units/searching_sentence.h"
#include "../units/searching_phrase.h"

#define debug_input_text_reader 1

#ifndef INPUT_TEXT_READER_H_
#define INPUT_TEXT_READER_H_

class InputTextReader {
public:
    InputTextReader();
    virtual ~InputTextReader();

    bool init();
    bool read_input_text_file(string file_name);
    vector<SearchingSentence>& get_all_sentences();

private:
    Tokenizer tokenizer;

    string raw_input_text;
    vector<string> tokens;
    vector<SearchingSentence> all_searching_sentences;

    bool parse_input_text();
};

#endif /* INPUT_TEXT_READER_H_ */