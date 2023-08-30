So, the complemented result is 2, which is the complement of the original binary number 101 (5 in decimal).
​
​
​
​
​
class Solution {
public:
int bitwiseComplement(int num) {
if (num == 0) {
return 1; // Special case for input 0
}
​
int result = 0;
int position = 0;
​
while (num > 0) {
int bit = num & 1; // Get the rightmost bit of 'num'
// Flip the bit and add it to the result
result |= (1 - bit) << position;
position++;
num >>= 1; // Right shift 'num'
}
​
return result;
​
}
};