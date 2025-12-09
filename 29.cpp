#include <iostream>
using namespace std;


class MediaFile {
public:
    virtual void play() = 0;   
};


class Audio : public MediaFile {
public:
    void play() {
        cout << "Playing audio file..." << endl;
    }
};


class Video : public MediaFile {
public:
    void play() {
        cout << "Playing video file..." << endl;
    }
};


class Image : public MediaFile {
public:
    void play() {
        cout << "Displaying image file..." << endl;
    }
};

int main() {
    MediaFile* media[3];

    media[0] = new Audio();
    media[1] = new Video();
    media[2] = new Image();

    cout << "Mixed Media Player Output:\n";

    for (int i = 0; i < 3; i++) {
        media[i]->play();
    }

    return 0;
}
