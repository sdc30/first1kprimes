#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "nodes.h"


int main(int argc, char **argv) {
// sum of primes 

	char *buffer;
	int count = 4, i = 8, j = 1, flip = 0;

	assert(argv[1] != '\0');
		buffer = argv[1];
		list_size = atoi(buffer);

	head = (struct node *) calloc(list_size, sizeof(struct node));
	assert(head != NULL);
		
		create_list(head);
		
		head[0].random_contents = 2;
		head[1].random_contents = 3;
		head[2].random_contents = 5;
		head[3].random_contents = 7;

  while(count < list_size) {
	  if(i%head[0].random_contents != 0 && i%head[1].random_contents != 0) {
		  while(j < list_size){
  			if(j == list_size -1)
    			  head[count++].random_contents = i;
			
		  	if(head[j].random_contents != 0) {
				if(i%head[j].random_contents !=0)
					flip = 0;
			    else 
			        flip = 1;
			}
		    if(flip) 
				break;
			//printf("count: %d -- j: %d \n", count, j);
			j++;
		  } j = 1;
		  flip = 0;
      }
	   
		i++;
	  //printf("count: %d -- i: %d \n", count, i);
  }
  
        print_list(head);
  		destroy_list(head);

	return 0;
}

