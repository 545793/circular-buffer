#include <stddef.h>
#include <stdlib.h>
#include "circular_buffer.h"
#include <stdio.h>

bool isEmpty(CircularBuffer *buffer){
    if (buffer->count ==0 || buffer==NULL){
        return true;
    }
    else return false;
}

bool isFull(CircularBuffer *buffer){
    if (buffer->count == buffer->capacity && buffer !=NULL){
        return true;
    }
    else return false;
}

void reset(CircularBuffer *buffer){

    if(buffer->data==NULL){
        return;
    }
    free(buffer->data);
    buffer->data = NULL;
    buffer->capacity=0;
    buffer->start=0;
    buffer->end=0;
    buffer->count=0;
}

bool initialize(CircularBuffer *buffer, int capacity){

    buffer->data =malloc(capacity*sizeof(int));

    if (buffer->data ==NULL){
        buffer->capacity=0;
        buffer->start=0;
        buffer->end=0;
        buffer->count=0;
        return false;
    }

    buffer->capacity=capacity;
    buffer->start=0;
    buffer->end=0;
    buffer->count=0;
    return true;
}

bool insert(CircularBuffer *buffer, int value){
    if (isFull(buffer)){
        return false;
    }

    buffer->data[buffer->end]=value;
    buffer->end=(buffer->end+1) %buffer->capacity;
    buffer->count++;
    return true;
}

bool take_away(CircularBuffer *buffer, int *value){
    if(isEmpty(buffer)){
        return false;
    }
    *value=buffer->data[buffer->start];
    buffer->start =(buffer->start+1)%buffer->capacity;
    buffer->count--;
    return true;
}

void print_buffer(CircularBuffer *buffer){
    printf("Buffer: ");
    printf("[");
    printf("%d", buffer->data[0]);
    for (int i=1; i<buffer->capacity; i++)
    {
        printf(",%d", buffer->data[i]);
    }
    printf("]");
}