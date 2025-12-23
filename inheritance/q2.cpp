#include <iostream>
#include <cstring>
using namespace std;

const int SZ = 80;

// ---------- Base Class ----------
class String
{
protected:
    char str[SZ];

public:
    String(const char s[] = "")
    {
        strcpy(str, s);
    }

    void display() const
    {
        cout << str << endl;
    }
};

// ---------- Derived Class ----------
class Pstring : public String
{
public:
    Pstring(const char s[])
    {
        if(strlen(s) < SZ)
            strcpy(str, s);
        else
        {
            strncpy(str, s, SZ - 1);
            str[SZ - 1] = '\0';
        }
    }
};

// ---------- Main ----------
int main()
{
    Pstring s1("Short string");
    Pstring s2("This string is very long and will be safely truncated to avoid buffer overflow problems");

    s1.display();
    s2.display();

    return 0;
}
