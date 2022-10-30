// Чертоусова Ветвления
//

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= c && a >= b) cout << a;
	if (b >= a && b >= c) cout << b;
	if (c >= a && c >= b) cout << c;
}