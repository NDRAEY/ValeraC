#include "valera.h"

int main() {
  valera_node_t* iwk = valera_new();
  valera_push_string(iwk, "entry", "HELLO!");
  
  printf("It has entry? => %s", valera_has(iwk, "entry")?"true":"false");
  
  return 0;
}