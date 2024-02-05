#include <iostream>
using namespace std;

int main(){

	for (int i=1; i<100; i++) {

		/* gen test */
		string cmd = "echo " + to_string(i) + " | ./gen > test.in";
		system(cmd.c_str());

		system("./brut < test.in > brut.out");
		system("./wzor < test.in > wzor.out");

		if (system("diff brut.out wzor.out") > 0) {
			cout << "WRONG ON " << i << '\n';
			return 0;
		}
		else cout << "OK " << i << '\n';

	}

}
