int Solution::solve(int A, int B) {
    int x=8,y=8,ans=0;
    ans=min(x-A,y-B) + min(y-B,A-1) + min(A-1,B-1) + min(x-A,B-1);
    return ans;
}

//In the game of chess, a Bishop can only move diagonally and there is no restriction in distance for each move.
