#include <iostream>

using namespace std;

void printspell(int n,string arr[])
{
    if(n==0)
    return;
    
    printspell(n/10,arr);
    cout<<arr[n%10]<<" ";
}

int main()
{
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;

printspell(n,arr);

}
