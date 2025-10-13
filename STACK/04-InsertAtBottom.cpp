#include "bits/stdc++.h"
using namespace std ;

void print(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
void insertAtBottom(stack<int>&st,int num){
    if(st.empty()){st.push(num); return;}
    int val = st.top();
    st.pop();
    insertAtBottom(st,num);
    st.push(val);
}
int main(){
    stack<int>st;
    for(int i=1;i<=5;i++){
        st.push(i);
    }
    print(st);
    insertAtBottom(st,0);
    print(st);
}