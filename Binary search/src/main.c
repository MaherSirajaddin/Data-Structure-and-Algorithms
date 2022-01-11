#include<stdio.h>
#include"STD_TYPES.h"
#include"binary_search.h"
#include"INSERTION_SORT.h"

int main(){
	//random input
	uint8_t random_array[]={3,5,89,7,4,8,21,6,87,14,25,120,52,78};
	//calc. the array size
	uint8_t arr_size=sizeof(random_array)/sizeof(uint8_t);
	//sort the array
  	sort_ins(random_array,arr_size);
  	//select a key to search for it
  	uint8_t key = 90;
  	//searching....
	sint8_t index=binary_search(random_array,0,arr_size-1,key);

	//print the array sorted
	for(uint8_t i=0 ;i<arr_size ; i++){

		printf("%d\t",random_array[i]);
	}

	//print the search result
	if(index==-1){
		printf("\n\nThe element isn't found!!");
	}else{
		printf("\n\nElement %d found at index %d",key,index);
	}

	return 0;
}
