#include<iostream>
#include<stack>
using namespace std;
void pushatindex(stack<int>&st,int idx,int x)
{
    stack<int>temp;
    while(st.size()>idx)
    {
        temp.push(st.top());
        st.pop();

    }
    st.push(x);
    while(temp.size()>0)
    {
        
        st.push(temp.top());
        temp.pop();
    }

}
void pushatbottom(int x,stack<int>&st)
{
    stack<int>temp;
    while(st.size()>0)
    {
        temp.push(st.top());
        st.pop();

    }
    st.push(x);
    while(temp.size()>0)
    {
        
        st.push(temp.top());
        temp.pop();
    }

}
void print(stack<int>st)
{
     stack<int>temp; 
     while(st.size()>0)
    {
   
       int x= st.top();
       st.pop();
       temp.push(x);
    }
    while(temp.size()>0)
    {
    cout<<temp.top()<<" ";
      int x=temp.top();
      temp.pop();
      st.push(x);

    }
    cout<<endl;

    

}
void display(stack<int>& st)
{
    if(st.size()==0)return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x);


}
void pushbottomrec(stack<int>& st,int val)
{
     if(st.size()==0){
     st.push(val);
     return;
     }
    int x=st.top();
    
    st.pop();
    pushbottomrec(st,val);
    st.push(x);


}
void reverse(stack<int>& st)
{
    if(st.size()==0)return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushbottomrec(st,x);

}

int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50); 
   
    pushbottomrec(st,20);
    cout<<endl;
    display(st);
    cout<<endl;
    reverse(st);
    display(st);

    

}