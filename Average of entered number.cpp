#include<iostream>
using namespace std;
int main()
{
	int i,n,temp;
	double av=0,sum=0;
	
	cout<<"enter the number of integers :";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter the number "<<i<<":";
		cin>>temp;
		sum+=temp;
	}
	av=sum/n;
	cout<<"\n the average of the "<<n<<" number entered by you is: "<<av<<"\n";
	return 0;   	
}
