#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    int countX[10] = {0};
    int countY[10] = {0};
    
    for(int i = 0; i < X.size(); i++) {
        int num = X[i] - '0';
        countX[num]++;
    }
    
    for(int i = 0; i < Y.size(); i++) {
        int num = Y[i] - '0';
        countY[num]++;
    }
    
    vector<char> common;
    
    for(int num = 9; num >= 0; num--) {
        if(countX[num] > 0 && countY[num] > 0) {
            int min_count = min(countX[num], countY[num]);
            for(int i = 0; i < min_count; i++) {
                common.push_back(num + '0');
            }
        }
    }
    if(common.empty()) {
        return "-1";
    }
    else {
        bool all_zero = true;
        for(char c : common) {
            if(c != '0') {
                all_zero = false;
                break;
            }
        }
        if(all_zero) {
            return "0";
        }
    }
    string answer = "";
    for(char c : common) {
        answer += c;
    }
    
    return answer;
}