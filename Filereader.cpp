#include <string>
#include <fstream>

std::string read_file(std::string _fileName) {
  std::ifstream source_file(_fileName);
  std::string buffer;
  std::string content = "";
  while (getline(source_file, buffer)) {
    content += buffer + "\n";
  }
  source_file.close();
  return content;
}
