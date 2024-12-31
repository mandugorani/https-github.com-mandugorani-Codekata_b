#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int x=0;
    for(x;
        x< seoul.size();
       x++) {
        if (seoul[x] == "Kim") {
            break;
        }
    }
    return "김서방은 " + to_string(x) + "에 있다";
}