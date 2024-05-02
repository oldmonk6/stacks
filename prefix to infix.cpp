#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,string val2,int ch)
{
    string s=" ";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;

}

int main()
{
    string s="-/*+79483";//infix expression
    // we need two stacks ,1 for vals,1 for ops
    stack<string> val;
    
    for(int i=s.length()-1;i>=0;i--)
    {   //check if s[i] is a digit
        if(s[i]>=48 && s[i]<=57)
        {//digit
            val.push(to_string(s[i]-48));
        }
        else{
            //s[i] it is -> a operand
              string val1=val.top();
               val.pop();
               string val2=val.top();
               val.pop();
               string ans=solve(val1,val2,s[i]);
               val.push(ans);
            }        
    }
    cout<<val.top();

}
