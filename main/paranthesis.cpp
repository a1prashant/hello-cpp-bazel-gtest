#include <iostream>
#include <map>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        const map<char,char> catelog = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'},
        };
        if(s.length() % 2) return false;
        stack<char> dstack;
	cout << "\n\n-----\nstring is: " << s << endl;
        for(auto i : s) {

            const auto element = catelog.find(i);
            if( element != catelog.end() ) {
                // means its a Key
		cout << "key added: " << i << endl;
                dstack.push( element->first );
                continue;
            }
            
	    cout << "val is: " << i << endl;
            // means its a value
            if(dstack.empty()) {
		cout << "value but empty stack: " << i << endl;
                return false;
            } else {
                const auto topKey = dstack.top();
		const auto valForTopKey = catelog.find( topKey );
		cout << "[" << valForTopKey->first << ":" << valForTopKey->second << "] -- is matching with? -- " << i << endl;
                if( valForTopKey->second == i ) {
		    cout << "pop";
                    dstack.pop();
                    continue;
                }
                return false;
            }
        }
        if( ! dstack.empty()) {
		cout << "stack not empty";
		return false;
	}
	cout << "stack empty";
        return true;
    }
};

int main() {
	Solution solution;
	cout << (solution.isValid("(]") ? "true" : "false");
	cout << (solution.isValid("()") ? "true" : "false");
	cout << (solution.isValid("((()))") ? "true" : "false");
	cout << (solution.isValid("()[]") ? "true" : "false");
	cout << (solution.isValid("({})") ? "true" : "false");
	cout << (solution.isValid("][") ? "true" : "false");
	return 0;
}
