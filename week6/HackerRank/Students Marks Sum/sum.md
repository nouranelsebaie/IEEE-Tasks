You are given an array of integers, marks, denoting the marks scored by students in a class.
• The alternating elements marks0, marks2, marks3 and so on denote the marks of boys.
• Similarly, marks1, marks3, marks5, and so on denote the marks of girls.
The array name, marks, works as a pointer which stores the base address of that array.
In other words, marks contains the address where marks is stored in the memory.
For example, let marks = [3, 2, 5] and marks stores 0x7ff9575c05f. Then.
0x7fff9575c05f is the memory address of marks0.
marks_summation has the following parameters:
• int marks[number of students]: the marks for each student
• int number_of students: the size of marks!
• char gender: either 'g' or 'b'
Returns
• int: the sum of marks for boys if gender = 6, or of marks of girls if gender = g
Input Format
• The first line contains number _of_students, 
denoting the number of students in the class, hence the number of elements in marks.
• Each of the number_of _students subsequent lines contains marks;.
• The next line contains gender.
Constraints
• 1 < number _of_students < 10^3
• 1 < marks, ≤ 10^3 (where 0 < i < number_of_-students)
• gender = g or b
Sample Input :
3
3
2
5
b
Sample Output :
8
Explanation:
marks = [3, 2, 5] and gender = b.
So, marks0 + marks2 = 3 + 5 = 8
