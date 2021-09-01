/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int maze(int n,int m,int i,int j)
{
    if(i==n && j==m)
    return 1;
    
    if(i>n || j>m)
    return 0;
    
    return maze(n,m,i+1,j)+maze(n,m,i,j+1);
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<maze(n,m,1,1);

    return 0;
}