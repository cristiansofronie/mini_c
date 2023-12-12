#include <iostream>

#include <time.h>

int main() {
  char tim[64];
  time_t t;
  t = time(NULL);
  strftime(tim, sizeof(tim), "%l:%M ", localtime(&t));
  std::cout << tim << std::endl;
  return 0;
}
