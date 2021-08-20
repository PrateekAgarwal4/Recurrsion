/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void permutation(string str,int i)
{
    int n=str.length();
    if(i>=n)
    {
        cout<<str<<endl;
        return;
    }
    for(int j=i;j<n;j++)
    {
        swap(str[i],str[j]);
        permutation(str,i+1);
        swap(str[i],str[j]);
    }
}

int main()
{
    string str;
    cin>>str;
    permutation(str,0);
    
}