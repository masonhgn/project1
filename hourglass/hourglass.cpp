#include "hourglass.h"
using namespace std;
Hourglass::Hourglass(int size, char bc, char fc) {
    SIZE = size;
    BORDER_CHAR = bc;
    FILL_CHAR = fc;

    if (SIZE < 1) SIZE = 1;
    if (SIZE > 39) SIZE = 39;
}

int Hourglass::GetSize() const {
    return SIZE;
}

int Hourglass::Perimeter() const {
    return SIZE * 3;
}

void Hourglass::SetBorder(char c) {
    BORDER_CHAR = c;
}

void Hourglass::SetFill(char c) {
    FILL_CHAR = c;
}


void Hourglass::Summary() const {

}

void Hourglass::Grow() {
    if (SIZE < 39) SIZE += 1;
    //!!!!!!ASK
}
void Hourglass::Shrink() {
    if (SIZE > 1) SIZE -= 1;
    //!!!!!ASK
}

void Hourglass::Draw() const {

    ///////////////    top part
    for (int i = SIZE; i > 0; i--) {
        //each line

        for (int a = 0; a < SIZE - i; a++) cout << " ";

        cout << char(BORDER_CHAR) << " ";

        for (int x = 0; x<i - 2;x++) {
            if (i == SIZE) {
                cout << char(BORDER_CHAR) << " ";
            } else {
                cout << char(FILL_CHAR) << " ";
            }
        }

        if (i != 1) cout << char(BORDER_CHAR) << endl;
    }
    cout << "\n";

    ///////bottom part
    for (int a = 0; a < SIZE - 1; a++) {
        /////lines
        for (int x = SIZE - a - 2; x > 0; x--) cout << " ";
        cout << char(BORDER_CHAR) << " ";

        for (int b = 0; b<a; b++) {
            if (a == SIZE - 2) {
                cout << char(BORDER_CHAR) << " ";
            }
            else {
                cout << char(FILL_CHAR) << " ";
            }

        }
        cout << char(BORDER_CHAR) << endl;
    }


}
