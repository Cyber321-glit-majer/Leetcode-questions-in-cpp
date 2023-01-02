class Solution {
public:
    bool detectCapitalUse(string word) {
       int cnt=0;
       int n=word.size();
       for(int i=0;i<word.size();i++)
       {
           if(word[i]>='A' && word[i]<='Z')
           {
               cnt++;
           }

       }
       return cnt==n || cnt==0 || (word[0]>='A' && word[0]<='Z' && cnt==1);
       return false;
    }
};
