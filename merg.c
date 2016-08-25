int f=0,h=0,s=0;
    if(intervals.empty())
    {
        stk.push_back(newInterval);
        h=1;
    }
    if(h==0)
    {
    if(newInterval.start<=(*it).start)
    {
        temp.start=newInterval.start;
        s=1;

        //cout<<"HERE"<<endl;
    }

    while(newInterval.start>(*it).end)
    {
        stk.push_back((*it));
        it++;
        //cout<<"ths"<<endl;
        if(it==intervals.end())
        {
            temp.start=newInterval.start;
            temp.end=newInterval.end;
            f=1;
            //cout<<"HEER"<<endl;
            break;
        }
        //cout<<"HERE1"<<endl;
    }
    if(f==0)
    {
        //cout<<"NOT PASSED"<<endl;
    if((*it).start>=newInterval.start && s==0)
    {
        //(*it).start=newInterval.start;
        temp.start=newInterval.start;
    }
    else if((*it).start<newInterval.start && s==0)
    {
        temp.start=(*it).start;
    }


    if(newInterval.end<=(*it).end)
    {

        if(newInterval.end<(*it).start)
    {
        temp.end=newInterval.end;
        stk.push_back(temp);
    }

     else
     {

        if(s==0)
        {
             temp.end=(*it).end;
             stk.push_back(temp);
        }
        else if(s==1)
        {
        temp.end=newInterval.end;
        stk.push_back(temp);
        }
     }

    }



    else if(newInterval.end>(*it).end)
    {

       // cout<<"HERE9"<<endl;
       it++;
        if(it!=intervals.end())
        {
            //cout<<"HERE9"<<endl;
        while((*it).end<=newInterval.end && it!=intervals.end())
        {
            it++;
        }
        if((*it).start>newInterval.end)
        {
            temp.end=newInterval.end;
            stk.push_back(temp);
            stk.push_back((*it));

        }
        else if((*it).start<newInterval.end && (*it).end>newInterval.end)
        {
            temp.end=(*it).end;
            //cout<<"HERE2"<<endl;
            stk.push_back(temp);

        }
        /*
        else if((*it).end<newInterval.end)
        {
            temp.end=(*it).end;
            stk.push_back(temp);

        }
        */
        else
        {
            temp.end=newInterval.end;
            stk.push_back((temp));
            //cout<<"clear";
        }

        }


    }


    it++;
    while(it!=intervals.end())
    {

        stk.push_back((*it));
        it++;

       // cout<<"HERE5"<<endl;
    }


    }

    else if(f==1)
    {
        //cout<<"HEEEEER"<<endl;
        //cout<<temp.start<<","<<temp.end;
        stk.push_back(temp);
    }
    }

GRXVMQT4R
