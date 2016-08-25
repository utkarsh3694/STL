#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

map<int,string>map1;

void gen()
{
map1[1]="one";
map1[2]="two";
map1[3]="three";
map1[4]="four";
map1[5]="five";
map1[6]="six";
map1[7]="seven";
map1[8]="eight";
map1[9]="nine";
map1[11]="eleven";
map1[20]="twenty";
map1[30]="thirty";
map1[40]="forty";
map1[50]="fifty";
map1[60]="sixty";
map1[70]="seven";
map1[80]="eighty";
map1[90]="ninety";
map1[100]="hundred";
map1[1000]="thousand";
}

int main()
{
int num;
gen();
cout<<"enter number[1-9999]: ";
cin>>num;
string ans;
vector<string>digit;
for(int i=10;i<=10000;i=i*10)
{
    int t;
    t=num%i;
    if(t>99)
    {
       // cout<<t<<" "<<i<<endl;
        digit.push_back(map1[t/(i/10)]+" "+map1[(i/10)]);
    }
    else
    {


    digit.push_back(map1[t]);
    }
    num-=t;
}
reverse(digit.begin(),digit.end());
for(int i=0;i<digit.size();i++)
{
    ans.append(digit[i]+" ");
}
cout<<ans;
return 0;
}
