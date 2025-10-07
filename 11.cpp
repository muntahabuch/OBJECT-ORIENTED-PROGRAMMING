#include <iostream>
using namespace std;


int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


void reverseString(char str[]) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


void concatenate(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';  
}


void substring(char str[], int start, int end, char sub[]) {
    int j = 0;
    for (int i = start; i <= end && str[i] != '\0'; i++) {
        sub[j++] = str[i];
    }
    sub[j] = '\0';
}


int frequency(char str[], char ch) {
    int count = 0, i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }
    return count;
}


int main() {
    char str1[100], str2[100], result[200], sub[100], ch;
    int start, end;

    cout << "Enter a string: ";
    cin >> str1;

    
    cout << "Length of string: " << stringLength(str1) << endl;

    
    reverseString(str1);
    cout << "Reversed string: " << str1 << endl;

    
    cout << "Enter another string to concatenate: ";
    cin >> str2;
    concatenate(str1, str2, result);
    cout << "Concatenated string: " << result << endl;

    
    cout << "Enter start and end index for substring: ";
    cin >> start >> end;
    substring(result, start, end, sub);
    cout << "Substring: " << sub << endl;

    
    cout << "Enter a character to find its frequency: ";
    cin >> ch;
    cout << "Frequency of '" << ch << "' = " << frequency(result, ch) << endl;

    return 0;
}

