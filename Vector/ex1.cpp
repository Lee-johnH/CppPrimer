#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

/*
 *  练习使用pop_back()&push_back(elem)实例在容器最后移除和插入数据
 *
 */

int main(void)
{
    vector<int> obj;
    for(int i = 0; i < 10; i++)
    {
        obj.push_back(i);
        cout<<obj[i]<<",";
    }
    cout<<endl;

    for(int i = 0; i < 5; i++)  //去掉数组最后一个数据
        obj.pop_back();

    for(int i = 0; i < obj.size(); i++)
        cout<<obj[i]<<",";
    cout<<endl;

    return 0;
}
