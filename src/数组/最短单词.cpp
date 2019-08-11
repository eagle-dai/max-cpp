#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int main() {
	char a[200];
	memset(a, '\0', sizeof(a));
	int i = 0, min = 201, count = 0, len = 0, begin_min = 0, begin = 0;

	while (true) {
		a[i] = getch();
		cout<<a[i];
		len++;
		if (a[i] != ' ' && a[i] != '.') {
			count++;
		}

//		cout << "\n" << count << " " << min<< " " << begin_min << "\n";
		if ((a[i] == ' ' || a[i] == '.') && count > 0) {
			if (count < min) {
				begin_min = begin;
			}
			if(count < min) {
				min = count;
			}
			count = 0;
		}
		if(a[i-1] == ' ' && a[i] != ' ' && i > 0) {
			begin = i;
		}
		if(a[i] == '.') {
			break;
		}
		i++;
	}
	cout<<"\n";

//    cout<<min<<" "<<begin<<" "<<begin_min<<"\n";
	for (i = begin_min; i < begin_min + min; i++) {
		cout<<a[i];
	}
	return 0;
}
