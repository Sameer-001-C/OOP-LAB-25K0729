/*
Task 6

Home Task
Design your own hybrid inheritance system using:

Device
Computer
Network
Server
*/

#include <iostream>
#include <string>
using namespace std;


class Device {
	protected:
		string brand;
		int powerWattage;
	public:
		Device(string brand, int powerWattage) : brand(brand), powerWattage(powerWattage) {
		}
		
		void displayDevice() {
			cout << "Device Brand: " << brand << endl;
			cout << "Power Usage: " << powerWattage << "W" << endl;
		}
};


class Computer : public Device {
	protected:
		string cpuModel;
		int ramGB;
	public:
		Computer(string brand, int powerWattage, string cpuModel, int ramGB) 
			: Device(brand, powerWattage), cpuModel(cpuModel), ramGB(ramGB) {
		}
		
		void displayComputer() {
			cout << "CPU Model: " << cpuModel << endl;
			cout << "RAM: " << ramGB << " GB" << endl;
		}
};



class Network {
	protected:
		string ipAddress;
		int bandwidthMbps;
	public:
		Network(string ipAddress, int bandwidthMbps) : ipAddress(ipAddress), bandwidthMbps(bandwidthMbps) {
		}
		
		void displayNetwork() {
			cout << "IP Address: " << ipAddress << endl;
			cout << "Bandwidth: " << bandwidthMbps << " Mbps" << endl;
		}
};



class Server : public Computer, public Network {
	private:
		string serverRole;
		int storageTB;
	public:
		
		Server(string brand, int powerWattage, string cpuModel, int ramGB, string ipAddress, int bandwidthMbps, string serverRole, int storageTB) 
			: Computer(brand, powerWattage, cpuModel, ramGB), Network(ipAddress, bandwidthMbps), serverRole(serverRole), storageTB(storageTB) {
		}
		
		void displayServer() {
			
			displayDevice();
			displayComputer();
			displayNetwork();
			cout << "Server Role: " << serverRole << endl;
			cout << "Storage: " << storageTB << " TB" << endl;
		}
};

int main() {
	cout << "--- Data Center Server Info ---" << endl;
	
    
	Server s1("Dell", 750, "Intel Xeon", 128, "192.168.1.100", 10000, "Database Server", 50);
	
	
	s1.displayServer();
	
	return 0;
}





