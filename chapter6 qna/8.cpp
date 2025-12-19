
#include <iostream>
using namespace std;

class Serial
{
private:
    static int count;
    int serialNo;

public:
    Serial()
    {
        count++;
        serialNo = count;
    }

    void showSerial() const
    {
        cout << "I am object number " << serialNo << endl;
    }
};

int main()
{
    Serial s1;
    Serial s2;
    Serial s3;

    s1.showSerial();
    s2.showSerial();
    s3.showSerial();

    return 0;
}
