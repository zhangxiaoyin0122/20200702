//#include <iostream>
//#include <vector>
//using namespace std;

//int main() {
//	vector<int> v;
//	v.reserve(10);
//	for (int i = 0; i < 10; ++i) {
//		v.push_back(i);
//	}
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//int main() {
//	vector<int> v;
//	size_t num;
//	cin >> num;
//	v.reserve(num);
//	for (size_t i = 0; i < num; i++) {
//		int k;
//		cin >> k;
//		v.push_back(k);
//	}
//	size_t i = 0;
//	int count = 0;
//	while (i < num) {
//		if (v[i] > v[i + 1]) {
//			while (v[i] >= v[i + 1]) {
//				i++;
//			}
//			count++;
//			++i;
//		}
//		else if (v[i] < v[i + 1]) {
//			while (v[i] <= v[i + 1]) {
//				i++;
//			}
//			count++;
//			++i;
//		}
//		else
//			++i;
//	}
//	cout << count << endl;
//	return 0;
//}

//int main() {
//	vector<int> v;
//	size_t num;
//	cin >> num;
//	v.resize(num + 1);
//	for (int i = 0; i < num; i++) {
//		int k;
//		cin >> v[i];
//	}
//	int i = 0;
//	int count = 0;
//	while (i < num) {
//		if (v[i] > v[i + 1]) {
//			while (i < num && v[i] >= v[i + 1]) {
//				i++;
//			}
//			count++;
//			i++;
//		}
//		else if (i < num && v[i] < v[i + 1]) {
//			while (v[i] <= v[i + 1]) {
//				i++;
//			}
//			count++;
//			i++;
//		}
//		else {
//			i++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}

#include <stdio.h>
#pragma pack(2)
struct s {
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
struct s1 {
	char _a : 3;
	char _b : 4;
	char _c : 5;
	char _d : 4;
};
struct s3 {
	char a;
	int b;
	char c;
};
int main() {
	printf("%d", sizeof(s3));
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	string str = "0123456789ABCDEF";
	int M, N;
	cin >> M >> N;
	int flag = 1;
	if (M < 0) {
		M = -M;
		flag = 0;
	}
	string ret = "";
	while (M) {
		int key = M % N;
		ret = str[key] + ret;
		M /= N;
	}
	if (flag == 1) {
		cout << ret << endl;
	}
	else
		cout << "-" << ret << endl;
	return 0;
}
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	while (cin >> n) {
		v.push_back(n);
	}
	int A = (v[0] + v[2]) / 2;
	int B = (v[1] + v[3]) / 2;
	int C = (v[3] - v[1]) / 2;
	if (A - B == v[0] && B - C == v[1] && A + B == v[2] && B + C == v[3])
		cout << A << " " << B << " " << C << endl;
	else
		cout << "No" << endl;
	return 0;
}



