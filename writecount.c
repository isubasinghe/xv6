#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
  int count = writecount();
  printf(1, "%d\n", count);
  exit();
}
