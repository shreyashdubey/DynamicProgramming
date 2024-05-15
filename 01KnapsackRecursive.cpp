#include<bits/stdc++.h>
using namespace std;
int t[105][100005];
int knapsack(int wt[],int val[], int W, int n){
	if(n == 0 or W == 0) return 0;
	if(t[n][W] != -1) return t[n][W];
	if(wt[n-1] <= W){
		return t[n][W] = max(val[n-1]+ knapsack(wt,val,W-wt[n-1],n-1), knapsack(wt,val,W,n-1)); // max(chosen,not chosen)
	}
	else{ // item weight is more than total capacity left so will not choose
		return t[n][W] = knapsack(wt,val,W,n-1);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
	#endif
	int n,W; cin>>n>>W;
	int wt[n],val[n];
	for(int i = 0; i<n;i++) cin>>wt[i]>>val[i];
	memset(t,-1,sizeof(t));
	knapsack(wt,val,W,n);
	cout<<t[n][W];
	return 0;
}