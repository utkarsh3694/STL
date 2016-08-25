#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    map<int , string> m;
    cout<<m[1]<<"...empty"<<endl;
    m[0]="Utkarsh";
    string n="Verma";
    string t;
    t=m[0];
    t.append(n);
    m[0]=t;
    cout<<m[0];
    /*
int m=((-6)%20)+20;
cout<<m;
*/
return 0;
}
