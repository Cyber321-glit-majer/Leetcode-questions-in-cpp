class Solution {
public:
    bool wordPattern(string p, string s) {
        int n=strlen(&s[0]);
        map<char,string>m1;
        map<string,char> m2;
        vector<string> v;
        string str="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                v.push_back(str);
                str="";
            }
            else{
                str+=s[i];
            }
        }
       
        v.push_back(str);
        if(p.size()!=v.size()){
            return false;}
        for(int i=0;i<strlen(&p[0]);i++){
            if(m1.find(p[i])==m1.end()&&m2.find(v[i])==m2.end()){
                m1[p[i]]=v[i];
                m2[v[i]]=p[i];
            }
            else{
                if(m1[p[i]]!=v[i]||m2[v[i]]!=p[i]){
                    return false;
                }
            }
        }

return true;

    }
};
