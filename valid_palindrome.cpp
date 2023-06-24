// Given a string s, return true if it is a palindrome, or false otherwise. 
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
// and removing all non-alphanumeric characters, it reads the same forward and backward. 
// Alphanumeric characters include letters and numbers.
#include<cstring>
#include<vector>
class Solution {
private:
    bool isvalid(char ch)
    {
        if((ch >= 'a'&& ch <='z') || (ch >= 'A'&& ch <='Z') || (ch >= '0'&& ch <='9'))
        {
            return 1;   //check if all char are alpha numeric : only number and alphabets
        }
        return 0;
    }
    char tolow(char ch) //change to lower case
    {
        if((ch >='a' && ch<='z') || (ch >='0' && ch<='9'))
            return ch;  //if not lowercase then return as it is
        else
            {
                char temp = ch - 'A' + 'a';
                return temp;
            }      
    }
    bool check(string ch)
    {
        int l=0;
        int r = ch.length()-1;
        while(l<=r)
        {
            if(ch[l] != ch[r])  //check if char match from first and last
            {
                return 0;
            }
            else
            {
                l++; r--;
            }  //if yes then continue reading
        }
        return 1; //if fully read then return true
    }
public:
   
    bool isPalindrome(string s) {

        string temp = "";
        for(int i=0;i<s.length();i++) //removing non alnum char
        {
            if(isvalid(s[i]))
            {temp.push_back(s[i]);}
        }

        for(int j=0;j<temp.length();j++)
        {
            temp[j] = tolow(temp[j]); //change everything to lowercase
        }
        return check(temp);
    }
}; 
