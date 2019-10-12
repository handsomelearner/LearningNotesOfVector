
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N=5,M=6;
    //方法一：
    vector<vector<int>> obj1(N);   //定义一个长度为N的二维动态数组
    for(int i=0;i<obj1.size();i++){
        obj1[i].resize(M);   //改变obj[i]这个数据的大小（resize 改变当前使用数据的大小，如果它比当前使用的大，者填充默认值）
    }
    for(int i=0;i<obj1.size();i++){
        for(int j=0;j<obj1[i].size();j++){
            cout<<obj1[i][j]<<" ";
        }
        cout<<"\n";
    }
    //方法二：
    vector<vector<int>> obj2(N,vector<int>(M));
    for(int i=0;i<obj1.size();i++){
        for(int j=0;j<obj1[i].size();j++){
            cout<<obj1[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
