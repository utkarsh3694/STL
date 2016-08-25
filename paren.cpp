map<int,vector<string>>map1;

vector<string> func(int n)
{
    vector<string> temp,fn1,fn2,mat;
    string etemp;
    mat.clear();
    if(n==1)
    {
        string p="()";
        temp.push_back(p);
        map1[1]=temp;
        return temp;
    }
    else
    {
        if(map1[n-1]!=mat)
        {
            fn1=map1[n-1];
        }
        else
        {
            fn1=func(n-1);
            map1[n-1]=fn1;
        }
        for(int i=0;i<fn1.size();i++)
        {
            etemp="("+fn1[i]+")";
            temp.push_back(etemp);
            etemp.clear();
        }

        for(int i=1;i<n;i++)
        {
                if(map1[n-i]!=mat)
            {
                fn1=map1[n-i];
            }
            else
            {
                fn1=func(n-i);
                map1[n-i]=fn1;
            }

            if(map1[i]!=mat)
            {
                fn2=map1[i];
            }
            else
            {
                fn2=func(i);
                map1[i]=fn2;
            }



            // fn1=func(n-i);
            // fn2=func(i);
            for(int m=0;m<fn1.size();m++)
            {
                for(int k=0;k<fn2.size();k++)
                {
                    etemp=fn1[m]+fn2[k];
                    temp.push_back(etemp);
                    etemp.clear();
                }
            }
        }
        map1[n]=temp;
        return temp;


    }

}



vector<string> Solution::generateParenthesis(int A) {
    vector<string> ans;
    map1.clear();
    ans=func(A);
    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++)
      {
        //   cout<<"st for"<<ans[i]<<endl;
        int j=0;
        for(j=i+1;j<ans.size();j++)
        {
            if(ans[j]==ans[i])
            {
                // cout<<"equal.."<<j<<endl;
            }
            else
            {
                break;
            }

        }
        if(j-i-1>0)
        {
        // cout<<"erase.. i+1"<<i+1<<" j: "<<j<<endl;
        ans.erase(ans.begin()+i+1,ans.begin()+j);
        // cout<<"erased"<<endl;
        }

    }


    return(ans);

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
