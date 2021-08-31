/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void towerofhanoi(int n,char a,char b,char c)
{
    if(n==0)
    return;
    
    towerofhanoi(n-1,a,c,b);
    cout<<n<<" is moved from "<<a<<" to "<<b<<endl;
    towerofhanoi(n-1,c,b,a);
}

int main()
{
    int n;
    cin>>n;
    char a,b,c;
    cin>>a>>b>>c;
    towerofhanoi(n,a,b,c);
    return 0;
}
