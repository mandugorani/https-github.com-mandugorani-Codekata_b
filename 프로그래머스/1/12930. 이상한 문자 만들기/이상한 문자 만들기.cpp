#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int position = 0;
    for (char c:s){
        if (c==' ') {
            answer +=' ';
            position = 0;
        }else{
              if (position % 2 == 0) {
                answer += toupper(c);
            } else {
                answer += tolower(c);
            }
            position++;
        }
    }
        return answer;
}
