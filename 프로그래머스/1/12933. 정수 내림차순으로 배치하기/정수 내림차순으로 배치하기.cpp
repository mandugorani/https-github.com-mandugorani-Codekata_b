#include <string>
#include <vector>
using namespace std;

long long solution(long long n) {
    string str = to_string(n);
    vector<int> arr;
    for (char ch : str) {
        arr.push_back(ch - '0');
    }
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        for (int n = i + 1; n < size; n++) {
            if (arr[i] < arr[n]) {
                int temp = arr[i];
                arr[i] = arr[n];
                arr[n] = temp;
            }
        }
    }
    long long answer = 0;
    for (int digit:arr) {
        answer = answer*10 + digit;
    }
    
    return answer;
}
