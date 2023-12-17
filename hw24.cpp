
#include <iostream>
using namespace std;

class Device
{
public:

	string manufacturer;
	string model;
	string name;
	int capacity;
	int quantity;

	Device() : Device("Samsung", "T-12345", "A5", 256, 1) {}

	Device(string manufacturer) : Device(manufacturer, "T-12345", "A5", 256, 2) {}

	Device(string manufacturer, string model, string name, int capacity, int quantity)
	{
		Setmanufacturer(manufacturer);
		Setmodel(model);
		Setname(name);
		Setcapacity(capacity);
		Setquantity(quantity);

	}

	virtual void Print()
	{
		cout << "Device: \n\n Manufacturer: " << manufacturer << "\nModel: " << model << "\nName: " << name << "\nCapacity: " << capacity << "\nQuantity: " << quantity << "\n\n";
	}

	virtual void Loading()
	{
		cout << "Device has been loaded\n";
	}

	virtual void Saving()
	{
		cout << "Data ont the device has been saved\n";
	}

	void Setmanufacturer(string manufacturer)
	{ 
		cin >> manufacturer;
	}

	void Setmodel(string model)
	{
		cin >> model;
	}

	void Setname(string name)
	{
		cin >> name;
	}

	void Setcapacity(int capacity)
	{
		cin >> capacity;
	}

	void Setquantity(int quantity)
	{
		cin >> quantity;
	}

};

class FlashDrive : public Device
{
public:

	FlashDrive() : FlashDrive("Samsung", "T-12345", "A5", 256, 1) {}

	FlashDrive(string manufacturer) : FlashDrive(manufacturer, "T-12345", "A5", 256, 2) {}

	FlashDrive(string manufacturer, string model, string name, int capacity, int quantity)
	{
		Setmanufacturer(manufacturer);
		Setmodel(model);
		Setname(name);
		Setcapacity(capacity);
		Setquantity(quantity);

	}

	void Print()
	{
		cout << "Device: \n\n Manufacturer: " << manufacturer << "\nModel: " << model << "\nName: " << name << "\nCapacity: " << capacity << "\nQuantity: " << quantity << "\n\n";
	}

	void Loading()
	{
		cout << "Flash drive has been loaded\n";
	}

	void Saving()
	{
		cout << "Data ont the flash drive has been saved\n";
	}

};

class HardDrive : public Device
{
public:

	HardDrive() : HardDrive("Samsung", "T-12345", "A5", 256, 1) {}

	HardDrive(string manufacturer) : HardDrive(manufacturer, "T-12345", "A5", 256, 2) {}

	HardDrive(string manufacturer, string model, string name, int capacity, int quantity)
	{
		Setmanufacturer(manufacturer);
		Setmodel(model);
		Setname(name);
		Setcapacity(capacity);
		Setquantity(quantity);

	}

	void Print()
	{
		cout << "Device: \n\n Manufacturer: " << manufacturer << "\nModel: " << model << "\nName: " << name << "\nCapacity: " << capacity << "\nQuantity: " << quantity << "\n\n";
	}

	void Loading()
	{
		cout << "Hard Drive has been loaded\n";
	}

	void Saving()
	{
		cout << "Data ont the hard drive has been saved\n";
	}

};

class Telephone : public Device
{
public:

	Telephone() : Telephone("Samsung", "T-12345", "A5", 256, 1) {}

	Telephone(string manufacturer) : Telephone(manufacturer, "T-12345", "A5", 256, 2) {}

	Telephone(string manufacturer, string model, string name, int capacity, int quantity)
	{
		Setmanufacturer(manufacturer);
		Setmodel(model);
		Setname(name);
		Setcapacity(capacity);
		Setquantity(quantity);

	}

	void Print()
	{
		cout << "Device: \n\n Manufacturer: " << manufacturer << "\nModel: " << model << "\nName: " << name << "\nCapacity: " << capacity << "\nQuantity: " << quantity << "\n\n";
	}

	void Loading()
	{
		cout << "Telephone has been loaded\n";
	}

	void Saving()
	{
		cout << "Data ont the telephone has been saved\n";
	}

};

int main()
{
	int count = 3;

	Device** device = new Device * [count];

	device[0] = new FlashDrive;
	device[1] = new HardDrive;
	device[2] = new Telephone;

	for (int i = 0; i < count; i++)
	{
		device[i]->Print();
		device[i]->Loading();
		cout << "\n\n";
	}

	for (int i = 0; i < count; i++)
	{
		delete device[i];
	}
	delete[] device;

}