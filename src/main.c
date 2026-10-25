#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "circular_buffer.h"

int main(void){
CircularBuffer buffer={0};
int value;

if(!initialize(&buffer,10)){
printf("Failed to initialize circular buffer :(. \n");
return 0;
}

printf("Add values 1,2,3,4,5 to buffer.\n");
insert(&buffer,1);
insert(&buffer,2);
insert(&buffer,3);
insert(&buffer,4);
insert(&buffer,5);

if(take_away(&buffer, &value)){
printf("Removed: %d\n", value);
}

printf("Add values 6,7,8,9,10,11 to buffer.\n");
insert(&buffer,6);
insert(&buffer,7);
insert(&buffer,8);
insert(&buffer,9);
insert(&buffer,10);
insert(&buffer,11);

printf("the buffer is removing these values:\n");

while(take_away(&buffer, &value)){
printf("%d\n", value);
}

print_buffer(&buffer);

reset(&buffer);
}
