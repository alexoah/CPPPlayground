/**
 *	from C++ User Input: Exercise 2 ( https://www.w3schools.com/cpp/exercise.asp?filename=exercise_user_input2 )
 *
 *	question:
 *	Fill in the missing parts to print the sum of two numbers (which is put in by the user):
 *
 *	int x, y;
 *	int sum;
 *	cout << "Type a number: ";
 *	___ >> _;
 *	cout << "Type another number: ";
 *	___ >> _;
 *	sum = x + y;
 *	cout << "Sum is: " << ___;
 *
 */
int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;