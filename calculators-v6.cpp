#include <iostream>
using namespace std;
#include<windows.h>
#include<cmath>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>

long time_limit(void);
bool getPassword(); // Prototype
string secret ; // Password
static long maxcount = 15;
static long maxtime = 180;
double pi=3.142;
const long delay = 10000000L;
const long delays = 11000000L;
const char sup = 252;
void changepw();
int load();
void add ();
void func();
void sub ();
void mut ();
void divi ();
void simult();
void integral();
long factorial (long a);
int mfactorial();
void core();
void recall();
void recall1();
void recall2();
void recall3();
void square_root();
void recall4();
void quadratic();
void recall5();
void recall6();
void recall7();
void recall8();
int cdown();
time_t now=time(0);
    char *current_time= ctime(&now);

int main()
{
    cout<<"\t\t\t"<<current_time<<endl;
     getPassword();
     int n;
    cout<<endl<<"\t\t\t";
    for(n=0; n<7; n++){
        load();
        cout<<"\r\t\tloading      \b\b\b\b\b";
    }

    cdown();
    system("cls");
    cout<<"\t\t\t"<<current_time<<endl;
     core();

    return 0;
}

bool getPassword()                               // Enters and checks a password.
{                                                // Return value: true, if password is ok.
bool password = false;                           // For return value
string word;                                     // For input
int count = 0, time = 0;
time_limit();                                    // To start the stop watch
while( password != true &&
++count <= maxcount)                             // Number of attempts
{
cout << "\n\nInput the password: \t ";
cin.sync();                                      // Clear input buffer
cin >> setw(20) >> word;
time += time_limit();
if( time >= maxtime )                            // Within time limit?
break;

ifstream pw;
pw.open("password.txt");
pw>>secret;
                                        // No!
if( word != secret){
cout << " \t Invalid password!" << endl;
}
else{
password = true;
}
pw.close();

}
return password;                                        // Result
}
long time_limit()                                        // Returns the number of
{                                                        // seconds after the last call.
static long seconds = 0;                                 // Time of last call.
long past_sec = seconds;                                 // Saves previous time.
time( &seconds);                                         // Reads new time.
return (seconds - past_sec);                             // Returns the difference.
}

void changepw(){
    string old;
    ifstream pws;
    pws.open("password.txt");
    pws>>secret;
    cout<<"\nTO CHANGE THE PASSWORD \nENTER OLD PASSWORD : ";
    cin>>old;

    if (old==secret){
             pws.close();
    cout<<"\nENTER NEW PASSWORD : ";
    cin>>secret;
    ofstream psw;
    psw.open("password.txt", ios::out | ios::binary);
    if(psw.is_open()){
    psw<<secret;
    cout<<"Password change successfully\n";
    }
    else{
        cout<<"unable to open file ";
        psw.close(); }
    }
    else{
        cout<<"\n\t\t\tPASSWORD NOT MARCH !\n\n";
        changepw();
    }
}

int load()
{
int tic=5;
do
{
for( long i = 0; i < delay; ++i )
;
cout << ".";

}
while( --tic>0 );

}

int cdown()
{
int tic=50;
int d[100];
int i,j,a[100];

for(i=0; i<50; i++){
        d[i]=i;

}

do
{
for( long i = 0; i < delays; ++i )
;
cout <<""<< d[tic]<<"\r\b\b\b\b\b\b\b\t\t\t\t";

}
while( tic-- !=0 );

}



void add ()
{
    string line(14,'-');
    float a, b,sum=0,result=0;
    int t=1 ;
    cout << "input the numbers to be added:\t\t TO END ENTER '0'\n\t\t";
    do{
    cin>>a;
    result= sum + a ;
    cout<<"           "<<line<<"\n\t\t"<<result<<"\n\t\t +"<<endl;
    sum+=a;
    cout << "\t\t";
    }while(a!=0);
    recall();

}
void sub ()
{
    system("color 5a");
   float a, b,result;
cout << "input 2 numbers to be subracted:\n\t";
cin>>a;
    cout<<"    -\n\t";
    cin>>b;
    string line(6,'-');
    result = a - b;
    cout <<"      "<<line<<endl<<"\t"<< result <<endl<<"      "<<line<<endl;




    recall1();
}
void mut()
{
    system("color 4f");
   string line(6,'-');
    float a,c,d,f,b,mut,result=1;
    int t;
    cout <<"how many variable do you want to multiply together\t";cout<<"\t +  *\n\n\t\t\t\t\t\t\t\t -  / \n\t";
    cin>>t;
    cout << "input the numbers to be multiply:\n\t\t";
    for(int i=0; i<t; i++){
    cin>>a;
    cout<<"             *\n\t\t";
    mut = a;
    result*=mut;
    }
     cout<<"\n\t      "<<line<<endl<<"\t\t"<< result <<endl<<"      \t      "<<line<<endl;
recall2();
}
void divi ()
{
    system("color 0a");
    float a, b,result;
    char subs=246;
cout << "input 2 numbers to be divide:\n\t";
cin>>a;
    cout<<"    "<<subs<<"     \n\t";
    cin>>b;
    string line(7,'-');
    int reault;
    result = a / b;
    cout <<"      "<<line<<endl<<"\t"<< result <<endl<<"      "<<line<<endl;
recall3();
}
void square_root()
{
    system("color cf");
    string line(12,'.');
    char subs=251;
    float a, b,c,result,power,q,q2;
    cout<<"enter the number to find the square_root\n\t\t"<<subs;
    cin>>a;
    result=sqrt(a);
     cout <<"      "<<line<<endl<<"\t"<< result <<endl<<"      "<<line<<endl;
     cout<<"\nto calculate power of no, enter the number..\n\t";
    cin>>b ; cout<<"\t ^ ";cin>>c;
    power=pow(b,c);
    cout <<"      "<<line<<endl<<"\t"<< power <<endl<<"      "<<line<<endl<<endl;

recall4();
}
void quadratic()
{
    system("color 1f");
     string line(80,'=');
     char subs= 253, sb=241,sp=251;
    float a, b,c,result,power,q,q2;
     cout<<line<<"\n To calculate quadratic equation, enter the variables coefficient number and the constant..\n\t\t aX"
     <<subs<<" "<<sb<<" bX + c = 0 "<<line<<"\n\n\t";
    string lin(32,'.');
    cout<<"•	X"<<subs<<"\t";cin>>a;cout<<"\n\t   ";cout<<"X\t  ";cin>>b;cout<<"\n\t\tC     ";cin>>c;
    q=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
    q2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
    cout<<endl;
    cout<<"\n\t\t"<<a<<"x"<<subs<<" + ("<<b<<"x) +("<<c<<") = 0 \n\n";
    cout <<"      "<<lin<<endl<<"\t X1 = "<< q <<", X2 = "<< q2 <<endl<<"     "<<lin<<endl<<endl;


    recall5();
}
void simult()
{
 string line(80,'=');
    float A,B,C,a1,a2,a3,b1,b2,b3, x, y;

    cout<<line<<" SIMULTANEOUS EQUATION \n"<<line;
    cout<<"\n\n\t enter the variable coefficient "
    <<"\n\t\t\t e.g a1x + a2y = c \n\t\t\t     b1x + b2y = c "<<line<<"\n\n";
    cout<<" enter value for a1x + a2y =c \n";
    cout<<"x ";cin>>a1;cout<<"y ";cin>>a2;cout<<"= ";cin>>a3;
    cout<<" enter value for b1x + b2y =c \n";
    cout<<"x";cin>>b1;cout<<"y ";cin>>b2;cout<<"= ";cin>>b3;
    A=a1*b2-b1*a2;
    B=a1*b3-b1*a3;
    C=a3*b2-b3*a2;
    x= C/A;
    y= B/A;

    cout<<"\n\t\t "<<a1<<"x + ("<<a2<<"y) = "<<a3<<endl;
    cout<<"\n\t\t "<<b1<<"x + ("<<b2<<"y) = "<<b3<<endl;

    if (A != 0){
        cout<<setprecision(2)<<"\n\t\t x = "<<x
        <<"\n\t\t y = "<<y<<endl<<endl;
    }
    else {
        cout<<"\n ERROR : The equation is not define \a\a\a\a\n\n";
    }

    recall6();
}

void diff(){
    string line(80,'=');
float a[20],b[20],d[20],c;
int i, p=0;
char y,su=253;
do{
cout<<line<<"\n DIFFERENTIAL CALCULUS \n"<<line
<<"\n TO WRITE Y = aX"<<sup<<" + aX"<<sup<<" +...+ C"
<<"\n ENTER 'a' as coefficient of X and b as x index (x^b)"
<<"\n and always enter '0' for a and b before you enter for constant \n"
<<"\n e.g TO GET Y = 2X^3 + "<<"3X"<<su<<" + 3X^1 + 5 \n ENTER Y = 2X^3 + 3X^2 + 3X^1 + 0X^0 + 5 "
<<line<<endl;
system("pause");

        for( i=0; i<10; i++){
cout<<"\n Enter x coefficient   \n\t";
cin>>a[i];
cout<<" Enter x index ^ b \n\t";
cin>>b[i];
p=p+1;
if(a[i]==0){
    break;
}
        }
cout<<"Enter c  \n\t";
cin>>c;
system("cls");
cout<<line<<"\n DIFFERENTIAL CALCULUS \n"<<line;
cout<<"\n  QUESTION : y = ";
for( i=0; i<p-1; i++){
cout<<a[i]<<"x^"<<b[i]<<" + ";
}
cout<<c;

cout<<"\n\n  ANSWER : dy/dx = ";
for( i=0; i<p-1; i++){
   d[i]=b[i]-1;
        if(a[i]!=0 && b[i]!=0 && a[i]<100 && b[i]<100 && d[i]!=0 ){
cout<<a[i]*b[i]<<"x^"<<d[i]<<" + ";
}
  if( a[i]!=0 && b[i]!=0 && a[i]<100 && b[i]<100 && d[i]==0){
    cout<<a[i]<<" + ";
  }
}
cout<<"c"<<endl<<endl;
cout<<"\n\n DO you want to perform the operation again ?\n\n\t if yes press y else n \n\t\t\t\t";
cin>>y;
system("cls");
}while(y=='y');
core();
}


void integral()
{
 string lin(80,'=');
string line(12,'.');
    int b,c;
    double U,H,T,A,L,R;

    cout<<lin<<" INDUCTION CALCULATION \n"<<lin<<endl;

    cout<<"ENTER THE No OF TURNS\t";
    cin>>T;
    cout<<"ENTER THE RADIUS OF THE CIRCUMFERENCE (cm)\t";
    cin>>R;
    R=R/100;
    A=R*R*3.1416;
    cout<<"ENTER THE CORE TYPE e.g 1 for AIR OR 2 for IRON\t";
    cin>>U;
    cout<<"ENTER THE LENGTH OF THE TURNS (cm)\t";
    cin>>L;
    L=L/100;
    if(U==1){
    H= (T*T*A*0.00000126)/L;}
    if(U==2){
    H= (100*T*T*A*0.00000126)/L;}

    cout<<"\t\t"<<line<<endl<<"THE INDUCTANCE H IS "<<H<<endl<<"\t\t"<<line<<endl;


    cout<<lin<<" INTEGRATTION CALCULATION \n"<<lin<<endl;

    cout<<"X^";
    cin>>b;
    cout<<"C";
    cin>>c;
    cout<<"answer is "<<line<<endl<<" \t X^"<<b+1<<" / "<<b+1<<" + "<<c<<"X"<<endl<<" \t"<<line<<endl;
recall7();
}
void func(){

float x,s;
char choice ,c, ch,t ;
 string line(80,'='),lin(80,'-');
cout<<endl<<line<<"  Press 's' for sin(); 'c' for cos(); 't' for tan(); "
<<"\n  CAPITAL 'S' for asin(); 'C' for acos(); 'T' for atan(); \n"<<line
<<"\n\n TO calculate FUNCTION of any number press F ELSE T  to see the TABLE \t";
cin>>t;
switch(t){
case 'F': case 'f':
    cout<<"\n\n enter the number for the function you want to calculate for \n\t\t\t";
cin>>x;
cout<<"Enter the function { s / c / t / S / C / T } \t";
cin>>choice;
  switch(choice){
case 's': cout <<setw(7)<<"\n\t sin "<<x<<" = "<<sin(x/180*pi); break;
case 'c': cout<<"\n\t cos "<<x<<" = "<<cos(x/180*pi); break;
case 't': cout<<"\n\t tan "<<x<<" = "<<tan(x/180*pi); break;
case 'S': s=asin(x); cout<<"\n\t asin "<<x<<" = "<<s/pi*180; break;
case 'C': s=acos(x); cout<<"\n\t acos "<<x<<" = "<<s/pi*180; break;
case 'T': s=atan(x); cout<<"\n\t atan "<<x<<" = "<<s/pi*180; break;
default:
    cout<<"ERROR....";
    func();
  }
cout<<"\n\nTo perform the operation again press y else n \n\t\t\t";
cin>>ch;
system("cls");
switch(ch){
case 'y': case 'Y': func(); break;
default: core();break;
} break;

case 'T': case 't':
 cout<<"\t S/N \t\t sin \t\t cos \t\t tan \n"<<lin<<endl;
for(int i=0; i<375; i+=15){
    cout<<"\t"<<i<<"\t\t "<<sin(pi*i/180)<<"\t\t "
    <<cos(pi*i/180)<<"\t\t "
    <<tan(pi*i/180)<<endl<<lin<<endl;

}
    cout<<"\nPress any key to return to main menu ";
    cin>>c;
    switch(c){case 'v': default: system("cls"); func() ;}
default : system("cls") ; core();break;
}

}
long factorial (long a)
{
if (a > 1)
return (a * factorial (a-1));
else
return (1);
}
int mfactorial ()
{
long number;
cout << "Please enter the number: ";
cin >> number;
cout <<endl<< number << "! = " << factorial (number)<<"\n\n\n\n\n";
recall8();

return 0;
}


void core()
{
    system("color B9");
     char choice;
    string line(4,'-');
    system("title FRANCIS CALCULATOR");
    cout<<"which operation did u want to perform ?\t\t";system("date/t");cout<<"\t\t\t\t\t\t";system("time/t");
    cout<<"\t +  *\n\n\t -  / \n";
    cout<<">> press A for addition\n\n>> ,,    S for  subtraction"
    <<"\n\n>> ,,    M for multiplication"
    <<"\n\n>> ,,    D for division"
    <<"\n\n>> ,,    R for square_root / power of a number"
    <<"\n\n>> ,,    Q for Quadratic Equation"
    <<"\n\n>> ,,    L for Simultaneous Equation"
    <<"\n\n>> ,,    I for Integration/INDUCTANCE"
    <<"\n\n>> ,,    C for Differential calculus"
    <<"\n\n>> ,,    f for factorial "
    <<"\n\n>> ,,    y for functions e.g sine,cosine.."
    <<"\n\t\t\t\tTO CHANGE PASSWORD PRESS (P)"
    <<"\n\t\t\t\tTO QUIT PRESS            (0)\n\t__";

    cout<<endl<<endl<<"\t\t";
    cin>>choice;
    system("cls");
    switch(choice){
        case 'P':
    case 'p':
    changepw();
    system("pause");
    core();

case 'A':
    case 'a':
    add();
    system("pause");
    break;
case 'S':case 's':
    sub();
    break;
case 'M': case 'm':
    mut();
    break;
case 'D': case 'd':
    divi();
    break;
case 'R': case 'r':
    square_root();
    break;
    case 'Q': case 'q':
    quadratic();
    break;
    case 'L': case 'l':
    simult();
    break;
    case 'I': case 'i':
    integral();
    break;
    case 'C': case 'c':
    diff();
    break;
    case 'F': case 'f':
    mfactorial();
    break;
    case 'y': case 'Y':
        func();
        break;
        case '0':
        exit(1);
default:
    cout <<" invalid input \n\n";
    system("pause");
    system("cls");
    core();

    }
}
void recall()
{
    char a;
    cout<<"did you want to continue ? if yes press y else n \n\n\t";
    cin>>a;
    system("cls");
    switch (a){
case 'y':case 'Y':
    add();
    break;
default:
    core();
     break;
    }
}
void recall1()
{
    char a;
    cout<<"did you want to continue ? if yes press y else n \n\n\t";
    cin>>a;
    system("cls");
    switch (a){
case 'y':case 'Y':
    sub();
    break;
default:
    core();
     break;
    }
}
void recall2()
{
    char a;
    cout<<"did you want to continue ? if yes press y else n \n\n\t";
    cin>>a;
    system("cls");
    switch (a){
case 'y':case 'Y':
    mut();
    break;
default:
    core();
     break;
    }
}
void recall3()
{
    char a;
    cout<<"did you want to continue ? if yes press y else n \n\n\t";
    cin>>a;
    system("cls");
    switch (a){
case 'y':case 'Y':
    divi();
    break;
default:
    core();
    break;
    }
}
void recall4()
{
     char a;
    cout<<"did you want to continue ? if yes press y else n \n\n\t";
    cin>>a;
    system("cls");
    switch (a){
case 'y':case 'Y':
    square_root();
    break;
default:
    core();
    break;
    }
}
void recall5()
{
     char a;
    cout<<"did you want to continue ? if yes press y else n \n\n\t";
    cin>>a;
    system("cls");
    switch (a){
case 'y':case 'Y':
    quadratic();
    break;
default:
    core();
    break;
    }
}
void recall6()
{
    char a;
    cout<<"did you want to continue ? if yes press y else n \n\n\t";
    cin>>a;
    system("cls");
    switch (a){
case 'y':case 'Y':
    simult();
    break;
default:
    core();
     break;
    }
}
void recall7()
{
    char a;
    cout<<"did you want to continue ? if yes press y else n \n\n\t";
    cin>>a;
    system("cls");
    switch (a){
case 'y':case 'Y':
    integral();
    break;
default:
    core();
     break;
    }
}
void recall8()
{
    char a;
    cout<<"did you want to continue ? if yes press y else n \n\n\t";
    cin>>a;
    system("cls");
    switch (a){
case 'y':case 'Y':
    mfactorial();
    break;
default:
    core();
     break;
    }
}
