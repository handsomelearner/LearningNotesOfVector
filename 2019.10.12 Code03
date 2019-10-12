#include<algorithm>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
void Print(vector<int>obj){
    for(int i=0;i<obj.size();i++){
        cout<<obj[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    vector<int>obj;
    for(int i=1;i<=10;i++){
        //int x;cin>>x;
        obj.push_back(i);
    }
    obj.insert(obj.begin()+0, 111);   //在第一个元素“前”插入111,放到第0位
    Print(obj);
    obj.insert(obj.end(),222);       //在最后一个元素之“后”插入222
    Print(obj);
    obj.insert(obj.end()-1,333);    //在倒数第二个元素”后“插入333
    Print(obj);
    obj.insert(obj.begin()+1,444);  //在第二个元素”前“插入444，放到第1位
    Print(obj);
    obj.erase(obj.begin()+0);       //删除第0个元素
    Print(obj);
    obj.erase(obj.begin()+0,obj.begin()+5); //删除0～5个元素(左开右闭)，删除前五个元素
    Print(obj);
    return 0;
}
