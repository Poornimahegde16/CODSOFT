#include <iostream>
#include <vector>

using namespace std;

struct Task {
    string name;
    bool completed;
};

vector<Task> tasks;

void addTask(const string& taskName) {
    Task task;
    task.name = taskName;
    task.completed = false;
    tasks.push_back(task);
    cout << "Task added: " << taskName << endl;
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks found." << endl;
    } else {
        cout << "Your tasks:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i].name << " (" << (tasks[i].completed ? "Completed" : "Pending") << ")" << endl;
        }
    }
}

void markTaskAsCompleted(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        cout << "Task marked as completed." << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

void removeTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
        cout << "Task removed." << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

int main() {
    while (true) {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Mark task as completed" << endl;
        cout << "4. Remove task" << endl;
        cout << "5. Quit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string taskName;
                cout << "Enter task: ";
                cin.ignore(); // Ignore newline character
                getline(cin, taskName);
                addTask(taskName);
                break;
            }
            case 2:
                viewTasks();
                break;
            case 3: {
                int index;
                cout << "Enter task index to mark as completed: ";
                cin >> index;
                markTaskAsCompleted(index - 1);
                break;
            }
            case 4: {
                int index;
                cout << "Enter task index to remove: ";
                cin >> index;
                removeTask(index - 1);
                break;
            }
            case 5:
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}

