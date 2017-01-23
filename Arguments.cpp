#include "Arguments.h"

Arguments::Arguments(int _argc, char** _argv) {
  argc = _argc;
  argv = _argv;
}

Arguments::~Arguments() {
}

//with a for loop I could add a lot of files to the counter. Now it is only

void Arguments::run() {
  if (argc == 1) {
    std::cerr << "No file provided" << std::endl;
  }
  else if (argc == 2) {
    char* temp = argv[1];
    std::string fileName(temp);
    read_file(fileName);
    std::string content = read_file(fileName);
    std::cout << lineCount(content) << " " << wordCount(content) << " "
        << charCount(content) << std::endl;
  }
  else if (argc == 3) {
    char* temp = argv[1];
    if (temp == '-l') {
      char* temp = argv[2];
      std::string fileName(temp);
      read_file(fileName);
      std::string content = read_file(fileName);
      std::cout << lineCount(content);
    }
    else if (temp == '-w') {
      char* temp = argv[2];
      std::string fileName(temp);
      read_file(fileName);
      std::string content = read_file(fileName);
      std::cout << wordCount(content);
    }
    else if (temp == '-c') {
      char* temp = argv[2];
      std::string fileName(temp);
      read_file(fileName);
      std::string content = read_file(fileName);
      std::cout << charCount(content);
    }
    else {
      char* temp1 = argv[1];
      std::string fileName1(temp1);
      read_file(fileName1);
      std::string content1 = read_file(fileName1);
      char* temp2 = argv[2];
      std::string fileName2(temp2);
      read_file(fileName2);
      std::string content2 = read_file(fileName2);
      std::cout << lineCount(content1) + lineCount(content2)<< " "
          << wordCount(content1) + wordCount(content2) << " "
          << charCount(content1) + charCount(content2)<< std::endl;
    }
  }
  if (argc > 3) {
    std::cerr << "Too many arguments provided" << std::endl;
  }
}

