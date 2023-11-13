#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "===== Todo List options =====" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. Show Tasks" <<endl;
    cout << "3. Delete Task" << endl;
    cout << "4. Mark Task as Completed" <<endl;
    
}

// Function to add a task to the todo list
void addTask(vector<string>& todoList) {
    cout << "Enter the task: ";
    string task;
    getline(cin >> ws, task);
    todoList.push_back(task);
    cout << "Task added successfully!" <<endl;
}

// Function to show all tasks in the todo list
void showTasks(const vector<string>& todoList) {
	
    cout << "===== Tasks=====" <<endl;
    
    for (size_t i = 0; i < todoList.size(); ++i) 
	{
        cout << i + 1 << ". " << todoList[i] <<endl;
    }
}

// Function to delete a task from the todo list
void deleteTask(vector<string>& todoList) {
    showTasks(todoList); 
    if (!todoList.empty()) {
        cout << "Enter the task number to delete: ";
        size_t taskNumber;
        cin >> taskNumber;

        if (taskNumber > 0 && taskNumber <= todoList.size()) {
            todoList.erase(todoList.begin() + taskNumber - 1);
            cout << "Task deleted successfully!" <<endl;
        } else {
            cout << "Invalid task number." <<endl;
        }
    } else {
        cout << "No tasks to delete." <<endl;
    }
}

// Function to mark a task as completed
void markTaskCompleted(vector<string>& todoList) {
    showTasks(todoList); 
    if (!todoList.empty()) {
        cout << "Enter the task number to mark as completed: ";
        size_t taskNumber;
        cin >> taskNumber;

        
		
		if (taskNumber > 0 && taskNumber <= todoList.size()) {
            cout << "Task '" << todoList[taskNumber - 1] << "' marked as completed!" << endl;
            
        } 
		else 
		{
            cout << "Invalid task number." <<endl;
        }
    } 
	else 
	{
        cout << "No tasks to mark as completed." << endl;
    }
}

int main() {
    vector<string> todoList; 

    int choice;
    do {
        displayMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(todoList);
                break;
            case 2:
                showTasks(todoList);
                break;
            case 3:
                deleteTask(todoList);
                break;
            case 4:
                markTaskCompleted(todoList);
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." <<endl;
        }
    } while (choice != 4);

    return 0;
}

