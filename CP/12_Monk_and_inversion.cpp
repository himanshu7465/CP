/*
Monk and Inversions
Monk's best friend Micro, who happen to be an awesome programmer, got him an integer matrix M of size  for his birthday. Monk is taking coding classes from Micro. They have just completed array inversions and Monk was successful in writing a program to count the number of inversions in an array. Now, Micro has asked Monk to find out the number of inversion in the matrix M. Number of inversions, in a matrix is defined as the number of unordered pairs of cells  such that .
Monk is facing a little trouble with this task and since you did not got him any birthday gift, you need to help him with this task.

Video approach to solve this question: here

Input:
First line consists of a single integer T denoting the number of test cases.
First line of each test case consists of one integer denoting N. Following N lines consists of N space separated integers denoting the matrix M.

Output:
Print the answer to each test case in a new line.

Constraints:

Sample Input
2
3
1 2 3
4 5 6
7 8 9
2
4 3
1 4


Sample Output
0
2
*/



#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int x=t,c=0;
	int res[x];
	cout<<endl;
	while(t--){
		int n;
		cin>>n;
		cout<<endl;
		int M[n][n];
		int ct=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>M[i][j];
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				for(int k=i;k<n;k++){
				    for(int l=j;l<n;l++){
						if(M[i][j]>M[k][l]){
					        ct++;
				        }
					}
				}
			}
	    }
		res[c]=ct;
		c++;
    }
	for(int i=0;i<x;i++){
		cout<<res[i]<<endl;
	}
}