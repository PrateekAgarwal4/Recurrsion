#include<iostream>

using namespace std;

int survive(int n,int k)
{   
	if(n==1)
	return 1;
	else
	 return (survive(n-1,k) + k-1)%n+1;
}

int main()
{
	int n;
	int k;
	cin>>n>>k;
	cout<<survive(n,k);

}
