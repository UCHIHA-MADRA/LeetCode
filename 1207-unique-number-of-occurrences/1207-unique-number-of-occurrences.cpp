class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
            int freq[2001] = {0}; // Frequency array for -1000 to 1000 range
    
    for (int num : arr) {
        freq[num + 1000]++; // Mapping num to index in frequency array
    }
    
    bool occurrenceSet[1001] = {false}; // Track unique occurrences
    
    for (int i = 0; i < 2001; ++i) {
        if (freq[i] != 0) {
            if (occurrenceSet[freq[i]]) {
                return false; // Frequency already encountered
            }
            occurrenceSet[freq[i]] = true;
        }
    }
    
    return true;
    }
};