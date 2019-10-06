#include "iostream"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << " Введите А " << endl;
	float r, a, b, c, xp, k, n, xk, d, ot1,ot2,ot3;
	cin >> a;
	cout << " Введите В" << endl;
	cin >> b;
	cout << " Введите С" << endl;
	cin >> c;
	cout << " Введите Хнач" << endl;
	cin >> xp;
	cout << " Введите Хкон" << endl;
	cin >> xk;
	cout << " Введите D " << endl;
	cin >> d;
	r = xp;
	ot1 = 0;
	ot2 = 0;
	ot3 = 0;
	while (r <= xk) {
		if (r < xk && b != 0) {
			ot1 = a * pow(r, 2) * b;
		}
		else {
			if (b = 0 && r > 0) {
				k = r - a;
				n = r - b;
				ot2 = k / n;
			}
			else {
				ot3 = r / c;
				return 0;
			}
		}
		if (ot1=0){
			if (ot2 = 0) {
				cout << "0||" << "0||" << ot3 << "||" << endl;
			}
			else { cout << "0||" << ot2 << "||" << ot3 << "||" << endl; }
		}
		if (ot2 = 0) {
			if (ot1 = 0) {
				cout << "0||" << "0||" << ot3 << "||" << endl;
			}
			else { cout << ot1 << "||" << "0||" << ot3 << "||" << endl; }
		}
		if (ot3 = 0) {
			if (ot2 = 0) {
				cout  <<ot1 << "||"<< "0||" << "0||"  << endl;
			}
			else { cout << ot1 << "||" << ot2 << "||" << "0||" << endl; }
		}
		if (ot1 > 0 && ot2 > 0 && ot3 > 0) { cout << ot1 << "||" << ot2 << "||" << ot3 << "||" << endl; }
		if (ot1 < 0 && ot2 < 0 && ot3 < 0) { cout << ot1 << "||" << ot2 << "||" << ot3 << "||" << endl; }
		
		r = r + d * xp;
		cout << "---------" << endl;
	}
	return 0;
}