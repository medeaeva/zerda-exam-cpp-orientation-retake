#include "counters.h"

unsigned int lineCounter(std::string _content) {
  unsigned int lineCount = 0;
  for (unsigned int i = 0; i < _content.length(); ++i)
    if (_content[i] == '\n') {
      lineCount++;
    }
  return lineCount;
}

unsigned int wordCounter(std::string _content) {
  unsigned int wordCount = 0;
  for (unsigned int i = 0; i < _content.length(); ++i) {
    if (_content[i] == ' ' || _content[i] == '\n') {
      wordCount++;
    }
    return wordCount;
  }



unsigned int charCounter(std::string _content) {
  unsigned int charCount = 0;
  for (unsigned int i = 0; i < _content.length(); ++i)
  if (_content[i] != '\n') {
    charCount++;
  }
  unsigned int lineEndingsCount = 0;
  for (unsigned int i = 0; i < _content.length(); ++i)
  if (_content[i] == '\n') {
    lineEndingsCount++;
  }
  return charCount + lineEndingsCount;
}
