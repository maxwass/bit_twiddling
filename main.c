
#include <stdio.h>
#include <assert.h>

int is_even(int num){
    //returns 0 if even, -1 if odd
    int remainder = num % 2;
    if (remainder != 0) return -1;
    return 0;
}

void print_bits_of_int(int size, int num){
//size is number of bytes in the integer
//num is the value of the integer

    assert(&num != NULL && "null input into print_bits");
    assert(size > 0 && "zero/neg sized integer input");

    char* bits[size*8];
    int even = is_even(num);

    
}

int main(void)
{

    int sign;

    //bit shifting signed int is implimentation specific
    //lets play around...
    __int8_t fun = 4;  /* 0 0 0 0  0 1 0 0 */
    

}
