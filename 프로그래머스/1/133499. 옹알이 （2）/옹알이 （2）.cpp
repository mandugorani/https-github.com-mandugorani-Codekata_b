#include <vector>
#include <string>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for (string word : babbling) {
        int pos= 0;
        string prev= "";
        bool valid= true;
        while (pos < word.size()) {
            char c= word[pos];
            if (c== 'a') {
                if (pos+ 3 > word.size()) {
                    valid = false;
                    break;
                }
                string sub = word.substr(pos, 3);
                if (sub!= "aya") {
                    valid= false;
                    break;
                }
                if (prev== "aya") {
                    valid= false;
                    break;
                }
                prev = "aya";
                pos += 3;
            } else if (c== 'y') {
                if (pos+ 2 > word.size()) {
                    valid = false;
                    break;
                }
                string sub = word.substr(pos, 2);
                if (sub!= "ye") {
                    valid= false;
                    break;
                }
                if (prev== "ye") {
                    valid= false;
                    break;
                }
                prev= "ye";
                pos+= 2;
            } else if (c== 'w') {
                if (pos+ 3 > word.size()) {
                    valid= false;
                    break;
                }
                string sub = word.substr(pos, 3);
                if (sub!= "woo") {
                    valid = false;
                    break;
                }
                if (prev== "woo") {
                    valid= false;
                    break;
                }
                prev= "woo";
                pos+= 3;
            } else if (c== 'm') {
                if (pos + 2 > word.size()) {
                    valid= false;
                    break;
                }
                string sub= word.substr(pos, 2);
                if (sub!= "ma") {
                    valid= false;
                    break;
                }
                if (prev== "ma") {
                    valid= false;
                    break;
                }
                prev= "ma";
                pos+= 2;
            } else {
                valid = false;
                break;
            }
        }
        if (valid && pos== word.size()) {
            answer++;
        }
    }
    return answer;
}