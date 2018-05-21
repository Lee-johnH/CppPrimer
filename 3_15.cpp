#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    vector<string> vString;
    string s;
    char cont = 'y';

    cout<<"请输入一组字符串: "<<endl;
    while(cin >> s)
    {
        vString.push_back(s);

        cout<<"您要继续吗(y or n)? "<<endl;

        cin>>cont;
        if(cont != 'y' || cont != 'Y')
            break;
    }

    cout<<"您输入的字符串为: "<<endl;
    for(auto mem : vString)
    {
        cout<< mem <<" ";
    }
    cout<<endl;

    return 0;
}
