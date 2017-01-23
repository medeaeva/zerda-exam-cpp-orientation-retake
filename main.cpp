#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Input should be of the form 'count filename.txt'";
    return 1;
  }
  else {
    ifstream input_file(argv[1]);
    if (!input_file) {
      cerr << "No file provided.";
      return 0;
    }
    char c;
    int count = 0;
    while (input_file.get(c)) {
      if (c == '\n') {
        count++;
      }
    }
    cout << "Total lines in file: " << count;
  }
  return 0;
}

