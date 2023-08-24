class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
           for (int i = 0; i < ransomNote.length(); i++) {
            bool found = false;
            for (int j = 0; j < magazine.length(); j++) {
                if (ransomNote[i] == magazine[j]) {
                    magazine[j] = ' '; // Mark the used character in magazine
                    found = true;
                    break; // Break once found
                }
            }
            if (!found) {
                return false;
            }
        }
        return true;
    }
};






  // if(magazine.length()>=ransomNote.length())
        // {
        //     for(int i=0;i<magazine.length();i++)
        //     {
        //             if(magazine[i]==ransomNote[i])
        //                 c++;
        //     }
        //     if(c==magazine.length())
        //         return false;
        // }