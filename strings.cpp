#include <cstring>
#include <iostream>
using namespace std;

char* CopyString(const char* input) {
    size_t len = 0;
    while (input[len]) ++len;
    char* copy = new char[len + 1];
    memcpy(copy, input, len + 1);
    return copy;
}
char* ConcatinateStrings(const char* first, const char* second) {
    size_t lenFirst = 0, lenSecond = 0;
    while(first[lenFirst]) ++lenFirst;
    while(second[lenSecond]) ++lenSecond;
    char* output = new char[lena + lenb + 1];
    memcpy(output, first, lenFirst);
    memcpy(output + lenFirst, second, lenSecond + 1);
    return output;
}
