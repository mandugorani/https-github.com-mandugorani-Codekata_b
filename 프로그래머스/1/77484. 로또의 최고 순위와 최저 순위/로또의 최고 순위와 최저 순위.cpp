#include <vector>
using namespace std;

int get_rank(int count) {
    if(count == 6) return 1;
    else if(count == 5) return 2;
    else if(count == 4) return 3;
    else if(count == 3) return 4;
    else if(count == 2) return 5;
    else return 6;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int zero_count = 0;
    int correct = 0;
    
    // 내가 선택한 번호들 확인
    for(int my_num : lottos) {
        if(my_num == 0) {
            zero_count++;
            continue;
        }
        for(int win_num : win_nums) {
            if(my_num == win_num) {
                correct++;
                break;
            }
        }
    }
    int max_correct = correct + zero_count;
    int min_correct = correct;
    
    return {get_rank(max_correct), get_rank(min_correct)};
}