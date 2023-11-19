/*
 * Filename: d:\Test\LEETCODE-PROBLEMS-FROM-ARRAYS-AND-STRINGS\Truncate Sentence.cpp
 * Path: d:\Test\LEETCODE-PROBLEMS-FROM-ARRAYS-AND-STRINGS
 * Created Date: Sunday, November 19th 2023, 12:55:35 pm
 * Author:  CHANDRUVASAN S
 * 
 * Copyright (c) 2023 Trinom Digital Pvt Ltd
 */

// By using space we can seperate sentences

class Solution {
public:
    string truncateSentence(string s, int k) {
        string res;
        int space_count = 0;
        int size = s.size();
        for(int i=0;i<size;i++) {
            if(s[i] == ' '){
                space_count++;
            }
            if(space_count > k-1) {
                break;
            }
            if(space_count <= k) {
                res += s[i];
            }
        }
        return res;
    }
};