#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (char a:s) {
        if (a>= 'a' &&a <= 'z') {
            answer += 'a'+ (a-'a'+n)%26;
        }
        else if(a >='A'&& a<='Z') {
            answer += 'A' + (a- 'A'+n)%26;
        }else{
         answer +=a;   
        }
    }
    return answer;
}