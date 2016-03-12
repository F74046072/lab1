#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"請輸入一個數字:";
	cin>>n;
	cout<<n;  //再印一次

	while(n>1){
		if(n%2!=0) n=3*n+1;  //奇數
		else n=n/2;  //偶數
		cout<<" "<<n;  //數字間空格
	}
	cout<<endl;  //輸出完換行

	return 0;
}
