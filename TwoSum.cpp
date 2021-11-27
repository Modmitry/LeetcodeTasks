class Solution {
public:
    vector<int> twoSum(const vector<int>& a, const int& target) 
    {
        unordered_map<int,int> hash_table;
        
        for (int i=0; i<(int)a.size(); i++)
        {
            auto it=hash_table.find(target-a[i]);
            
            if (it!=hash_table.end())
                return {it->second,i};
            
            hash_table[a[i]]=i;
        }   
        throw invalid_argument("not found");
    }
};
