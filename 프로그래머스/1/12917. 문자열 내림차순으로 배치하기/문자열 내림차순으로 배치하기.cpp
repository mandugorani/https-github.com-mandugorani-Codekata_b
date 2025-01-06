#include <string>
#include <algorithm>
using namespace std;

string solution(string s) {
    unordered_map<char,int> char_map;
    char_map['A'] = 1;
    char_map['B'] = 2;
    char_map['C'] = 3;
    char_map['D'] = 4;
    char_map['E'] = 5;
    char_map['F'] = 6;
    char_map['G'] = 7;
    char_map['H'] = 8;
    char_map['I'] = 9;
    char_map['J'] = 10;
    char_map['K'] = 11;
    char_map['L'] = 12;
    char_map['M'] = 13;
    char_map['N'] = 14;
    char_map['O'] = 15;
    char_map['P'] = 16;
    char_map['Q'] = 17;
    char_map['R'] = 18;
    char_map['S'] = 19;
    char_map['T'] = 20;
    char_map['U'] = 21;
    char_map['V'] = 22;
    char_map['W'] = 23;
    char_map['X'] = 24;
    char_map['Y'] = 25;
    char_map['Z'] = 26;
    char_map['a'] = 27;
    char_map['b'] = 28;
    char_map['c'] = 29;
    char_map['d'] = 30;
    char_map['e'] = 31;
    char_map['f'] = 32;
    char_map['g'] = 33;
    char_map['h'] = 34;
    char_map['i'] = 35;
    char_map['j'] = 36;
    char_map['k'] = 37;
    char_map['l'] = 38;
    char_map['m'] = 39;
    char_map['n'] = 40;
    char_map['o'] = 41;
    char_map['p'] = 42;
    char_map['q'] = 43;
    char_map['r'] = 44;
    char_map['s'] = 45;
    char_map['t'] = 46;
    char_map['u'] = 47;
    char_map['v'] = 48;
    char_map['w'] = 49;
    char_map['x'] = 50;
    char_map['y'] = 51;
    char_map['z'] = 52;
    
    sort(s.begin(), s.end(), [&](char a, char b) -> bool {
        int valA = char_map[a];
        int valB = char_map[b];
        
        if (valA != valB) {
            return valA > valB;
        }
    });
    return s;
}