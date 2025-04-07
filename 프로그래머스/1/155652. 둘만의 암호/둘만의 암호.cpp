#include <string>

using namespace std;

string solution(string s, string skip, int index) {
    bool skip_table[26] = {false};
    
    for(int i=0; i<skip.size(); i++){
        int idx = skip[i] - 'a';
        skip_table[idx] = true;
    }
    
    string result = "";
    
    for(char c : s){
        int current = c - 'a';
        int cnt = index;
        
        while(cnt > 0){
            current = (current + 1) % 26;
            bool is_skip = false;
            for(char skip_char : skip){
                if((current + 'a') == skip_char){
                    is_skip = true;
                    break;
                }
            }
            
            if(!is_skip) cnt--;
        }
        
        result += (char)(current + 'a');
    }
    
    return result;
}