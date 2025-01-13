#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int t_length = t.length();
    int p_length = p.length();
    
    long long p_num = stoll(p);
    
    for (int i=0;
        i<=t_length - p_length;
        ++i){
        string sub_str = t.substr(i, p_length);
        long long sub_num = stoll(sub_str);
        
        if(sub_num <=p_num){
            answer++;
        }
    }
    return answer;

}