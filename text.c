#include <iostream>
#include <stdio.h>
#include <map>
#include <string>
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

       cout<<iter->first<<' '<<iter->second<<endl;

    map<int, string>::iterator iter1;
    iter1 = mapStudent.find(1);
    if(iter1 != mapStudent.end())
        iter1->second += "zk";
    else
    {
        mapStudent.insert(pair<int, string>(1, "student_one"));
    }

    return 0;
}
