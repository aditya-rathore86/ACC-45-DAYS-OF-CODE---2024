#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hsize = haystack.length();
        int nsize = needle.length();

        if (nsize == 0) return 0;

        if (hsize < nsize) return -1;
        
        for (int i = 0; i <= hsize - nsize; i++) {
            int j = 0;
            while (j < nsize && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == nsize) {
                return i;
            }
        }
        return -1;
    }
};


int main(){
    
    return 0;
}