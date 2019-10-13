#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int>Stack;
    int n,p;
    cin>>n;
    while(n--){
        cin>>p;
        switch(p){
            case 1:{
                int x;
                cin>>x;
                Stack.push_back(x);
            };break;
            case 2:{
                if(Stack.size()>0){
                cout<<Stack[Stack.size()-1]<<" ";
                Stack.pop_back();
                }
                else cout<<-1<<" ";
            };break;
        }
    }
    cout<<"\n"<<Stack.size()<<"\n";
    if(Stack.size()>0){
        for(int i=Stack.size()-1;i>=0;i--){
            cout<<Stack[i]<<" ";
        }
    }
    return 0;
}

