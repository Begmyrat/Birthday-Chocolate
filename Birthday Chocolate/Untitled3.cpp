#include <iostream>

using namespace std;

int n,d,m,t,q;
int a[1000];

int main(){
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	cin>>d>>m;
	for(int i=0;i<n;i++){
		t=0;
		for(int j=i;j<i+m;j++)
			t+=a[j];		
		if(t==d)
			q++;			
	}	
	cout<<q<<endl;
}
