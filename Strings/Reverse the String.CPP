string Solution::solve(string A) {
    int i=0;
    string str="",word="";
    while(A[i]==' ') i++;
    while(i<A.length())
    {
       word+=A[i];
       i++;
       if(A[i]==' ')
       {
           while(A[i]==' ') i++;
           str=word+' '+str;
           word="";
       }
    }
    if(word!="")    str=word+' '+str;
    str.pop_back();
    return str;
}


