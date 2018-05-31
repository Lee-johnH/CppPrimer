#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

int main(void)
{
    vector<int> obj;
    for(int i = 0; i < 10; i++)
    {
        obj.push_back(i);
        cout<<obj[i]<<",";
    }
    cout<<endl;

    obj.clear();    //清除容器所有数据
    cout<<"after clear: "<<endl;
    for(int i = 0; i < obj.size(); i++)
        cout<<obj[i];
    cout<<endl;

    return 0;
}
