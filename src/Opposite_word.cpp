#include "Opposite.hpp"




void Opposite(){
	string str = "appa";
	
	int d = 0;

	for (int i = 0; i < str.length(); i++){
		if (str[i] == str[str.length() - 1 - i]){
			d++;
		}
	}
	if (d == str.length())
		cout << "true";
	else
		cout << "false";

		cout << endl;
}


	

