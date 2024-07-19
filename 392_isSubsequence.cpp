/*
un optimised

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ns = s.size();
        int nt = t.size();
        if (ns > nt)
            return false;
        else if (ns == nt) {
            if (s.compare(t) == 0)
                return true;
            else
                return false;
        }
        int ls = 0;
        int lt = 0;
        while (ls < ns && lt < nt) {
            if (s[ls] == t[lt] && lt == nt - 1 && ls < ns - 1) {
                return false;
            } else if (s[ls] != t[lt] && lt == nt - 1) {
                return false;
            } else if (s[ls] != t[lt])
                lt++;
            else {
                ls++;
                lt++;
            }
        }
        return true;
    }
};

*/

//optimised
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp = 0;
        int tp = 0;

        while (sp < s.length() && tp < t.length()) {
            if (s[sp] == t[tp]) {
                sp++;
            }
            tp++;
        }

        return sp == s.length();        
    }
};