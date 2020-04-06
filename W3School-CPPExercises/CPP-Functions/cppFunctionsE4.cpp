/**
 *	from C++ Functions: Exercise 4 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_functions4 )
 *
 *	question:
 *	Insert the missing part to print the number 8 in main, by using a specific keyword inside myFunction:
 *
 *	int myFunction(int x) {
 *		______ 5 + x;
 *	}
 *
 *	int main() {
 *		cout << myFunction(3);
 *		return 0;
 *	}
 *
 */
int myFunction(int x) {
	return 5 + x;
}

int main() {
	cout << myFunction(3);
	return 0;
}