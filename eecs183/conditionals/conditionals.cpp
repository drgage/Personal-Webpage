#include <iostream>
#include <string>
using namespace std;

int COST_TUSCANY = 10000;
int COST_LONDON = 7000;

bool doYouHaveVacationTime();

int main() {
    
    int user_money = 0;
    cout << "How much money do you have?" << endl;
    cin >> user_money;
    bool user_vacation_time = doYouHaveVacationTime();
    
    if (user_vacation_time) {
        if (user_money >= COST_TUSCANY) {
            cout << "Go to Tuscany!!" << endl;
        }
        
        else if (user_money >= COST_LONDON) {
            cout << "Go to London!" << endl;
        }
        
        else {
            cout << "Go somewhere in the US" << endl;
        }
    }
    
    else {
        cout << "Watch Netflix at home!" << endl;
    }
    
    return 0;
}

bool doYouHaveVacationTime() {
    cout << "Do you have vacation time?" << endl;
    string user_answer;
    cin >> user_answer;
    if (user_answer == "yes") {
        return true;
    }
    
    else {
        return false;
    }
}
