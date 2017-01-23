#ifndef ARGUMENTS_H_
#define ARGUMENTS_H_
#include <iostream>
#include "counters.h"
#include "Filereader.hpp"

class Arguments {
private:
  int argc;
  char** argv;

public:
  Arguments(int argc, char**);
  ~Arguments();
  void run();
};

#endif /* ARGUMENTS_H_ */
