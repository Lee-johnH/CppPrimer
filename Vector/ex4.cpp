#include <string.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
    //顺序访问
    vector<int> obj;
    for(int i = 0; i < 10; i++)
        obj.push_back(i);

    cout<<"直接利用数组访问: ";
    for(int i = 0; i < 10; i++)
        cout<<obj[i]<<",";
    cout<<endl;

    //利用迭代器将容器中的数据输出
    cout<<"利用迭代器: ";
    vector<int>::iterator it;
    for(it = obj.begin(); it != obj.end(); it++)
        cout<<*it<<",";
    cout<<endl;

    return 0;
}
