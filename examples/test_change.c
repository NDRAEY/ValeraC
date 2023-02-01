#include <stdio.h>
#include "valera.h"

int main() {
	valera_node_t* test = valera_new();
	valera_push_string(test, "pokemon1", "Zeraora");
	valera_push_string(test, "pokemon2", "Lucario");
	valera_push_string(test, "pokemon3", "Pikachu");
	valera_push_string(test, "pokemon4", "Raichu");

	valera_node_t* digi = valera_new();
	valera_push_string(digi, "digimon1", "Agumon");
	valera_push_string(digi, "digimon2", "Gammamon");
	valera_push_string(digi, "digimon3", "Pulsemon");
	valera_push_string(digi, "digimon4", "Herissmon");

	valera_push_object(test, "digimons", digi);

	valera_array_t* array = valera_array_new();
	valera_array_push_object(array, test);

	printf("Before: ");
	valera_array_print(array);
	printf("\n");

	valera_value_set_string(valera_get(valera_array_get(array, 0)->obj, "pokemon2"), "Charmander");
	valera_value_set_string(valera_get(valera_array_get(array, 0)->obj, "pokemon3"), "SCYTHER");
	
	valera_value_set_string(valera_get(valera_get(valera_array_get(array, 0)->obj, "digimons")->obj, "digimon2"), "Impmon");

	printf("After: ");
	valera_array_print(array);
	printf("\n");
	
	valera_destroy(test);
	valera_array_destroy(array);
}
