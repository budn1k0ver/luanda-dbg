#include <stdio.h>
#include "luanda-debugger.h"

int main() {
  char *argv[1] = { 0 };
  dbg_inferior_exec("bin/test", argv);
}
