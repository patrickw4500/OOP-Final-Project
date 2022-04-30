#pragma once
#include"preCompiled.h"



class Dyn_class {
public: 
	Dyn_class(); 
	void remove_func(); 
	void add_func(); 
	void use_func();
	bool findMatch(string);

private:
	// DATA STRUCTURE
	////////////////////JOHN's proposal ///////////////////
	// map < *function name*, arguments
	map< string, vector<any> > storage; 
	
	
	


};
