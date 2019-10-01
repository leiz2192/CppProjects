#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string s) {
    size_t size = s.size();
    int len = 0;
    unordered_map<char, int> char_pos;
    int i = 0;
    int j = 0;
    for (; i < size; ++i) {
        if (char_pos.find(s[i]) != char_pos.end()) {
            j = max(char_pos[s[i]], j);
        }
        len = max(len, i - j + 1);
        char_pos[s[i]] = i + 1;
    }
    return len;
}


int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << lengthOfLongestSubstring("abcabcbb") << "\n";
    std::cout << lengthOfLongestSubstring("abcaabcdbb") << "\n";
    std::cout << lengthOfLongestSubstring("bbbbb") << "\n";
    std::cout << lengthOfLongestSubstring("pwwkew") << "\n";
    std::cout << lengthOfLongestSubstring("p") << "\n";
    return 0;
}