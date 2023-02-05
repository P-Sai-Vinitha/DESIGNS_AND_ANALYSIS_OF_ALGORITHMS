#include<bits/stdc++.h>
using namespace std;
int main()
{
	int nt=0,n1=1,n2=0,n,sum=0;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		v.push_back(nt);
		nt=n1+n2;
		n1=n2;
		n2=nt;
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
		if(i%2==0)
		{
			sum+=v[i];
		}
	}
	cout<<endl<<sum;
	
	
}
