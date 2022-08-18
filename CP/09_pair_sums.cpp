/*
Problem
You have been given an integer array A and a number K. Now, you need to find out whether any two different elements of the array A sum to the number K. Two elements are considered to be different if they lie at different positions in the array. If there exists such a pair of numbers, print "YES" (without quotes), else print "NO" without quotes.

Input Format:

The first line consists of two integers N, denoting the size of array A and K. The next line consists of N space separated integers denoting the elements of the array A.

Output Format:

Print the required answer on a single line.

Constraints:

Sample Input
5 9
1 2 3 4 5
Sample Output
YES


*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nl '\n'

void solve()
{
    int n,k;     
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int l =0,r=n-1;
    while(l<r){
        int sum = ar[l] + ar[r];
        if(sum == k){
            cout<<"YES"<<nl;
            return;
        }         
        else if(sum<k){
            l++;
        }         
        else{
            r--;
        }
    }
    cout<<"NO"<<nl;
    return ;
}
int main()
{
    solve();
}