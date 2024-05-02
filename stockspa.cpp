#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int arr[]={100,80,60,81,70,60,75,85};
    stack<int>st;
    int n=sizeof(arr)/sizeof(arr[0]);
    //previous greater index array
    int pge[n];
    pge[0]=1;
    st.push(0);
    for(int i=1;i<n;i++)
    {
        //pop all elements smaller than arr[i]
        while(st.size()>0 && arr[st.top()]<=arr[i])
        {
            st.pop();
        }
        // mark the ans in nge array
        if(st.size()==0)pge[i]=-1;
        else pge[i]=st.top();
        pge[i]=i-pge[i];
        //push the arr[i]
        st.push(i);

    }
    for(int i=0;i<n;i++)
    {
        cout<<pge[i]<<" ";
    }
    cout<<endl;



}