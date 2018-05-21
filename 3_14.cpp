#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vInt;
    int i;
    char cont = 'y';

    cout << "请输入一组整数: " << endl;

    while(cin >> i)
    {
        vInt.push_back(i);  //向vector对象中添加元素
        cout << "您要继续吗(y or n)？" << endl;
        cin >> cont;
        if(cont != 'y' && cont != 'Y')
            break;
    }

    cout << "您输入的数为: ";
    for(auto mem : vInt)
        cout << mem << " ";
    cout << endl;

    return 0;
}
