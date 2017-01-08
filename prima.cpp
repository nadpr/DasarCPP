//menentukan prima
#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, prima;
	cin >> m;
	
	prima=0;
	for(int a=1;a<=m;a++){
		if(m%a==0){
			prima++;
		}
	}
	if(prima==2){
		cout<<"bilangan prima";
	}else{
		cout<<"bukan";
	}
}
