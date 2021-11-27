class Solution {
public:
    int arrangeCoins(int n) {
        
        int counter{1};
        
       while (true)
       {      
          n-=counter;
           if (n>=0)
            counter++;
           else break;
       }
        return counter-1;       
    }
};
