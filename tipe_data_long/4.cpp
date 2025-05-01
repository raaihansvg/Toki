#include <iostream>
#include <string>
using namespace std;

int main (){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    string result = "";

    for(int i = 0; i < s.size(); i +=1){
        char c = s[i];

        if (c ==  'z'){
            c = 'a';
        }else {
            c = c + 1;
        }

        result += c;
    }

    for(int i  = 0; i <= s.size(); i ++){
        result[i] = result[i] - 'a' + 'A';
    }

    cout << result << endl;

}