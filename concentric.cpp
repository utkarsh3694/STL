#include<iostream>
#include<vector>

using namespace std;

int main()
{
int A;
cout<<endl<<"Enter Number: ";
cin>>A;
int k=(2*A-1);
    vector<vector<int> > arr;
    int left=0,right=k-1;
    vector<int> lin;
    vector< vector<int> >pin;
    for(int i=0;i<=k/2;i++)
    {
        for(int m=0;m<left;m++)
        {
            lin.push_back((A-i)+(left-m));
        }
        for(int j=left;j<=right;j++)
        {
            lin.push_back(A-i);
        }
        for(int n=right+1;n<k;n++)
        {
            lin.push_back((A-i)+(n-right));
        }
        arr.push_back(lin);
        pin.push_back(lin);
        lin.clear();
        left++;
        right--;

    }
    pin.pop_back();
    while(!pin.empty())
    {
        arr.push_back(pin.back());
        pin.pop_back();
    }
cout<<endl;
    for(int i=0;i<arr.size();i++)
    {
        for(int k=0;k<arr[i].size();k++)
        {
            cout<<arr[i][k]<<" ";

        }
        cout<<endl;
    }
    main();
   // cout<<endl<<arr[0][0];


}
