

# To-Do List Application (CodeSoft C++ Internship - Task 4)

## Description
This is a simple command-line To-Do List application implemented in C++ as part of the CodeSoft C++ Internship (Task 4). The program allows users to add, view, mark, and remove tasks efficiently.

## Features
- Add new tasks to the list.
- View all tasks with their completion status.
- Mark tasks as done.
- Remove tasks from the list.
- Interactive menu-driven interface.

## How to Run
### Prerequisites
- A C++ compiler (G++ or any other standard compiler)
- A terminal or command prompt

### Compilation and Execution
1. Clone this repository or copy the `CodeSoft_To_Do_List.cpp` file.
2. Open a terminal or command prompt and navigate to the project directory.
3. Compile the program using:
   ```sh
   g++ -o CodeSoft_To_Do_List CodeSoft_To_Do_List.cpp
   ```
4. Run the executable:
   ```sh
   ./CodeSoft_To_Do_List
   ```

## How to Use
1. The program displays a menu with options:
   - Add a new task.
   - View existing tasks.
   - Mark a task as completed.
   - Remove a task.
   - Exit the program.
2. Enter the corresponding number for the desired action.
3. Follow the prompts to complete the action.

## Sample Output
```
********************************************************
*************** TO-DO LIST BY ABHISHEK *****************
********************************************************

1. Add
2. View
3. Mark Done
4. Remove
5. Exit
Enter the Number: 
```

## Code Structure
- `add()`: Allows users to add a new task.
- `view()`: Displays all tasks with their status (Pending/Done).
- `mark()`: Marks a selected task as completed.
- `remove()`: Removes a selected task from the list.
- `main()`: Handles user interaction and program execution loop.

## Future Enhancements
- Save tasks to a file for persistence.
- Implement a priority-based task system.
- Add a graphical user interface (GUI).
- Improve input validation for better user experience.

## License
This project is open-source and available for use under the MIT License.

## Contact
For any questions or contributions, feel free to reach out or create an issue in the repository.

Happy Coding! ✅
