#include <string>
#include <vector>
using namespace std;

int dateToDays(string date) {

    int year = stoi(date.substr(0, 4)) - 2000;

    int month = stoi(date.substr(5, 2));

    int day = stoi(date.substr(8, 2));

    return year * 336 + (month - 1) * 28 + (day - 1);
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    vector<string> termTypes;
    vector<int> termMonths;

    for (int i = 0; i < (int)terms.size(); i++) {
        string t = terms[i];
        string type = "";
        string num  = "";
        int j = 0;
        while (j < (int)t.size() && t[j] != ' ') {
            type += t[j];
            j++;
        }
        j++;
        while (j < (int)t.size()) {
            num += t[j];
            j++;
        }
        termTypes.push_back(type);
        termMonths.push_back(stoi(num));
    }

    int todayDays = dateToDays(today);

    for (int i = 0; i < (int)privacies.size(); i++) {
        string p = privacies[i];
        string date = "";
        string type = "";
        int j = 0;
        while (j < (int)p.size() && p[j] != ' ') {
            date += p[j];
            j++;
        }
        j++;
        while (j < (int)p.size()) {
            type += p[j];
            j++;
        }
        int collectedDays = dateToDays(date);


        int months = 0;
        for (int k = 0; k < (int)termTypes.size(); k++) {
            if (termTypes[k] == type) {
                months = termMonths[k];
                break;
            }
        }

        int expireDays = collectedDays + months * 28 - 1;
        if (expireDays < todayDays) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}