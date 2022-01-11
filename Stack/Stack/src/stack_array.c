
#include<stdio.h>
#include"stack_array.h"
#include"STD_TYPES.h"

//create the stack with the specified size in the stack header
uint16_t stack[STACK_SIZE];

//stack pointer -> points to the stack top
// -1 == stack empty
sint8_t sp=-1;

//check if the stack is full
uint8_t stack_is_full(){
	if(sp>=STACK_SIZE-1)
		return 1;
	return 0;
}

//check if the stack is empty
uint8_t stack_is_empty(){
	if(sp==-1)
		return 1;
	return 0;
}

//method to add element to the stack1
uint8_t push(uint16_t element){
	if(stack_is_full()){
		printf("There's no enough space,Stack overflow\n");
		return 0;
	}else{
		sp++;
		stack[sp]=element;
		printf("Element %d pushed to stack successfully\n",element);
		return 1;
	}
}
//remove element from the stack
uint8_t pop(){
	if(stack_is_empty()){
		printf("Stack is empty\n");
		return 0;
	}else{
		printf("Element %d popped from stack successfully\n",stack[sp]);
		uint8_t temp =stack[sp];
		stack[sp]=0;
		sp--;
		return temp;
	}
}

//print stack elements
void print_stack(){
	for(uint8_t i=STACK_SIZE ; i>0 ;i--){
		printf("\n%d\t-> %d",i,stack[i-1]);
	}
	printf("\nStack pointer at %d",sp);
}
