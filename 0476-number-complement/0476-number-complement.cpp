class Solution {
public:
    int findComplement(int num) {
        int r=0;
            int position = 0;

    while (num) {
        int bit = num & 1; // Get the rightmost bit of 'num'
        // Flip the bit and add it to the result
        r|= (1 - bit) << position;
        position++;
        num >>= 1; // Right shift 'num'
    
        }
        return r;
    }
    
};