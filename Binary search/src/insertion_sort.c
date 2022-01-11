#include"STD_TYPES.h"

void sort_ins(uint8_t *array,uint8_t arr_size) {
	uint8_t j = 0;
	uint8_t key = 0;

	for (uint8_t i = 1; i <= arr_size - 1; i++) {
		j = i;
		key = array[i];
		while(j > 0 && array[j-1] > key) {
			array[j] = array[j-1];
			j--;
		}
		array[j] = key;
	}
}
