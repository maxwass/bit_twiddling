
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

    int numBits = 8*size;
    int bits[numBits];
    for(int i = 0; i < numBits; i++){
        bits[i] = (num >> i) & 1;

    }
    printf("integer: %i --> bits: ", num); 
    for(int j = 0; j<numBits; j++){
        printf("%i", bits[7-j]); //because of endianness: MSB right
    }
    printf("\n");

}

int main(void)
{

    int sign;

    //bit shifting signed int is implimentation specific
    //lets play around...
    
    __int8_t fun;
    fun = 16;   
    print_bits_of_int(sizeof(fun), fun);
    //right shift one - should be 8
    int rs_one_fun = fun >> 1;
    print_bits_of_int(sizeof(fun), rs_one_fun);
    
    int ls_one_fun = fun << 1;
    print_bits_of_int(sizeof(fun), ls_one_fun);
}

void testing (void){

    __int8_t fun;
    fun = 0; /* 0 0 0 0  0 0 0 0 */
    print_bits_of_int(sizeof(fun), fun);
  
    fun = 1; /* 0 0 0 0  0 0 0 1 */
    print_bits_of_int(sizeof(fun), fun);
 
    fun = 4;  /* 0 0 0 0  0 1 0 0 */
    print_bits_of_int(sizeof(fun), fun);

    fun = 7; /* 0 0 0 0  0 1 1 1 */
    print_bits_of_int(sizeof(fun), fun);

    fun = 127; /* 0 1 1 1  0 0 0 0 */
    print_bits_of_int(sizeof(fun), fun);


}
