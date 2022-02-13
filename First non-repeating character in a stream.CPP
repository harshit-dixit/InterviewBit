string Solution::solve(string A) {
    int i,x;
    int B[26]={0};
    queue<int> q;
    string ans="";
    for(i=0;i<A.length();i++)
    {
        x=A[i]-'a';
        B[x]++;
        q.push(x);
        if(q.size()>0&&B[q.front()]==1)
        {
            ans+=q.front()+'a';
        }
        else
        {
            while(q.size()>0&&B[q.front()]!=1)
            {
                q.pop();
            }
            if(q.size()==0) ans+='#';
            else    ans+=q.front()+'a';
        }
    }
    return ans;
}




// string Solution::solve(string A) {
//     unordered_map<char, int> mp;
//     queue<char> q;
//     string ans;
//     for (auto c : A)
//     {
//         mp[c]++;
//         q.push(c);
//         while (!q.empty() && mp[q.front()] > 1)   q.pop();
//         if (!q.empty())                         ans.push_back(q.front());
//         else                                    ans.push_back('#');
//     }
//     return ans;
// }

