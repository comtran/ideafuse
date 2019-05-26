#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
int main (){
	ull t; cin>>t;
	for (int i=1;i<=t;i++){
		ull x; cin>>x;
		ull tri=x-2;
		ull edge=2*x-3;
		cout<<"Case #"<<i<<": "<<tri<<" triangle(s) with "<<edge<<" edges."<<endl;
	}
}
