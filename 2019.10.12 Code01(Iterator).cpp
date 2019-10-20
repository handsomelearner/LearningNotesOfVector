#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>obj;
    for(int i=0;i<10;i++){
        //int x;cin>>x;
        obj.push_back(i);
    }
    cout<<"利用数组"<<"\n";
    for(int i=0;i<10;i++){
        cout<<obj[i]<<" ";
    }
    cout<<"\n"<<"利用迭代器"<<"\n";
    vector<int>::iterator it=obj.begin();
    cout<<*it<<"\n";
    for(;it!=obj.end();it++){
        cout<<*(it+1)<<" ";
    }
    return 0;
}
