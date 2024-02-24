#include <iostream>
#include <queue>

using namespace std;

void addTask(priority_queue<pair<int, int>>& tasks, int id, int priority) {
    tasks.push({priority, id});
}


void executeTask(priority_queue<pair<int, int>>& tasks) {
    if (!tasks.empty()) {
        pair<int, int> nextTask = tasks.top();
        tasks.pop();
        cout << "Executing Task: " << nextTask.second << endl;
    } else {
        cout << "No tasks to execute!" << endl;
    }
}

int main() {
    priority_queue<pair<int, int>> tasks;
    int taskId, taskPriority;

    char choice;
    do {
        
        cout << "Enter Task ID: ";
        cin >> taskId;
        cout << "Enter Task Priority: ";
        cin >> taskPriority;

        
        addTask(tasks, taskId, taskPriority);

        
        cout << "Do you want to add another task? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    
    cout << "\nExecuting Tasks:" << endl;
    while (!tasks.empty()) {
        executeTask(tasks);
    }

    return 0;
}

