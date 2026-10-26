# CS210-ChadaTech-Proj1
CS210 course project: Dual clock program written in C++

Project Summary:
This project centered on building a dual-clock program in C++ that displays both 12-hour and 24-hour time formats. The application allows users to increment hours, minutes, and seconds through a simple menu interface. The goal was to design a functional, readable, and modular program that demonstrates core programming concepts such as time formatting, arithmetic logic, and structured program design.

What I Did Well:
I executed this project with strong attention to clarity and organization. Separating the logic into header and implementation files (ClockFunctions.h and ClockFunctions.cpp) reflects solid understanding of modular design. My main loop is straightforward to follow, and the function names and comments make the program accessible to anyone reviewing the code.

Where I Could Enhance My Code:
There are a few areas where the program could be improved to strengthen efficiency and reliability:

1. Correcting formatting issues: The 12-hour formatting function prints minutes twice, which is a small but important detail to refine.

2. Adding input validation: The program assumes valid numeric input. Adding validation would make the application more secure and user-friendly.

3. Reducing repetitive logic: Leading-zero formatting appears multiple times and could be refactored into a helper function, improving readability and reducing duplication.

These enhancements would make the program more robust and aligned with industry best practices.

Challenges and How I Overcame Them:
The most challenging part of this project was ensuring the time rolled over correctly when seconds or minutes reached 60. Breaking the logic into small, focused functions (addOneHour, addOneMinute, addOneSecond) helped simplify the problem and made debugging easier. I relied on zyBooks, course examples, and hands-on testing in Visual Studio to verify each increment behaved as expected. 

Transferable Skills:
This project strengthened several skills that will carry into future coursework and professional development, including:

Modular program design

Header/implementation file organization

Time formatting and arithmetic logic

Clear commenting and documentation

Building user-driven loops and menus

Understanding how small functions work together to create a complete program

These skills apply directly to larger C++ projects and translate well to other languages such as Java and Python.

Maintaining Readability, Adaptability, and Maintainability:
I focused on writing code that is easy to understand and modify. This included using meaningful variable and function names, consistent formatting, and comments that clarify intent without cluttering the code. Separating functionality into dedicated functions and files also makes the program adaptable for future enhancements, such as real-time updates or expanded menu options.

# CS250 Agile and Scrum - Portfolio Reflection: Sprint Review and Retrospective

Interpreting User Needs and Implementing Them in a Program:

Understanding user needs begins with identifying what the user is trying to accomplish, and then translating those goals into clear, actionable requirements. Creating user stories helps break down those needs into small, manageable pieces of functionality. Each story includes acceptance criteria, which define exactly what "done" looks like. In the Software Development Lifecycle Course's "SNHU Travel" project, user stories allowed me to turn broad ideas, like showcasing travel destinations, into specific tasks such as updating code to add/remove images, descriptions, or adjusting UI elements. This structure guaranteed that every feature met the Product Owner's expectations and delivered consistent value to the user.

Approach to Developing Programs & Agile Process for Future Use:

My approach to developing programs involves an iterative process, where continuous learning, feedback, and improvement occur, and minor setbacks are an inherent part of refining the final product. Agile supports this mindset by encouraging small, manageable increments of work, frequent communication, and flexibility when requirements change. The Agile practices I plan to carry forward include writing clear user stories, organizing work into sprints, refining the backlog as new information emerges, and prioritizing collaboration throughout the development cycle. These processes helped me stay organized and adaptable throughout the SNHU Travel Project, and they will continue guiding how I build, refine, and deliver my work as I move forward.

Being a Good Team Member in Software Development:

In software development, being a good team member involves communicating clearly, collaborating openly, and supporting the team's shared goals. It also requires a willingness to ask questions, offer help, and adapt when priorities shift. In Agile environments, teamwork is essential because progress depends on transparency and trust. During the SNHU Travel Project, effective communication, such as clarifying acceptance criteria or discussing blockers during Daily Scrums, helped the team stay aligned and deliver consistent value. Good team members contribute not only code, but also clarity, reliability, and a positive working dynamic.

# CS255 DriverPass System Analysis and Design Portfolio
Project Overview
The DriverPass project involved designing a system for a client who wanted to help students prepare for their driving tests. DriverPass aimed to provide driving lessons, practice tests, scheduling, and access to learning materials to help students become more confident and prepared. The client needed a system that would allow students to register for accounts, purchase training packages, schedule driving appointments, and access online resources. The system also needed to support administrators and driving instructors in managing schedules, student information, and services.

What I Did Particularly Well
I believe I did particularly well at organizing the client's requirements and translating them into a structured system design. I focused on identifying the needs of different users, including students, instructors, and administrators, and considering how each group would interact with the system. I also worked to ensure that the system's functional requirements aligned with the client's goals. Breaking the project into business requirements and system design documents helped me understand how to move from identifying a problem to planning a solution.

What I Would Revise
If I could revise one part of my work, I would improve the level of detail in my system design document, particularly the explanations of how the system's components interact. I would include more detailed diagrams, clarify system workflows, and ensure each design decision connects directly to a specific business requirement. I would also review the documents for completeness and consistency to ensure that all requirements are addressed in the final design.

Interpreting and Implementing User Needs
I interpreted the user's needs by identifying the problems DriverPass wanted to solve and determining the features necessary to address them. For example, students needed a convenient way to schedule driving lessons, access practice tests, and manage their accounts. Instructors needed to view their schedules, while administrators needed tools to manage users and oversee the system. I used these needs to guide the proposed system's features and requirements.

Considering user needs is important because the purpose of a system is to solve real problems for the people who use it. If a system is designed without understanding its users, it may be difficult to navigate, lack important functionality, or fail to meet the client's expectations. User-centered design helps ensure that the final product is useful, efficient, accessible, and aligned with business goals.

My Approach to Software Design
My approach to software design begins with understanding the problem, identifying stakeholders, and gathering requirements. I then organize the requirements into functional and nonfunctional categories and use tools such as use case diagrams, activity diagrams, and other system models to visualize how the system should work. After creating the models, I review them against the original requirements to identify gaps and inconsistencies before finalizing the design.

In future projects, I would continue using requirements analysis, visual modeling, and stakeholder-focused design. I would also prioritize traceability by connecting each requirement to a specific system feature or design element. Reviewing assumptions, considering security and usability early, and seeking feedback throughout the design process would help me create more complete and effective system designs.

Portfolio Documents
This repository includes the following project artifacts:

Business Requirements Document: Documents the client's business needs, objectives, and system requirements for the DriverPass project.
System Design Document: Describes the proposed system architecture, functionality, and design models used to address the client's requirements.
README.md: Provides an overview of the project and reflects on my system analysis and design process.

These documents demonstrate my ability to analyze a client's needs, document business requirements, and develop a system design that supports those requirements.
