#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;
int main()
{
    int k=10;
vector<int> a(k,0);
a.push_back(100);
a.push_back(200);
a.push_back(300);
int i=1;
a.erase(a.begin()+i);
for(int i=0;i<a.size();i++)
{

    cout<<a[i]<<endl;
}
/*
string s="abcd";
string g=s.substr(4);
if(g=="")
{
    cout<<"nice";
}
*/
}
