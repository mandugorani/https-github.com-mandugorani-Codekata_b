#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int Monthday[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int totalDays = 0;
    for (int i = 0; i < a - 1; ++i) {
        totalDays += Monthday[i];
    }
    totalDays += (b - 1);
    
    return week[totalDays % 7];
}