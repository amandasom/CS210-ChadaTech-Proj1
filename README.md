# CS210-ChadaTech-Proj1
CS210 course project: Dual clock program written in C++
Project Summary
This project centered on building a dual-clock program in C++ that displays both 12-hour and 24-hour time formats. The application allows users to increment hours, minutes, and seconds through a simple menu interface. The goal was to design a functional, readable, and modular program that demonstrates core programming concepts such as time formatting, arithmetic logic, and structured program design.

What I Did Well
I executed this project with strong attention to clarity and organization. Separating the logic into header and implementation files (ClockFunctions.h and ClockFunctions.cpp) reflects solid understanding of modular design. My main loop is straightforward and easy to follow, and the function names and comments make the program accessible to anyone reviewing the code.

Where I Could Enhance My Code
There are a few areas where the program could be improved to strengthen efficiency and reliability:

1. Correcting formatting issues: The 12?hour formatting function prints minutes twice, which is a small but important detail to refine.

2. Adding input validation: The program assumes valid numeric input. Adding validation would make the application more secure and user?friendly.

3. Reducing repetitive logic: Leading?zero formatting appears multiple times and could be refactored into a helper function, improving readability and reducing duplication.

These enhancements would make the program more robust and aligned with industry best practices.

Challenges and How I Overcame Them
The most challenging part of this project was ensuring the time rolled over correctly when seconds or minutes reached 60. Breaking the logic into small, focused functions (addOneHour, addOneMinute, addOneSecond) helped simplify the problem and made debugging easier. I relied on zyBooks, course examples, and hands-on testing in Visual Studio to verify each increment behaved as expected. 

Transferable Skills
This project strengthened several skills that will carry into future coursework and professional development, including:

Modular program design

Header/implementation file organization

Time formatting and arithmetic logic

Clear commenting and documentation

Building user-driven loops and menus

Understanding how small functions work together to create a complete program

These skills apply directly to larger C++ projects and translate well to other languages such as Java and Python.

Maintaining Readability, Adaptability, and Maintainability
I focused on writing code that is easy to understand and modify. This included using meaningful variable and function names, consistent formatting, and comments that clarify intent without cluttering the code. Separating functionality into dedicated functions and files also makes the program adaptable for future enhancements, such as real-time updates or expanded menu options.
