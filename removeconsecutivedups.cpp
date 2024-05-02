#include<iostream>
#include<stack>
using  namespace std;
void print(stack<char> &st)
{
    stack<char>temp; 
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

}
void removedup(string &s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(st.size()==0)st.push(s[i]);
        if(s[i]==st.top())continue;
        else st.push(s[i]);
       
        
        
    }
    print(st);

}
int main()
{
    string s="aaabbcdaabffg";
    removedup(s);

}