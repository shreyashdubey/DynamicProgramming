#include<bits/stdc++.h>
using namespace std;
int t[105][100005];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
	#endif
	int n,W; cin>>n>>W;
	int wt[n],val[n];
	for(int i = 0; i<n;i++) cin>>wt[i]>>val[i];
	for(int i=0;i<=n;i++) t[i][0]=0;
   	for(int i=0;i<=W;i++) t[0][i]=0;  

	for(int i = 1; i<= n; i++){
		for(int j = 1; j <= W; j++){
			if(wt[i-1]<=j) // Choose & not choose
				t[i][j] = max(val[i-1] + t[i-1][j - wt[i-1]], t[i-1][j]);
			else // No choice
				t[i][j] = t[i-1][j];
		}
	}
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<W; j++) cout<<t[i][j]<<" "; cout<<endl;
	}
	cout<<t[n][W];
	return 0;
}