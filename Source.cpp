#include <iostream>
using std::endl;
using std::cout;
using std::cin;
int main()
{
    double q;
    double w;
    double e;
    double r;
    cin >> q;
    cin >> w;
    cin >> e;
    r = (1 / q + 1 / w + 1 / e);
    cout << 1 / r;
}