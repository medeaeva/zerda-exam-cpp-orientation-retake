#include "counters.h"

int lineCounter(std::string _content) {
  char c;
  int lineCount = 0;
  for (unsigned int i = 0; i < _content.length(); ++i)
    if (c == '\n') {
      lineCount++;
    }
    return lineCount;
  }


int wordCounter(std::string _content) {
  int wordCount = 0;
  for(unsigned int i = 0; i < _content.length(); ++i) {
    if(_content[i] == ' ' || _content[i] == '\n') {
      wordCount++;
    }
    return wordCount;
  }

int charCounter(std::string _content) {
  int charCount = 0;
  for(unsigned int i = 0; i < _content.length(); ++i) {
    if(_content[i] != '\n') {
      charCount++;
    }
  return charCount;
  }
