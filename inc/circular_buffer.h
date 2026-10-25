#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

typedef struct {
    int *data;
    int start;
    int end;
    int count; //elements currently in the array
    int capacity;
} CircularBuffer;

/*Checks if the Buffer is empty
*returns true if empty false otherwise
*/
bool isEmpty(CircularBuffer *buffer);

/*Checks if the Buffer is full
*returns true if full false otherwise
*/
bool isFull(CircularBuffer *buffer);

//deletes all elements in the buffer and resets it
void reset(CircularBuffer *buffer);

//Makes a circular buffer with a user inputed capacity
bool initialize(CircularBuffer *buffer, int capacity);

/*Inserts the new value put in by the user
*returns false if there is no space in the buffer
*/
bool insert(CircularBuffer *buffer, int value);

/*Removes the oldest value and puts into output parameter
*returns false if the buffer in empty
*/
bool take_away(CircularBuffer *buffer, int *value);

void print_buffer(CircularBuffer *buffer);


#endif