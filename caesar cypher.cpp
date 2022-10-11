#include<iostream>
using namespace std;

string a;
int key;
void getdata(){
	cout<<"Enter string:";
	cin>>a;
	cout<<"Enter key:";
	cin>>key;
}
string encrypt(){
	
	for(int i=0;i<sizeof(a);i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i]=key+a[i];
			if(a[i]>'z'){
				a[i]=a[i]-'z'+'a'-1;
			}
		}
	 
		
	
	}
	cout<<a;
}

int main(){
	getdata();
	encrypt();
}
