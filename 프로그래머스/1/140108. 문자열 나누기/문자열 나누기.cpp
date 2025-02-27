#include <string>
using namespace std;

int solution(string s) {
    int count = 0;
    int index = 0;

    while (index < s.length()) {
        char x = s[index];
        int x_count = 0;
        int other_count = 0;
        int i = index;

        for (; i < s.length(); i++) {
            if (s[i] == x) {
                x_count++;
            } else {
                other_count++;
            }

            if (x_count == other_count) {
                break;
            }
        }
        count++;

        index = i + 1;
    }

    return count;
}