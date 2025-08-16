// here the same question has been optimised . 
#include <string>
using namespace std;
#include<cctype>

bool password(const std::string& pwd)
{
    bool isUpperPresent = false;
    bool isLowerPresent = false;
    bool isDigitPresent = false;
    string str = pwd;
    int n = str.size();

    for (int x : str) { // for each loop has used.
        if (x >= 65 && x <= 90 && !isUpperPresent) { // if uppercase letter has already occured then it wont check the condition again.
            isUpperPresent = true;
        }
        else if (x >= 97 && x <= 122 && !isLowerPresent) {
            isLowerPresent = true;
        }
        else if (isdigit(x) && !isDigitPresent) {
            isDigitPresent = true;
        }

        if (isUpperPresent && isLowerPresent && isDigitPresent) { // if all the 3 variables have become true then it exits from the loop .
            break;
        }
    }

    if (isUpperPresent && isLowerPresent && isDigitPresent && n >= 8) {
        return true;
    }
    else {
        return false;
    }
}
