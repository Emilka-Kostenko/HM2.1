#include <iostream>
#include <iostream>

using namespace std;

class String
{
public:
	String()
	{
		this->stroka = new char[80];

		cout << endl << "Constructor default - the string with 80 symbols was created" << this;

		this->size = 80;

	}

	~String()
	{
		if(stroka != nullptr)
			delete[]stroka;

		cout << endl << "Destructor " << this;
	}

	String(int size)
	{
		this->stroka = new char[size];
		this->size = size;
		cout << endl << "Constructor with params - the string with set amount of symbols was created " << this;
	}

	String(char stroka[], int size)
	{
		this->stroka = stroka;
		this->size = size;
	}

	void Print()
	{
		cout << stroka;
	}

	void SetString(char* stroka[])
	{
		if (stroka[1] != NULL)
		{
			stroka = NULL;
		}
		else
		{

		}

	}

	String(const String& other)
	{
		this->size = other.size;
		this->stroka = new char[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->stroka[i] = other.stroka[i];
		}
	}

	void operator= (const String& other)
	{
		this->size = other.size;
		this->stroka = new char[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->stroka[i] = other.stroka[i];
		}
	}
private:
	char* stroka;
	int size;
};

int main()
{
	int size = 80;

	String str();

	String str1(size);

	char intliz_string [80];

	cout << endl << "Enter the string => ";
	cin >> intliz_string;

	String str2(intliz_string, size);

	str2.Print();

	
	
	

	

	return 0;
}