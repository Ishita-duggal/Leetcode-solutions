class Solution {
public:
    string sortVowels(string s) {
        string t;
        vector<char> x1;
        vector<int> x2;
        for (int i=0;i<s.size();i++)
        {
            if(s[i] == 'A'|| s[i]=='E'|| s[i]=='I'||s[i]=='U'||s[i]=='O'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                x1.push_back(s[i]);
                x2.push_back(i);
            }
            else{
                t.push_back(s[i]);
            }
        }

        sort(x1.begin(),x1.end()); //sorting my array containing all vowels only.
        for(int k=0; k<x1.size(); k++)
        {
            t.insert(x2[k],1,x1[k]);
        }

        return t;
    }
};