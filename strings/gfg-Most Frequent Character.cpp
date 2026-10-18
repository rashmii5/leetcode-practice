//ik this is a lottt but whateverrr
class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        unordered_map<char,int> freq;
        
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        multimap<int,char> mm;
        
        for(auto p:freq){
            mm.insert({p.second,p.first});
        }
        vector<int> v;
        
        int maxfreq=mm.rbegin()->first;
        for(auto i=mm.rbegin();i!=mm.rend();i++){
            if(i->first==maxfreq){
            v.push_back(i->second);
            }
            else{
                break;
            }
            
        }
        
        char min=v[0];
        for(int i=0;i<v.size();i++){
            if(v[i]<min){
                min=v[i];
            }
        }
       return min;
        
    
        
    }
};
