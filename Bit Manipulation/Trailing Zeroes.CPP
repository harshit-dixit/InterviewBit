int Solution::solve(int A) {
    if(A==0)    return 0;
    int c=0,mask=1;
    while(mask!=0)
    {
        if((A&mask)==0)  c++;
        else break;
        mask=(mask<<1);
    }
    return c;
}




// A simple solution is to traverse bits from LSB (Least Significant Bit) and increment count while bit is 0.
// Time Complexity: O(log A)

// We can do better and solve this in O(1) using a look up table.

// The lookup table solution is based on following concepts :
// -> The solution assumes that negative numbers are stored in 2’s complement form which is true for most of the devices. If numbers are represented in 2’s complement form, then (x & -x) [Bitwise and of x and minus x] produces a number with only last set bit.

// -> Once we get a number with only one bit set, we can find its position using lookup table. It makes use of the fact that the first 32 bit position values are relatively prime with 37, so performing a modulus division with 37 gives a unique number from 0 to 36 for each. These numbers may then be mapped to the number of zeros using a small lookup table.


// int Solution::solve(int A) {

//     if(A&1)
//         return 0;
//     return log2(A^A-1);
