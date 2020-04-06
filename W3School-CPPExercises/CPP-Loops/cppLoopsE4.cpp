/**
 *	from C++ Loops: Exercise 4 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_while_loop4 )
 *
 *	question:
 *	Stop the loop if i is 5.
 *
 *	for (int i = 0; i < 10; i++) {
 *		if (i == 5) {
 *			_____;
 *		}
 *		cout << i << "\n";
 *	}
 *
 */
for (int i = 0; i < 10; i++) {
	if (i == 5) {
		break;
	}
	cout << i << "\n";
}