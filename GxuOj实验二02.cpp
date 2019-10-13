#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int>Stack;
    int n,p;
    cin>>n;
    while(n--){
        vector<int>::iterator it=Stack.begin();
        cin>>p;
        switch(p){
            case 1:{
                int x;
                cin>>x;
                Stack.push_back(x);
            };break;
            case 2:{
                if(Stack.size()>0){
                cout<<*it<<" ";
                Stack.erase(Stack.begin());
                }
                else cout<<-1<<" ";
            };break;
        }
    }
    cout<<"\n"<<Stack.size()<<"\n";
    if(Stack.size()>0){
        for(int i=0;i<Stack.size();i++){
            cout<<Stack[i]<<" ";
        }
    }
    return 0;
}

