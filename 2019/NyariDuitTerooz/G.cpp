#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second

vector<int> prima;
bool isPure[1000100];
int pure[1000100];
bool bil[1000100];

void sieve(){
	
	memset(bil,true,sizeof(bil));
	long long i,j;

	for (i=2;i<=1000000;i++){
		if (bil[i]){
			prima.push_back(i);
			pure[i]=1;
			j=i;
			while (i*j<=1000000){
				bil[i*j]=false;
				j++;
			}
		}
	}
}


int degPure(int i){
	if (i==1) return 0;
	else if (bil[i]) return 1;
	else {
		int tmp=i;
		int j=0;
		int banyak=0;
		while (tmp>1){
			if (bil[tmp]) {
				return banyak+1;
			}
			if (tmp%prima[j]==0){
				int smt=0;
				while(tmp%prima[j]==0){
					smt++; tmp/=prima[j];
				}
				if (smt==1){
					banyak++;
				}
				else{
					break;
				}
			}
			j++;
		}
		return 0;
	}
}

void generate(){
	for (int i=1;i<=1000000;i++){
		pure[i]=degPure(i);
	}

}

int main (){
	sieve();
	generate();

	int t; cin>>t;

	for (int xx=1;xx<=t;xx++){
		int l,r, k;
		cin>>l>>r>>k;
		int ans=0;
		for (int i=l;i<=r;i++){
			if (pure[i]==k) ans++;
		}

		cout<<"Case #"<<xx<<": "<<ans<<endl;
	}
}
