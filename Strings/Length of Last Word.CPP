int Solution::lengthOfLastWord(const string A) {
    int i,x=0;
    i=A.length()-1;
    while(A[i]==' ')    i--;
    for(;i>=0;i--)
    {
        if(A[i]==' ')    break;
        else x++;
    }
    return x;
}


//  ANOTHER APPROACH


// As said before, this problem does not allow using library functions.

// What if you maintained the length of the current word?

// You reset the length of the word when the next word begins (When does a new word begin?)

// Return the last length you have.
