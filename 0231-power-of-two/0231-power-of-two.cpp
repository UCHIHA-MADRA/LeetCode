class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i =0;i<31;i++)
        {
            int p=pow(2,i);
            
            if(p==n)
            {
                return true;
            }
        }
         return false;
        
            }
};