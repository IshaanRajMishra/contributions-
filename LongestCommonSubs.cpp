#include<bits/stdc++.h>
using namespace std;



int lcs(int dp[][5], int i, int j, string s1, string s2){
    if(dp[i][j] != -1)
        return dp[i][j];
    if(s1[i-1] == s2[j-1])
        dp[i][j] = 1 + max(lcs(dp, i-1, j, s1, s2), lcs(dp, i ,j-1, s1, s2));
    else
        dp[i][j] = max(lcs(dp, i-1, j, s1, s2), lcs(dp, i ,j-1, s1, s2));
    return dp[i][j];
}


int main(){
    
    string s1,s2;
    cout<<"Input a string of length "<<4<<" : ";
    cin>>s1;
    cout<<"Input a string of length "<<4<<" : ";
    cin>>s2;
    int dp[5][5];
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            dp[i][j] = -1;
    for(int i=0; i<5; i++)
        dp[i][0] = 0;
    for(int j=0; j<5; j++)
        dp[0][j] = 0;
    
    int ans = lcs(dp, 4, 4, s1, s2);
    cout<<endl<<endl;
    cout<<"The length of the longest common subsequence is : "<<ans<<endl;
    cout<<endl<<endl;

    return 0;
}