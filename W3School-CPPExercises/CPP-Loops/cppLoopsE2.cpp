/**
 *	from C++ Loops: Exercise 2 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_while_loop2 )
 *
 *	question:
 *	Use the do/while loop to print i as long as i is less than 6.
 *
 *	int i = 1;
 *	__ {
 *		cout << i << "\n";
 *		___;
 *	}
 *	_____ (i < 6);
 *
 */
int i = 1;
do {
	cout << i << "\n";
	i++;
}
while (i < 6);