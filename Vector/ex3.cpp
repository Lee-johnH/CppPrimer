#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//练习排序

int main(void)
{
    vector<int> obj;

    obj.push_back(5);
    obj.push_back(4);
    obj.push_back(2);
    obj.push_back(1);
    obj.push_back(3);

    cout<<"排序前：";
    for(int i = 0; i < obj.size(); i++)
        cout<<obj[i]<<",";
    cout<<endl;

    sort(obj.begin(), obj.end());   //升序排序

    cout<<"从小到大排序：";
    for(int i = 0; i < obj.size(); i++)
        cout<<obj[i]<<",";
    cout<<endl;

    cout<<"从大到小排序：";
    reverse(obj.begin(), obj.end());
    for(int i = 0; i < obj.size(); i++)
        cout<<obj[i]<<",";
    cout<<endl;

    return 0;
}
