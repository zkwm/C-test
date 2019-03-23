#include <iostream>
#include <stdio.h>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout<<"hello word1"<<endl;
    int x;

    map<int, string> mapStudent;

    mapStudent.insert(pair<int, string>(1, "student_one"));
    mapStudent.insert(pair<int, string>(2, "student_two"));
    mapStudent.insert(pair<int, string>(3, "student_three"));

    map<int, string>::iterator iter;

    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
    {
       cout<<iter->first<<' '<<iter->second<<endl;
    }

    map<int, string>::iterator iter1;
    iter1 = mapStudent.find(1);
    if(iter1 != mapStudent.end())
        iter1->second += "zk";
    else
    {
        mapStudent.insert(pair<int, string>(1, "student_one"));
    }

    map<int, string>::iterator iter2;

    vector<pair<int, string>>arr;
    int i;

    for(i = 0; i < 10; i++)
    {
        arr.push_back(make_pair(i, "strValue"));
    }

    for(int j = 0; j < 10; j++)
    {
        cout<<arr[j].first<<"      ,     "<<cout<<arr[j].second;
    }

    vector<pair<int, string>>::iterator iter3;

    for(iter3 = arr.begin(); iter3 != arr.end(); iter3++)
    {
        cout<<iter3.first<<"      ,    ,     "<<iter3.second;
    }

    cout<<"test branch";

    return 0;
}
