#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    string t = "";
    while(n>0) {
        t += to_string(n%3);
        n /=3;
    }
    
    reverse(t.begin(), t.end());
    int answer = 0;
    int p = 1;
    for (char c:t){
        answer += (c-'0')*p;
        p *=3;
    }
    return answer;
}