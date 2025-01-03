#include <string>
using namespace std;

string solution(string s) {
    int l= s.length();
    if (l%2== 0){
        return s.substr((l/2)-1, 2);
    }else{
        return string(1,s[l/2]);
    }
}

