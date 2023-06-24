class Solution {
public:
    bool isvowel(char c)
    {
        return c=='a'|| c =='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A'||c=='E'|| c=='I'|| c=='O'|| c=='U';
        
    }
    string reverseVowels(string s) {
        int i=0,j = s.length()-1;
        while(i<j && s[i]!='\0')
        {
            while(i<j && !isvowel(s[i]))
                i++;
            while(i<j && !isvowel(s[j]))
                j--;

            swap(s[i++],s[j--]);         
        }
        return s;
    }
};
