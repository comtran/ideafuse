#include<bits/stdc++.h>
using namespace std;


int main (){
	int t; cin>>t;
	for (int xx=1 ; xx<=t; xx++){

		int n,k; cin>>n>>k;
		priority_queue<int, vector<int>, greater<int> > CPU;

		for (int i=1;i<=k;i++){
			CPU.push(0);
		}

		int maks=0;

		for (int i=1;i<=n;i++){
			int x; cin>>x;
			int top=CPU.top(); CPU.pop();
			maks=max(maks,top+x);
			CPU.push(top+x);
		}

		cout<<"Case #"<<xx<<": "<<maks<<endl;
	}
}
