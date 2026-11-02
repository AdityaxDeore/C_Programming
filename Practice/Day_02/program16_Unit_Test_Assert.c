#include "Header.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
  assert(Addition(10, 11) == 999);
  assert(Addition(-10, 20) == 10);
  assert(Addition(-10, -20) == -30);

  return EXIT_SUCCESS;
}
