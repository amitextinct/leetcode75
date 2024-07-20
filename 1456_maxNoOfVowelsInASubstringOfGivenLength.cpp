class Solution {
    bool checkVowel(char c){
        return c == 'a' ||c == 'o' ||c == 'i' ||c == 'e' ||c == 'u';
    }
public:
    int maxVowels(string s, int k) {

        int vowel = 0;
        for(int i = 0;i<k;i++){
            if(checkVowel(s[i]))
                vowel++;
        }
        int left = 0;
        int right = k;
        int maxVowel = vowel;
        while(right<s.size()){
            if(checkVowel(s[left]))
                vowel--;
            left++;
            if(checkVowel(s[right]))
                vowel++;
            right++;
            maxVowel= max(maxVowel,vowel);
        }
        return maxVowel;
    }
};