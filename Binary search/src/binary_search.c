#include"STD_TYPES.h"


  sint8_t binary_search(uint8_t *arr,uint8_t low,uint8_t high,uint8_t key){
	  	/*stop condition*/
	  	if(low>high)
            return -1;
        else{
        	/* new mid */
        	int mid=(low+high)/2;
        	/* the key hits the mid*/
            if(arr[mid]==key)
                return mid;
            /* if the key less than the mid*/
            if(arr[mid]>key)
            	/* split the array from left to mid*/
                return binary_search(arr,low,mid-1,key);
            /* if the key greater than the mid, split the part after the mid*/
            return binary_search(arr,mid+1,high,key);
        }
    }


