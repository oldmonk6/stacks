#include<iostream>
using namespace std;
class stack{
    public:
    int arr[5];
    int top;
    stack()
    {
        this->top=-1;
    }
    void push(int val)
    {
        if(top==4)cout<<"stcak is full";
        top++;
        arr[top]=val;

    }
    void pop()
    {
        if(top==-1)cout<<"Stack is empty";
        top--;

    }
    int size()
    {
        return top+1;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    cout<<st.size();

}