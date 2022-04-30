#include "Dyn_class.h"

Dyn_class::Dyn_class() {
	cout << "must implement Dynclass ctor" << endl;
	
}
bool Dyn_class::findMatch(string fName) {
	bool match = 0;
	map<string, vector<any>>::iterator itr;
	for (itr = storage.begin(); itr != storage.end(); ++itr)
	{
		if (itr->first == fName)
		{
			return true;
		}
	}

	return false;
}
void Dyn_class::remove_func() {
	cout << "must implement Dynclass remove_func" << endl;
	
	string fName = "";

	cout << " Enter function name: ";
	cin >> fName;
	cout << endl;




}

void Dyn_class::add_func() {

	vector<any> vec_temp;
	string arg_temp;
	string fName = "";
	int a;
	//cout << "must implement Dynclass add_func" << endl;

	cout << "Enter function name: ";
	cin >> fName;
	cout << endl;

	cout << "Enter the number of arguments: " << endl;
	cin >> a;
	cout << endl;

	cout << "Enter arguments: " << endl;
	for (int i = 0; i < a; i++)
	{
		cin >> arg_temp;
		vec_temp.push_back(arg_temp);
	}

	//store function in storage
	storage.insert({ fName,vec_temp });

}

void Dyn_class::use_func() {
	string fName = "";
	map<string, vector<any>>::iterator itr;
	cout << "must implement Dynclass use_func()" << endl;

	cout << "Enter function name: ";
	cin >> fName;
	cout << endl;

	//problem: not looking for item properly. doesnt sense if function is not in storage
	for (itr = storage.begin(); itr != storage.end(); ++itr) //goes into each element of storage
	{
		if (itr->first.find(fName) != string::npos) // if fName is found in storage
		{
			//for (any x : itr->second) // for every value stored in vector
			//{
			//	cout << x;
			//}

			// problem: how to print the vector of arguments
			for (int x = 0; x != itr->second.size(); x++)
			{
				//cout << itr->second;
			}
			cout << endl;
		}
		else if (itr == storage.end()) // if function is not in storage
		{
			cout << "function is not in storage" << endl;
		}
	}
}
