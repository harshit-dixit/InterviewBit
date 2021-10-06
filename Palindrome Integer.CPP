int Solution::isPalindrome(int A) {
    if(A<0) return 0;
    int p=0,x,b;
    b=A;
    while(A>0)
    {
        x=A%10;
        p=p*10+x;
        A/=10;
    }
    if(p==b)    return 1;
    else return 0;
}

//     int rev=0;
//     while(A>0) 
//     {
//         rev=rev*10+A%10;
//         A=A/10;
//     }
