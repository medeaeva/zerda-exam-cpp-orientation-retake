#include "Arguments.h"

int main(int argc, char** argv) {

  Arguments arguments(argc, argv);
  arguments.run();
  return 0;
}

