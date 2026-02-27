#include <iostream>
#include <cmath>
using namespace std;
struct point {
    int x;
    int y;
};
int main() {
    point sp, ep;
    int t1, t2;
    float length;
    char temp;
    cout<<"Enter the start point coordinates: "<<endl; // (0,0)
    cin>>temp>>sp.x>>temp>>sp.y>>temp;
    cout<<"Enter the end point coordinates: "<<endl; // (0,0)
    cin>>temp>>ep.x>>temp>>ep.y>>temp;
     t1 = (sp.x - ep.x) * (sp.x - ep.x);
    t2 = (sp.y - ep.y) * (sp.y - ep.y);
    length = sqrt(t1+t2);
    cout<<"Length is: "<<length<<endl;
    return 0;

}
