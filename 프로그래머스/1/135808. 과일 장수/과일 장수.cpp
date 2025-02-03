#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end(), greater<int>());
    
    int valid_length = score.size() - (score.size() % m);
    if (valid_length < score.size()) {
        score.resize(valid_length);
    }
    int box_count = score.size() / m;
    for (int box = 0; box < box_count; box++) {
        int min = k;
        
        int start = box * m;
        int end = start + m;
        
        for (int i = start; i < end; i++) {
            if (score[i] < min) {
                min = score[i];
            }
        }
        
        answer += min * m;
    }
    
    return answer;
}