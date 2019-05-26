#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct point{
	int x,y;
};

ll sqr(int a){
	return a*a;
}

ll countDist(point A, point B){
	return ceil(hypot(A.x-B.x, A.y-B.y));
}
int main (){
	int t; cin>>t;
	for (int xx=1;xx<=t;xx++){

		point pusat;
		int R;
		cin>>pusat.x>>pusat.y>>R;

		int n;cin>>n;
		vector<point> immo;
		for (int i=1;i<=n;i++){
			point tmp; cin>>tmp.x>>tmp.y;
			immo.push_back(tmp);
		}

		long long ans=0;
		for (int i=0;i<n;i++){
			ans+=max((ll)0, countDist(immo[i],pusat)-R);
		}
		cout<<"Case #"<<xx<<": "<<ans<<endl;
	}
}
