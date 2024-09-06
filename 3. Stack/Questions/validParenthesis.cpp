#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return false;
                else
                {
                    char c=st.top();
                    st.pop();
                    if((s[i]==')'&&c=='(')||(s[i]=='}'&&c=='{')||(s[i]==']'&&c=='[')){}
                    else
                        return false;
                }
            }
        }
        if(st.empty())
            return true;
        return false;
    }

int main()
{
    string str ="({{[}})";
    cout<<isValid(str);
    // cout<<isValid(str)?cout<<"Valid":cout<<"Invalid";
return 0;
}