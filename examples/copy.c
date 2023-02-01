#include <stdio.h>
#include "valera.h"

int main() {
	valera_node_t* src = valera_new();
	valera_push_string(src, "param", "Zelkhe");
	valera_push_string(src, "what", "Immensive");
	valera_push_string(src, "hmmm", "Phy");

	printf("Source array: ");
	valera_print(src);
	printf("\n");

	valera_node_t* dst = valera_new();
	valera_copy(src, dst);

	valera_push_string(dst, "prag", "Hi!");

	printf("Destination array: ");
	valera_print(dst);
	printf("\n");

	valera_destroy(src);
	valera_destroy(dst);
	
	return 0;
}
