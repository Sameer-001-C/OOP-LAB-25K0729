#include <iostream>
#include <string>
using namespace std;

class CPU{
	private:
		string model;
		string company;
		
	public:
		CPU(string model, string company){
			this->model = model;
			this->company = company;
		}
		
		void displayCPU(){
			cout << "CPU Model: " << model << endl;
			cout << "CPU made by: " << company << endl;
		}
};

class Computer{
	private:
		string computerName;
		CPU cpu;
	
	public:
		Computer(string PCName, string model, string company): computerName(PCName) , cpu(model, company){}
		
		void displaySpecs(){
			cout << "Computer Name: " << computerName << endl;
			cout << "\nCPU:" << endl;
			cpu.displayCPU();
		}
		
};

int main() {

    Computer c1("Desktop 1", "Ryzen", "AMD");
    c1.displaySpecs();

	cout << "-------------------" << endl;
	
	Computer c2("Desktop 2", "i7", "Intel");
	c2.displaySpecs();
	
    return 0;
}
