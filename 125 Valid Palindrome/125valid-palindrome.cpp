class Solution {
private:
    bool isvalid(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch <= 'Z') || (ch>= '0' && ch<='9'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    char lwrcase(char ch)
    {
        if(ch>='A' && ch<='Z')
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
        else{
            return ch;
        }
    }
    bool checkPalindrome(string s)
    {
        int start=0;
        int end = s.size() -1;
        while(start<=end)
        {
            if(s[start] != s[end])
            {
                return 0;
            }
            start++;
            end--;
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
        for( char ch: s)
        {
            if(isvalid(ch))
            {
                temp.push_back(ch);
            }
        }

        for( int i=0;i<temp.size();i++)
        {
            temp[i] = lwrcase(temp[i]);
        }

        return (checkPalindrome(temp));
    }
};