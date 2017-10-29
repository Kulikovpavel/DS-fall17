#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>

#include<thread>
#include<mutex>
#include <ctime>
#include <chrono>

using namespace std;


class BankManager {
	float balance = 0;
public:
	void addTaxes(int client_balance){
		this_thread::sleep_for(0.1s);
		balance += client_balance*0.1;
	}
};

class Account {
	int balance = 0;
public:
	void createReport(int balance){
		this_thread::sleep_for(0.1s);
	}

	int getBalance(){ // get balance

	}

	void update(int amount){ // update balance with amount

	}
};


Account client;
BankManager bank_master;

int number_of_operations = 0;
int current_index = 0;



void process_operations(){
  while(...){ //cycle over data. DON'T FORGET TO MAKE A REPORT
  	int a;
	cin >> a;
	...
  }
}


void start_bank(){ //
  cin >> number_of_operations;  
  ...
  cout << "Resulting balance: " << client.getBalance() << endl;
}
int main() {
  freopen("input.txt", "r", stdin);

   chrono::steady_clock sc;   // create an object of `steady_clock` class
   auto start = sc.now();     // start timer

   do_task();
   auto end = sc.now();       // end timer (starting & ending is done by measuring the time at the moment the process started & ended respectively)
   auto time_span = static_cast<chrono::duration<double>>(end - start);   // measure time span between start & end
   cerr<<"Operation took: "<<time_span.count()<<" seconds !!!";

  return 0;
}
