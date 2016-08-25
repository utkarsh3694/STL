#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

map< pair <int,int> ,int > map1;
vector< vector<string> > ans;
vector<string> temp;
int Q,lasti,lastj;
int N;


void block(pair<int,int> pair1)
{
    int a=pair1.first;
    int b=pair1.second;
     cout<<"block.. "<<pair1.first<<" "<<pair1.second<<endl;
    cout<<"before bolocking.."<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<map1[make_pair(i,j)]<<" ";
        }
        cout<<endl;
    }


    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            //cout<<"here.."<<i<<" "<<j<<endl;


            if(i==a || j==b)
            {
                //cout<<"incr.."<<i<<" "<<j<<endl;
                map1[make_pair(i,j)]++;
            }

            else
            {
              float sl=(float(b-j)/float(a-i));
              //cout<<"slope: "<<sl<<endl;
            if(sl==1 || sl==-1)
            {
                //cout<<"incr.."<<i<<" "<<j<<endl;
                map1[make_pair(i,j)]++;
            }

            }
        }
    }
    cout<<endl<<"after bolocking.."<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<map1[make_pair(i,j)]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    return;


}

void unblock(pair<int,int> pair1)
{
    int a=pair1.first;
    int b=pair1.second;

     cout<<"unblock.. "<<pair1.first<<" "<<pair1.second<<endl;
        cout<<"before unbolocking.."<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<map1[make_pair(i,j)]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {

            if(i==a || j==b)
            {
                map1[make_pair(i,j)]--;
            }

            else
            {
                float sl=float(b-j)/float(a-i);
                if(sl==1 || sl==-1)
            {
                map1[make_pair(i,j)]--;
            }
            }
        }
    }

    cout<<endl<<"after unbolocking.."<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<map1[make_pair(i,j)]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
return;
}

pair<int,int> whereTo(pair<int,int> pair1)
{
    int a=pair1.first;
    int b=pair1.second;
    cout<<"In where to.."<<endl;
    if(b<N)
    {

    cout<<"first"<<endl;
    for(int j=b;j<N;j++)
    {
        cout<<map1[make_pair(a,j)]<<" ";
        if(map1[make_pair(a,j)]==0)
            {
                cout<<"return.. "<<a<<" "<<j<<endl;
                return(make_pair(a,j));
            }
    }
    }

    if(Q<(a+1))
    {
        return(make_pair(-1,-1));
    }
    cout<<endl;

    if((a+1)<N)
    {

        cout<<"SECOND: "<<endl;
        for(int j=0;j<N;j++)
        {
            cout<<map1[make_pair(a+1,j)]<<" ";
            if(map1[make_pair(a+1,j)]==0)
            {
                // cout<<"wherto return func.. "<<i<<" "<<j<<endl;
                cout<<"return.. "<<a+1<<" "<<j<<endl;
                return(make_pair(a+1,j));
            }
        }

    }
    cout<<endl;
    // cout<<"wherto return func.. -1 -1 ";//<<pair1.first<<" "<<pair1.second<<endl;
    cout<<"return.. -1 -1 "<<endl;
    return(make_pair(-1,-1));

}



int main()
{
    int A;
    char qq='Q';
    char dot;
    map1.clear();
    cout<<"enter A: ";
    cin>>A;
    N=A;
    int i=0,j=0;
    Q=0;
    pair<int,int> pairt;
    vector< pair<int,int> > tem1;
    vector< vector<string> > ans;
    string dots;
    cout<<"A got is: "<<N<<endl;
    for(int i=0;i<A;i++)
    {
        dots.append(".");
    }
    tem1.clear();
    while(1)
    {
        cout<<"calling where to:  "<<i<<" "<<j<<endl;
        pairt=whereTo(make_pair(i,j));

        if(pairt.first!=-1 && pairt.second!=-1)
        {

            Q++;
            i=pairt.first;
            j=pairt.second;
            block(pairt);
            tem1.push_back(pairt);
            cout<<"pushing in tem.. "<<i<<" "<<j<<endl;
        }
        else
        {
            if(Q==0)
            {
                break;
            }
            pairt=tem1.back();
            i=pairt.first;
            j=pairt.second+1;
            tem1.pop_back();
            Q--;
            unblock(pairt);
            cout<<"popping from tem.. "<<i<<" "<<j-1<<endl;
        }

        if(tem1.size()==A)
        {
            vector<string> temp1(A,dots);
            for(int i=0;i<tem1.size();i++)
            {
                temp1[tem1[i].first][tem1[i].second]=qq;
            }
            cout<<"pushing in.."<<endl;
            for(int k=0;k<temp1.size();k++)
            {
                cout<<temp1[k]<<endl;
            }
            ans.push_back(temp1);
            temp1.clear();
        }





    }

    cout<<"hi"<<endl;

    for(int k=0;k<ans.size();k++)
    {
        for(int m=0;m<ans[k].size();m++)
        {
            cout<<ans[k][m]<<endl;
        }
        cout<<endl<<endl;
    }

}
