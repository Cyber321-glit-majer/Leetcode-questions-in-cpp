class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
    for(int i=0;i<n;i++)
    {
      if(int(s[i]+32)==int(s[i+1])||int(s[i])==int(s[i+1]+32) )
      {
        //s.erase(s.begin()+i,s.begin()+i+1+1);
        s.erase(s.begin()+i);
         s.erase(s.begin()+i);
        
        i=-1;
      }
       
    }
    return s;
    }
};
