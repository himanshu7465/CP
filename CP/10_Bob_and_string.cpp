/* Bob and Khatu both love the string. Bob has a string S and Khatu has a string T. They want to make both string S and T to anagrams of each other. Khatu can apply two operations to convert string T to anagram of string S which are given below:
1.) Delete one character from the string T.
2.) Add one character from the string S.

Khatu can apply above both operation as many times he want. Find the minimum number of operations required to convert string T so that both T and S will become anagram of each other.

Input:

First line of input contains number of test cases T. Each test case contains two lines. First line contains string S and second line contains string T.

Output:

For each test case print the minimum number of operations required to convert string T to anagram of string S.

Constraints:

1 ≤ T ≤ 10
1 ≤ |S|,|T| ≤ 105

Sample Input
4
abc
cba
abd
acb
talentpad
talepdapd
code
road

Sample Output
0
2
4
4
*/


    #include <bits/stdc++.h>

        using namespace std;

        #define ll long long

        const int N = 10001;
        // global arrays are already inisialized zero


        int main(){

            ios_base::sync_with_stdio(false);

            cin. tie(NULL);

            int t; cin>>t;

            while(t--){

                string s,t;

                cin>>s>>t;

                int a[27] = {0};

                int b[27] = {0};

                for(int i=0; i<s.size(); i++){

                    a[s[i]-96]++;

                }

                for(int i=0; i<t.size(); i++){

                    b[t[i]-96]++;

                }

                int ctr = 0;

                for(int i=0; i<27; i++){

                    ctr += abs(a[i] - b[i]);

                }

                cout<<ctr<<endl;

            }

            return 0;

            











// #include <iostream>
// using namespace std;
// int main() {
// 	int q,c=0,limit=26;
// 	cin>>q;
// 	int x=q;
// 	int hsh[limit+1];
// 	int hsh2[limit+1];
// 	cout<<endl;
// 	int res[x];
// 	while(q--){
// 		string s,t;
// 		cin>>s;
// 		cout<<endl;
// 		cin>>t;
// 		cout<<endl;
// 	    for(int i=0;i<=limit;i++){
// 		    hsh[i]=0;
// 			hsh2[i]=0;
// 	    }
// 		int size= s.length();
// 		for(int i=0;i<=size;i++){
// 			hsh[s[i]-'a'+1]++;
// 		}
// 		for(int i=0;i<=size;i++){
// 			hsh2[t[i]-'a'+1]++;
// 		}
// 		int steps=0;
// 		for(int i=1;i<=limit;i++){
// 			if(hsh[i]!=hsh2[i]){
// 				if(hsh[i]-hsh2[i]>=2){
// 					steps+=hsh[i]-1;
// 				}
// 				steps++;
// 			}
// 		}
// 		res[c]=steps;
// 		steps=0;
// 		c++;
// 	}
// 	for(int j=0;j<x;j++){
// 		cout<<res[j]<<endl;
// 	}
// }