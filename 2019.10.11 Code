#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
void Print(vector<int>obj){
    for(int i=0;i<obj.size();i++){
        cout<<obj[i]<<",";
    }
    cout<<"\n";
}
int main(int argc, const char * argv[]) {
    vector<int>cht;
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        cht.push_back(x);   //往容器里加数
    }
    sort(cht.begin(),cht.end());
    Print(cht);
    reverse(cht.begin(),cht.end());
    Print(cht);
    cout<<"\n"<<endl;
    return 0;
}
