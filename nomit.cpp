#include <iostream>  // Include the input/output stream library
#include <vector>    // Include the vector library for dynamic arrays
#include <string>    // Include the string library for string manipulation

// Using the standard namespace for easier access to standard library functions
using namespace std;  

// Define a class named ToDoList
class ToDoList {  
private:

	// A private member variable to store tasks in a dynamic array
    vector<string> tasks;  

public:

	// Define a member function to add a task to the list
    void addTask(const string& task) {  
		// Add the task to the end of the vector
        tasks.push_back(task);  
		// Print a message indicating the task has been added
        cout << "Task added: " << task << endl;  
    }

    // Define a member function to remove a task from the list
    void removeTask(int index) {  
        // Check if the index is valid
		if (index >= 0 && index < tasks.size()) {  
			// Print the task being removed
            cout << "Task removed: " << tasks[index] << endl;  
			 // Remove the task at the specified index
            tasks.erase(tasks.begin() + index); 
        } else {
			 // Print an error message if the index is invalid
            cout << "Invalid index" << endl; 
        }
    }

    // Define a member function to display all tasks in the list
    void displayTasks() { 
		// Check if the list is empty
        if (tasks.empty()) { 
			// Print a message if the list is empty
            cout << "No tasks in the list." << endl;  
        } else {
			// Print a header for the list of tasks
            cout << "Tasks:" << endl;  
			// Iterate over each task in the list
            for (size_t i = 0; i < tasks.size(); ++i) {  
				// Print the task number and task description
                cout << i + 1 << ". " << tasks[i] << endl;  
            }
        }
    }
};

// The main function where execution starts
int main() {  
    ToDoList myList;  // Create an instance of the ToDoList class
    int choice;  // Declare a variable to store the user's choice
    string task;  // Declare a variable to store the task entered by the user
    
	// Start a do-while loop to repeatedly display 
	// the menu until the user chooses to quit
    do {  
        cout << "Choose an option:" << endl;  // Print the menu options
        cout << "1. Add a task" << endl;
        cout << "2. Remove a task" << endl;
        cout << "3. Display tasks" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;  // Read the user's choice
        
        switch (choice) {  // Start a switch statement based on the user's choice
            case 1:  // If the user chooses option 1 (add a task)
                cout << "Enter task: ";
                cin.ignore(); // to consume the newline character left in the buffer
                getline(cin, task);  // Read the task from the user
                myList.addTask(task);  // Add the task to the ToDoList
                break;  // Exit the switch statement
            case 2:  // If the user chooses option 2 (remove a task)
				// Declare a variable to store the index of the task to be removed
                int index;  
                cout << "Enter index of task to remove: ";
                cin >> index;  // Read the index from the user
				// Remove the task at the specified index
                myList.removeTask(index - 1);  
                break;  // Exit the switch statement
            case 3:  // If the user chooses option 3 (display tasks)
                myList.displayTasks();  // Display all tasks in the ToDoList
                break;  // Exit the switch statement
            case 4:  // If the user chooses option 4 (quit)
				// Print a message indicating program termination
                cout << "Exiting..." << endl;  
                break;  // Exit the switch statement
            default:  // If the user enters an invalid choice
				// Print an error message
                cout << "Invalid choice. Please try again." << endl;  
        }
		cout<< endl;
    } while (choice != 4);  // Repeat the loop until the user chooses to quit

    return 0;  // Return 0 to indicate successful program execution
}


