#include<stack>

class Solution {
public:
    string reverseWords(string s) {
        stack<string> str;
        string st,ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if(st!="")
                    str.push(st);
                st = "";
            }
            else 
            {
                st += s[i];
            }
       
        }
        if(st!="")
            str.push(st);

        while(!str.empty())
        {
            ans += (str.top() + " ");
            str.pop();
        }
        ans.pop_back();
        return ans;
    }
};
