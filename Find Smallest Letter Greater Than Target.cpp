class Solution {
public: 
    char nextGreatestLetter(vector<char>& letters, char target) {
       int l = 0, r = letters.size()-1;
        while (l < r) {
            int m = (l + r) / 2;
            if (letters[m] > target)
                r = m;
            else
                l = m + 1;
        }
        return letters[l] > target ? letters[l] : letters[0];
    }
};
