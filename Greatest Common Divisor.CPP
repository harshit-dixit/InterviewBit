int Solution::gcd(int A, int B) {
    if(A==B||B==0)    return A;
    else if(A==0)   return B;
    else if(A>B)    return gcd(B,A-B);
    else    return gcd(A,B-A);
}
