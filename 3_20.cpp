#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> vInt;
    int iVal;
    cout<<"请输入一组数字: "<<endl;
    while(cin >> iVal)
        vInt.push_back(iVal);

    if(vInt.size() == 0)
    {
        cout<<"没有任何元素!"<<endl;
        return -1;
    }

    cout<<"相邻的元素之和是: "<<endl;
    //使用decltype推断i的类型
    for(decltype(vInt.size()) i = 0; i < vInt.size() - 1; i += 2)
    {
        cout<<vInt[i] + vInt[i+1]<<" ";
        //每行输出5个数
        if((i + 2) % 10 == 0)
            cout<<endl;
    }
    //如果元素是奇数，单独处理最后一个元素
    if(vInt.size() % 2 != 0)
        cout<<vInt[vInt.size() - 1];
    cout<<endl;


    cout<<"首尾元素之和是："<<endl;
    for(decltype(vInt.size()) i = 0; i < vInt.size()/2; i++)
    {
        cout<<vInt[i] + vInt[vInt.size()-i-1]<<" ";
        if((i+1) % 5 == 0)
            cout<<endl;
    }
    if(vInt.size() % 2 != 0)
        cout<<vInt[vInt.size()/2];
    cout<<endl;

    return 0;
}
