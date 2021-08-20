/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int jump(int n)
{
    if(n<0)
    return 0;
    
    if(n==1 || n==0)
    return 1;
    
    return jump(n-1)+jump(n-2)+jump(n-3);
}

int main()
{
    int n;
    cin>>n;
    cout<<jump(n);
    
}
