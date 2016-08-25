#include<iostream>
#include<map>
#include<string>

using namespace std;
//typedef map<string,int> mMap;
typedef map<int,bool> mMap;

int main()
{
   // map<float,int> mm;
   // map<float,int>::iterator it=mm.begin();
    int a=3,b=2;
 //   float m=float(a)/float(b);


map<pair<int,int>,bool> map1;
;
map1[make_pair(1,0)]=true;
map1[make_pair(0,1)]=true;
for(int i=0;i<2;i++)
{

    for(int j=0;j<2;j++)
    {
        cout<<i<<" "<<j<<endl;
        cout<<map1[make_pair(i,j)]<<endl;
    }
}


   // mm[m]=11;
   // cout<<it->first<<" "<<it->second<<endl;
    /*
mMap map_1;
int num;
string name;
map_1[99]=true;
cout<<map_1[99]<<endl;
//++map_1[99];

cout<<map_1[99]<<endl;
cout<<map_1[1000];


for(int i=0;i<3;i++)
{
cin>>name;
cin>>num;
map_1[name]=num;
}
mMap::iterator it;
for(it=map_1.begin();it!=map_1.end();it++)
{
cout<<(*it).first<<" "<<(*it).second<<endl;
}
mMap map2;
map2=map_1;
cout<<"Enter Num: ";
cin>>num;
for(it=map2.begin();it!=map2.end();it++)
{
//cout<<(*it).first<<" "<<(*it).second<<endl;
if((*it).second==num)
{
    cout<<"FOUND IT!!";
    cout<<(*it).first;
}
}
cout<<endl<<"Enter Name: ";
cin>>name;
cout<<endl<<map2[name];
return 0;

/*
map<int,bool> mMap;


    for(int i=0;i<A.size();i++)
    {
        if(mMap[A[i]]==true)
        {
            return A[i];
        }
        else
        {
        mMap[A[i]]=true;
        }
    }




*/
}
