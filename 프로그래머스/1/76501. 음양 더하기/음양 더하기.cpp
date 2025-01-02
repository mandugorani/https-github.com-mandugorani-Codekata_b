#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int sum = 0;
    
    for (size_t i=0; i< absolutes.size(); i++) {
        if (signs[i]) {
            sum += absolutes[i];
        }else{
            sum -= absolutes[i];
        }
        }
    
    return sum;
    }