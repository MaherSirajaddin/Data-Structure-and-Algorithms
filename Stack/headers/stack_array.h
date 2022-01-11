
#ifndef HEADERS_STACK_ARRAY_H_
#define HEADERS_STACK_ARRAY_H_

#include"STD_TYPES.h"
#define  STACK_SIZE  10

uint8_t stack_is_full();
uint8_t stack_is_empty();
uint8_t push(uint16_t);
uint8_t pop();
void 	print_stack();

#endif /* HEADERS_STACK_ARRAY_H_ */
