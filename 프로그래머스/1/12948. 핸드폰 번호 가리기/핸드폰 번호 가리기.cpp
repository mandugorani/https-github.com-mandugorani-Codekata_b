#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int length= phone_number.length();
    
    string answer(length-4, '*');
    answer += phone_number.substr(length-4);
    return answer;
}