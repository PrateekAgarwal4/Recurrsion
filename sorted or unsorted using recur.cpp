#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

string aray(vector <int> arr,int index)
{
	if(index>=arr.size()-1)
	return "yes";
	
	if(arr[index]<arr[index-1])
	return "no";
	
	return aray(arr,index+1);
	
}

int main()
{
	int n;
	cin>>n;
	vector <int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<aray(arr,1);
}
