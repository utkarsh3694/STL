#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //int x=(5>=3)?3:5;
    int x=max(1,2);

    cout<<x;


    vector<int> val(10);

    cout<<endl<<*val.begin()<<" "<<val.size()<<endl;
    val[9]=99;
    val[0]=100;
    cout<<val[0]<<endl;
    val.erase(0);
    cout<<"THIUS: "<<val[-1]<<endl;
    cout<<val.back();

    /*char c='y';
    //while(c!='n' || c!='N')
    while(c=='y')
    {
        int a;
        cout<<"Enter Element..."<<endl;
        cin>>a;
        val.push_back(a);
        cout<<"Continue?(y/n)";
        cin>>c;
    }
    int k=0;
    cout<<"uR elem..."<<endl;
    while(k<val.size())
    {
        cout<<val[k++]<<" ";

    }

    vector<int> :: iterator itr = val.begin();
    cout<<"ITR: "<<*itr;
    cout<<endl<<val.back();
    //val.back()=90;

    cout<<endl<<*(val.end()-1);
    */
return 0;
}
