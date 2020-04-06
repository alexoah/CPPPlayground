/**
 *	from C++ Switch: Exercise 2 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_switch2 )
 *
 *	question:
 *	Complete the switch statement, and add the correct keyword at the end to specify some code to run if there is no case match in the switch statement.
 *
 *	int day = 4;
 *	switch (___) {
 *		____ 1:
 *			cout << "Saturday";
 *			break;
 *		____ 2:
 *			cout << "Sunday";
 *			_____;
 *		_______:
 *			cout << "Weekend";
 *	}
 *
 */
int day = 4;
switch (day) {
	case 1:
		cout << "Saturday";
		break;
	case 2:
		cout << "Sunday";
		break;
	default:
		cout << "Weekend";
}