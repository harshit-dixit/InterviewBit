int Solution::colorful(int A) {
    vector<int> arr;
    while(A!=0)
    {
        arr.push_back(A%10);
        A/=10;
    }
    unordered_set<int> m;
    int k=1;
    for(int i=0;i<arr.size();i++)
    {
        k=1;
        for(int j=i;j<arr.size();j++)
        {
            k*=arr[j];
            if(m.count(k))  return 0;
            m.insert(k);
        }
    }
    return 1;
}
