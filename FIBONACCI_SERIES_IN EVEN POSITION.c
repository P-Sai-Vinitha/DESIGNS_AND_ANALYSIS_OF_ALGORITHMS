#include<iostream>
int main()
{
	int nt=0,n1=1,n2=0,n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n+1;i++)
	{
		cout<<nt;
		v.push_back(nt);
		nt=n1+n2;
		n1=n2;
		n2=nt;
	}
	cout<<v;
}