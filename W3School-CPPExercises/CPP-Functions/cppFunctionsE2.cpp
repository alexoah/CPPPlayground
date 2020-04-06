/**
 *	from C++ Functions: Exercise 2 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_functions2 )
 *
 *	question:
 *	Insert the missing part to call myFunction two times.
 *
 *	void myFunction() {
 *		cout << "I just got executed!";
 *	}
 *
 *	int main() {
 *		____________;
 *		____________;
 *		return 0;
 *	}
 *
 */
void myFunction() {
	cout << "I just got executed!";
}

int main() {
	myFunction();
	myFunction();
	return 0;
}