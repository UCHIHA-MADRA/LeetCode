class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title = "";
    
    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26; // Adjusting to 0-based index
        char charValue = 'A' + remainder; // Convert remainder to corresponding character
        
        title = charValue + title; // Prepend the character to the title
        columnNumber = (columnNumber - 1) / 26; // Move to the next digit
    }
    
    return title;

    }
};