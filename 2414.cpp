#include <iostream>
using namespace std;
int main()
{
	int maxi=0, op;
	while(cin >> op and op != 0){
		maxi = max(maxi,op);
	}
	cout << maxi;
	return 0;
}
