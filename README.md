# circular-buffer

This project implements a circular buffer in C. A circular buffer is a fixed-capacity data structure that stores elements in an array and wraps around to the beginning when it reaches the end.

The buffer follows the First In, First Out (FIFO) principle, meaning the oldest element inserted is the first element removed. It uses dynamically allocated memory and tracks the starting position, ending position, number of stored elements, and total capacity.

This projects makes a circular buffer in C code. A circular buffer is a data structure that stores elements in an aray and wraps around to the beginning when it gets to the end... that is why it is called a "circular" buffer.

## fucntions in circular_buffer.c

- Initialize a circular buffer with a specified capacity.
- Insert integer values into the buffer.
- Remove the oldest value from the buffer.
- Check whether the buffer is empty or full.
- Reset the buffer and free allocated memory.
- Wrap around to the beginning of the array when the end is reached.
- Build and run the program using Make.

I also created a makefile to build and run the program.

circular-buffer/
├── .github/
│   └── workflows/
│       └── build.yml
├── build/
├── inc/
│   └── circular_buffer.h
├── src/
│   ├── circular_buffer.c
│   └── main.c
├── makefile
└── README.md
