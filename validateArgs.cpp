#include <cstring>
#include <cctype>

using namespace std;

/* Check if a string contains only digits (0-9) */
bool validate (char *a) {
    unsigned int i;
    for (i=0; i<strlen (a); i++) {
        if (!isdigit (a[i])) { 
            return false;
        }
    }
    return true;
}
