#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {


    string prefix = strs[0];
    cout << strs.size();
    
    int i = 0;
    
    while(i<strs.size()) {
        int j = 0;
        while(j<prefix.length()) {
            if (strs[i][j] != prefix[j]) {
                prefix.erase(prefix.begin() + j, prefix.end());
                if (prefix == "") {
                    return prefix;
                }
            }
            
            
            j++;

        }
        
        i++;
    }

    return prefix;
}


int main()
{
    vector<string> strs{ "flower","flow","floght" };
    cout << longestCommonPrefix(strs);
}

