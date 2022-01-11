#include<stdio.h>
#include"stack_array.h"
#include"STD_TYPES.h"

extern sint8_t sp;
uint8_t chk_balance(uint8_t *string){

	//counter to traverse the whole expression
	uint8_t str_counter=0;
	//count number of braces and parentheses in the expression
	sint8_t braces=0, parentheses=0;
	while(string[str_counter]!='\0'){
		//add all braces and parentheses to the stack
		if(string[str_counter]=='{' || string[str_counter]=='('
		 ||string[str_counter]=='}' || string[str_counter]==')'){

			uint8_t pushed=push(string[str_counter]);
			//check if the last element pushed or not
			if(!pushed){
				printf("stack can't hold the whole expression, use larger stack");
				return 0;
			}
		}
		str_counter++;
	}

	while(sp!=-1){

		switch(pop()){
		case '}':braces++;break;
		case ')':parentheses++;break;
		case '{':braces--;break;
		case '(':parentheses--;break;
		}

	}

	if(braces==0&&parentheses==0){
		printf("Expression is balanced");
		return 1;
	}else{
		printf("Expression is not balanced");
		return 0;
	}
}



