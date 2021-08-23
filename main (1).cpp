/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int jumps(int s,int e)
{
    if(s==e)
    return 1;
    
    if(s>e)
    return 0;
    
    int count=0;
    for(int i=1;i<=6;i++)
    {
    count+= jumps(s+i,e);
    }
    return count;
}

int main()
{
    int s,e;
    cin>>s>>e;
    cout<<jumps(s,e);
}