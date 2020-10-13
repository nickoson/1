#include<iostream>
#include<string>
using namespace std;

class Myclass
{
	int x;
	int * y;
public:
	int getX() {return x;}
	void setX(int a);
	Myclass() {this->x=0; y=new int(0);}
	~Myclass() {x=0;}
	Myclass(int a) {x=a;y=new int(a);}
	Myclass(int a, int b) {x=a+b;y=new int(b);}
	Myclass(const Myclass& T) {cout<<"UPS"<<endl; this->x=T.x;}
	int getY() {return *y;}
	// Myclass& operator= (const Myclass &ob);
};
/*

Myclass& Myclass::operator= (const Myclass &ob)
{
    // Проверка на самоприсваивание
    if (this == &ob)
        return *this;
 
    // Выполняем копирование значений
    x=ob.x;
	y=ob.y;
	
    // Возвращаем текущий объект
    return *this;
}
*/

class Monster
{

public:
	string Name;
	void WhoAmI() {cout << "Monster" << endl;}
	Monster() {Name ="Bob";}

};


class Cat : public Monster
{
public:
	void WhoAmI() {cout << "Cat" << endl;}
	Cat() {Name ="Tom";}
};

class Dog : public Monster
{
public:
	void WhoAmI() {cout << "Dog" << endl;}
	Dog() {Name ="Bobik";}
};


int main () 
{
   Myclass obj1(1);
   Myclass obj2(2);
   obj1=obj2;
   cout << obj1.getX() << endl;
   cout << obj1.getY() << endl;

  system("pause");
  return 0;
  
}










































/*
class A
{
public:
	int x;
	virtual void test() { cout << "123" << endl; };
};

class B: public A
{
public:
	int y;
	void test() override { cout << "45" << endl; };

};

int main () {
    B b; 
	A a;
	A* pb = new B();
	pb->test();
  a.test();
  b.test();
  system("pause");
  return 0;
  
}




class Student {
    string Name;
	int age;
	static int count;
	
  public:
	  const int sex;
   Student(string);
   static void print() {cout << count << endl;};
   Student();
   Student (string,int);
   int get_age() const  {return age;}
   string get_name() const {return Name;}
  // ~Student() {delete[15] Name;}
};

int Student::count=0;

Student::Student(string s)
{
	age=18;
	Name=s;
	count++;
}
Student::Student()
{
	age=18;
	Name ="Noname";
	count++;
	
	
}
Student::Student (string s,int a)
{
	age=a;
	Name=s;
	count++;
}
   

int main() {
  Student a;
  string v="Vasia";
  Student b(v,20);
  
  cout << a.get_name()<<endl;;
  cout << b.get_name()<<endl;;
  Student::print();
  cout<<Student::sex<<endl;
  system("pause");
  return 0;
}


class Myclass
{
	int x;
public:
	int getX() {return x;}
	void setX(int a);
	Myclass() {this->x=0;}
	~Myclass() {x=0;}
	Myclass(int a) {x=a;}
	Myclass(int a, int b) {x=a+b;}
	Myclass(const Myclass& T) {this->x=T.x;}
};

void SomeFun(Myclass obj)
{
	cout << "copy " << obj.getX() << endl;
}
void Myclass::setX(int a)
 {
	 if (a>10)
		 this->x=a;
	// else
	//	 x=0;
}
int main()
{
	
	Myclass ob;
	ob.setX(1);
	cout << ob.getX()<<endl;
	
	Myclass* ob1;
	ob1=&ob;
	
	ob1->setX(12);

	cout << ob.getX()<<endl;
	cout << ob1->getX()<<endl;
	
	
	Myclass ob(1,2);
	cout << ob.getX()<<endl;

	Myclass* ob1 = new Myclass();
	cout << ob1->getX()<<endl;
	
	SomeFun(ob);




	system("pause");
	return 0;
	
}








*/























	 /* 
		float x, y;
		cin >> x;
		cin >> y;
		if ( x * x + y * y <= 1 && ( (x >= 0 && y >= 0) || (y <= 0 && x <= 0) || (y >= 0 && x < 0))) 
				cout << "YES"<<endl;
			else 
				cout << "NO"<<endl;
			




	fstream f; 
	 f.open("D:\\1\\hello.bin",ios::binary);
	 int x;
	 float y;
	 f.write((char*) &x, sizeof(x));
	 f.write((char*) &y, sizeof(y));
	 
	 f.read((char*) &x, sizeof(x));
	 f.read((char*) &y, sizeof(y));

	 f.close();



	
	 ofstream f; //output write
	 f.open("D:\\1\\hello.txt");
	 f<<"Hello ";
	 f<<" frends!"<< endl;
	 f<<"abcdef"<<endl;

	 f.close();
	 
	 ofstream f("D:\\1\\hello.txt",ios::app);
	 f <<" Даже не знаю (Дарик)"<< endl;
	 f.close();
	
	
	 string name;
	 ifstream f("D:\\1\\hello.txt");
	 if (f.is_open())
		 while (getline(f,name)) 
			 cout << name << endl;
	 f.close();
	 
	 */
 


























/*

     string name;
	
	
	getline(cin,name);
	cout << name << endl;

	
	
	// *****************************
	ofstream f;
	f.open("D:\\1\\hello.txt"); // окрываем файл для записи
	if ( f.is_open())
	{
		f << "Hello ";
		f << "frend " << endl;
	}
	f.close();
	// *****************************
	f.open("D:\\1\\hello.txt", ios::app); // окрываем файл для записи
	if ( f.is_open())
	{
		f << "Yes ";
		f << "/ No " << endl;
	}
	f.close();
	// *****************************

	ifstream f1;
	f1.open("D:\\1\\hello.txt"); // окрываем файл для чтения
	while (getline(f1,name))
		cout << name << endl;
	f1.close();
	
	
	// *****************************
	ofstream f2;
	f2.open("D:\\1\\hello.txt"); // окрываем файл для записи
	for(int i=0; i<10; i++)
		f2<<i<< " " << sin((float)i)<<endl;

	f2.close();
	
	ifstream f1;
	f1.open("D:\\1\\hello.txt"); // окрываем файл для чтения
	while (getline(f1,name))
		cout << name << endl; 
	f1.close();
	


	*/
























/*
string hello = "Hello World!";
    cout << hello << "\n";
	char x = hello[1];
	cout << x << "\n";
	cout << hello.length() << "\n";
	hello=hello+hello;
	cout << hello.length() << "\n";
	char mystr[] = "123456";
	cout << mystr << "\n";
	cout << sizeof(mystr) << "\n";
	for (int index = 0; index < sizeof(mystr); ++index)
        cout << (int)(mystr[index]) << " ";
	cout << endl;
	char* pc = "12345";
	
	hello=pc;
	cout << hello << "\n";
	*/


























/*

struct List
{
int id;
List* next;
};



int main()
{
	List *pbl;
	List *pel = NULL;
	List *ptl = NULL;
	List *pcl = NULL;

	pbl = NULL;

	// add f-st element of list
	pbl = new List;
	
	pel = pbl;
	pel->id = 1;
	pel->next=NULL;
	
	// add second element

	pel->next = new List;
	pel=pel->next;
	pel->id = 2;
	pel->next=NULL;

	pel->next = new List;
	pel=pel->next;
	pel->id = 3;
	pel->next=NULL;

	ptl =pbl;
	while (ptl != NULL)
	{
		cout << ptl->id << " ";
		ptl=ptl->next;
	}
	cout << endl;

	int count=3; // дикий код (здесь должен быть код, который подсчитывает код-во элементов списка)
	
	int k=1;
	int i=0;
	ptl =pbl;
	if (k<=count)
		while (i<k)
		{
			i++;
			ptl =ptl->next;
		}

	cout << ptl->id << endl;
	pcl = ptl->next;
	ptl->next= new List;
	ptl->next->id =7777;
	ptl->next->next =pcl;


	ptl =pbl;
	while (ptl != NULL)
	{
		cout << ptl->id << " ";
		ptl=ptl->next;
	}
	cout << endl;

	k=1;
	i=0;
	ptl =pbl;
	if (k<=count)
		while (i<k)
		{
			i++;
			ptl =ptl->next;
		}

	// *********
	pcl = ptl->next;
	ptl->next = pcl ->next;
	delete pcl;
	pcl=NULL;

	ptl =pbl;
	while (ptl != NULL)
	{
		cout << ptl->id << " ";
		ptl=ptl->next;
	}
	cout << endl;



	
	system("pause");
	return 0;
	
}



*/


































/*
struct List
{
	int d;
	List* next;
};

int main()
{
	List *pbl; //point of begin list 
	List *pel; //point of end list
	List *ptl; //point of temp list
	List *pcl = NULL; //point of temp list

	pbl = NULL;
	pbl = new List;
	// current element
	pel = pbl;
	// fill member of List
	pel->d = 1;
	pel->next = NULL;
	
	// add new element
	pel->next = new List;
	pel = pel->next; // !!!!!!!!!!!!!!!!!!!!!!
	// fill new member of List
	pel->d = 2;
	pel->next = NULL;

	// add new element
	pel->next = new List;
	pel = pel->next; // !!!!!!!!!!!!!!!!!!!!!!
	// fill new member of List
	pel->d = 3;
	pel->next = NULL;


	//print 
	ptl = pbl;
	while (ptl) //(ptl != NULL)
	{
		cout << ptl->d <<" ";
		ptl=ptl->next;
	}
	cout << endl;

	// how mutch
	ptl = pbl;
	int count =0;
	while (ptl) //(ptl != NULL)
	{
		count ++;
		ptl=ptl->next;
	}
	cout << count << endl;

	int k=2;//
	int i=0;
	ptl = pbl;
	if (k<=count)
		while (i<k-1)
		{
		 i++;
		 ptl=ptl->next;
		}
	
	
	pcl=ptl->next ;
	ptl->next = new List;
	ptl->next->d = 777;
	ptl->next->next = pcl;


	//print 
	ptl = pbl;
	while (ptl) //(ptl != NULL)
	{
		cout << ptl->d <<" ";
		ptl=ptl->next;
	}
	cout << endl;

	
	
	// delete k 
	k=2;
	i=0;
	ptl = pbl;
	if (k<=count)
		while (i<k-1)
		{
		 i++;
		 ptl=ptl->next;
		}
	
		pcl = ptl->next;
		ptl->next = pcl->next;
		delete pcl;

	ptl = pbl;
	while (ptl) //(ptl != NULL)
	{
		cout << ptl->d <<" ";
		ptl=ptl->next;
	}
	cout << endl;

	system("pause");
	return 0;
	
}



*/



 


















/*
using namespace std;

float f(float);
float f1(float);

float (*ptrf) (float);
void tabul (float (*) (float),float,float,int);

int main()
{
	ptrf=f1;
	tabul(ptrf,-5,5,10);


	system("pause");
	return 0;
	
}

void tabul (float (*ptr) (float),float a, float b,int n)
{
	float h=(b-a)/n;
	float x=a;
	while (x<=b)
	{
	cout << x << " " << (*ptr)(x) << endl;
	x+=h;
	}
}

float f(float x)
{
	return x*x;
}
float f1(float x)
{
	return sin(x);
}



*/









































/* #include<iostream>;
#include<cmath>;

using namespace std;


void din_matr(); // прототип
float f (float);// прототип
float f1 (float);// прототип

float (*ptrf) (float); // указатель на функцию

void tabul_func (float (*) (float),float,float,int); // функция как параметр

int main()
{
	//************ указатель на функцию ************
	ptrf=f;
	cout << (*ptrf)(2.0) <<endl;
	ptrf=f1;
	cout << (*ptrf)(2.0) <<endl;
	cout << endl;
	//******указатель на функцию как параметр ******
	ptrf=f;
	tabul_func(ptrf,-5,5,10);
	//****** Динамический массив ******************* 
	cout << endl;
	din_matr();


	system("pause");
	return 0;
	
}


void tabul_func (float (*ptr) (float),float a,float b,int n) // функция как параметр
{
	float h=(b-a)/n;
	float x=a;
	while (x<=b)
	{
		cout << x << " " << (*ptr)(x) <<endl;
		x+=h;
	}
}
float f (float x)
{
	return x*x;
}

float f1 (float x)
{
	return sin(x*x);
}

void din_matr()
{
	int n,m;//размерность матрицы
	int i,j;
	cout<<"\nEnter n: ";
	cin>>n;//строки
	cout<<"\nEnter m: ";
	cin>>m;//столбцы
	//выделение памяти
	int **matr=new int* [n];// массив указателей на строки
	for(i=0;i<n;i++)
		matr[i]=new int [m];//память под элементы матрицы
	//заполнение матрицы
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
		matr[i][j]=rand()%10;//заполнение матрицы
	//печать сформированной матрицы
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cout<<matr[i][j]<<" ";
		cout<<"\n";
	}
	//удаление строки с номером к
	int k;
	cout<<"\nEnter k: ";
	cin>>k;
	int**temp=new int*[n-1];//формирование новой матрицы
	for(i=0;i<n;i++)
		temp[i]=new int[m];
	//заполнение новой матрицы
	int t;
	for(i=0,t=0;i<n;i++)
		if(i!=k)
		{
			for(j=0;j<m;j++)
				temp[t][j]=matr[i][j];
			t++;
		}
		
		//удаление старой матрицы
	for(i=0;i<n;i++)
		delete matr[i];
	delete[]matr;
n--;
	//печать новой матрицы
    matr=temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cout<<matr[i][j]<<" ";
		cout<<"\n";
	}


}







*/





















/* #include <iostream>
#include <cmath>

using namespace std;

void printbinary(const unsigned char val)
{
for (int i=7;i>=0;i--)
	if(val & (1<<i))
		cout <<"1";
	else
		cout <<"0";
}

int main()
{
	//int q=1;
	//cout << q <<endl;


	float l;
	l=-0.5;
	if (l>=0)
		cout<<sqrt(l);

	
	int a[10];
	
	const int n =10;
	int b[n];
	int j;
	//for(j=0; j<n; j++)  //for j in range(n):
	//	cin >> a[j];  

	for(int i=0; i<n; i++)
		{b[i]=rand() % 100;
		cout << b[i] << " ";}
	cout << endl;

	float c[n];
	for(j=0; j<n; j++) {
		c[j] = ((float) rand()) / (float) RAND_MAX * 100;
		cout << c[j] << " ";}
	cout << endl;//eee
	system("pause");
// ddd
// llll

return 0;

}

*/