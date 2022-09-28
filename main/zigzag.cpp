#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        std::vector<string> t(numRows);
        auto p = s.begin();
        int count = 0;
	int i = 0;
        while( p != s.end() ) {
            for(i = 0 ; i < numRows ; i++ ) {
	        std::cout << i;
                t[i].push_back(*p++);
                if( p == s.end() ) break;
            }
            if( p == s.end() ) continue;
            for( i = numRows - 2 ; i > 0 ; i-- ) {
		std::cout << i;
                t[i].push_back(*p++);
                if( p == s.end() ) break;
            }
        }
        string result;
        for(const auto & x : t) {
            result += x;
        }
        return result;
    }
};

main() {
    Solution solution;
    solution.convert("PAYPALISHIRING", 3);
    return 0;
}
