#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char x;
    int nwords = 0, nchars = 0;
    cout<<"Enter the sentence:"<<endl;
    while (cin.get(x) && x!= '\n') {
        if (x == ' ')
            nwords++;
        else
            nchars++;
    }
    cout<<"No. of words: "<<nwords<<endl;
    cout<<"No. of characters: "<<nchars<<endl;
    return 0;

}
