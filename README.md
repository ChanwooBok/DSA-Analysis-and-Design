# DSA-Analysis-and-Design


🧩 What was the problem you were solving in the projects for this course?
The problem I was solving was to build a course advising system that could load course data from a file, organize it efficiently, and provide useful features like searching for a course by its ID and printing a list of all courses in alphanumeric order. The goal was to simulate a tool that could help students or advisors manage course selections and prerequisites clearly and effectively.

🧠How did you approach the problem? Consider why data structures are important to understand.
I approached the problem by first analyzing which data structure would be most suitable for the specific operations the system needed to perform. I considered vectors for simplicity, hash tables for quick lookups, and binary search trees for ordered traversal. Understanding data structures was essential because each one comes with trade-offs in terms of speed, memory usage, and how easily data can be sorted or searched. I ultimately selected the structure that best matched the functionality required for the project.

🚧 How did you overcome any roadblocks you encountered while going through the activities or project?
One roadblock I faced was validating course prerequisites when the referenced course might not have been processed yet. To solve this, I used a two-pass file reading approach: the first pass collected all course codes, and the second pass validated and built course objects using that list. This ensured that all prerequisites referenced valid courses and allowed me to catch errors early in the program.

🔧How has your work on this project expanded your approach to designing software and developing programs?
This project helped me understand the importance of designing before coding. Instead of jumping into implementation, I spent more time planning with pseudocode and thinking through edge cases. It taught me how to think modularly, break down a problem into manageable parts, and make sure that the data structures chosen align with the functional requirements of the application.

🧹How has your work on this project evolved the way you write programs that are maintainable, readable, and adaptable?
This project encouraged me to write cleaner, more maintainable code by focusing on good naming conventions, modular functions, and consistent formatting. I made sure each function had a single purpose, which not only made the code easier to read but also easier to debug or extend in the future. I now consider readability and adaptability just as important as correctness and performance.

