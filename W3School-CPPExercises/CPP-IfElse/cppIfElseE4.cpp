/**
 *	from C++ If...Else: Exercise 4 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_conditions4 )
 *
 *	question:
 *	Print "1" if x is equal to y, print "2" if x is greater than y, otherwise print "3".
 *
 *	int x = 50;
 *	int y = 50;
 *	__ (x __ y) {
 *		cout << "1";
 *	} _______ (x _ y) {
 *		cout << "2";
 *	} ____ {
 *		cout << "3";
 *	}
 *
 */
int x = 50;
int y = 50;
if (x == y) {
	cout << "1";
} else if (x > y) {
	cout << "2";
} else {
	cout << "3";
}