/**
 *	from C++ Functions: Exercise 3 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_functions3 )
 *
 *	question:
 *	Add a fname parameter of type string to myFunction.
 *
 *	void myFunction(______ _____) {
 *		cout << fname << " Doe";
 *	}
 *
 *	int main() {
 *		myFunction("John");
 *		return 0;
 *	}
 *
 */
void myFunction(string fname) {
	cout << fname << " Doe";
}

int main() {
	myFunction("John");
	return 0;
}