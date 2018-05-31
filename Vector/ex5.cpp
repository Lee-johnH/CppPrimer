#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//二维数组的两种定义方法

int main(void)
{
#if 0
    //法一：
    int N=5, M=6;
    vector<vector<int> > obj(N);
    for(int i = 0; i < obj.size(); i++)
        obj[i].resize(M);

    for(int i = 0; i < obj.size(); i++)
    {
        for(int j = 0; j < obj[i].size(); j++)
        {
            cout<<obj[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<endl;
#endif

#if 1
    //法二：
    int N = 5, M = 6;
    vector<vector<int> > obj(N, vector<int>(M)); //定义二维数组5行6列

    for(int i = 0; i < obj.size(); i++)
    {
        for(int j = 0; j < obj[i].size(); j++)
            cout<<obj[i][j]<<",";
        cout<<endl;
    }
    cout<<endl;

#endif

    return 0;
}
