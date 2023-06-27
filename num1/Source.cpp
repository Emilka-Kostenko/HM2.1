#include <iostream>
using namespace std;

class MyString
{
public:
    MyString() // constructor default
    {
        size = 80;
        cout << endl << "String with max 80 chars was created";
    }
    MyString(int size)// constructor with set size
    {
        this->size = size;
        cout << endl << "String with set size was created";
    }
    MyString(const char* str) //constructor for setting with initialized string by user 
    {

        strcpy_s(this->str, str);
        this->size = strlen(str);
    }
    void printString() //метод вывода
    {
        cout << endl;
        puts(this->str);
    }
    

    void setString( const char*  string)
    {
        strcpy_s(this->str, string);

    }

    int length()
    {
        int count = 0;

        for (int i = 0; str[i] != NULL; i++)
        {
            count++;
        }

        return count;
    }

    char startWith()
    {
        return str[0];
    }


    char endWith()
    {
        return str[this->size - 1];
    }

    bool eql(const char* second)
    {
        for (int i = 0; i < size; i++)
        {
            if (second[i] != str[i])

                return false;



        }
    }
    
    char* getStr()
    {
        return str;
    }

    void setStr(const char* str) // changing str to the other str
    {
        size = strlen(str);
        strcpy_s(this->str, str);
    }
    
    int size;
    char str[255];
private:
    
    
};

int main()
{
    const char* source = "Emil";
    MyString str1("Hello, World!");
    cout << " The constructor wich create a string and inicialized it worked succefully ";
    
    str1.setString(source); cout << " set string method worked succefully";
    str1.printString(); cout << " Method of showing string worked succefuly";

    cout << endl << "The Length of str is: " << str1.length();
    cout << endl << "The string starts with this char: " << str1.startWith();
    cout << endl << "The string ends with this char: " << str1.endWith();
    cout << endl << "The string (Hello World) and the string (Emil) are: " << str1.eql( source);
    
    char* arr_cpy = new char[str1.size];

    arr_cpy = str1.getStr();

    cout << endl << arr_cpy << " was copied with using method getStr";

    str1.setStr("Hello World");
    cout << endl << "The string (Hello World) and the string (Emil) are: " << str1.str;
     
   

    
   

    return 0;
}