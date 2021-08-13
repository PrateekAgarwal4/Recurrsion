#include<iostream>
#include<string>

using namespace std;

void subsequence(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	
	char ch=s[0];
	int code=(int)ch;
	string t=to_string(code);
	string ros=s.substr(1);
	
	subsequence(ros,ans);
	subsequence(ros,ans+ch);
	subsequence(ros,ans + t);
	
}

int main()
{
	string s,ans="";
	cin>>s;
	subsequence(s,ans);
	
}
