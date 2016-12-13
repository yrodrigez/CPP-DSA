// CPP-DSA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "node.cpp"
#include "collection.cpp"
#include <stdexcept>

using namespace std;

int main()
{
	try {
		Collection<int> collection = Collection<int>();
		collection.add(1);
		collection.add(2);
		collection.add(3);
		collection.add(4);
		collection.add(5);
		cout << collection.get(0);
	}
	catch (invalid_argument ex) {
		cout << ex.what();
	}

	system("pause");
	
	
	return 0;
}