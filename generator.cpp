#include <bits/stdc++.h>
#define pb push_back
using namespace std;


/* generator.cpp */
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int seed; 
	// seed dostaje generatorka od checkerki
	cin >> seed;

	mt19937_64 a; 

	a.seed(seed);
	cout << a() % 1000000 + 1 << ' ' << a() % 1000000 + 1;
}
	
