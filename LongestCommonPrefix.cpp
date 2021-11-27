class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) 
    {
        string prefix=strs[0];
        for (const string& c:strs)
        {
           int a{0};
        int a1=prefix.length();
        int a2=prefix.length();
            
          if (a1>a2)  a=a2;
            else      a=a1;
            
            // loop through each letter
            string temp{""};
           for (int i=0;i<a;i++) 
           {
                  
               if (c[i]==prefix[i])
                 temp+=c[i];
               else   
                  break;                              
           }         
            prefix=temp;
          }
           
       return prefix; 
    }
};
