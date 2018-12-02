
 /*

 1.1. Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran.


 #include <iostream>
 #include <stdio.h>

using namespace std;

int main()
 {
	int a = 1;
	float b = 2.5;
	char c = 'c';
	cout << "Do watosci int przypisalem: " << a << endl;
	cout << "Do wartosci float przypisalem wartosc: " << b << endl;
	cout << "Do wartosci char przypisalem wartosc: " << c << endl;

	return 0;
}


/*

1.2. Wyœwietliæ zmienn¹ typu int na ekran. Nale¿y u¿yæ metody printf i konstrukcji %d

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	int a = 1;
	printf("Liczba int wynosi %d\n", a);

	return 0;
}
*/

/*

1.3. Pobraæ od u¿ytkownika liczbê x. Wyœwietliæ kwadrat liczby x.

#include <iostream>
#include <stdio.h>

using namespace std;
 int main (int argc,char**argv)
 {
	int a;

 	cout <<"Podaj liczbe: ";
 	cin >> a;

	int kwadrat=a*a;

 	cout << "\nKwadrat liczby wynosi: " << kwadrat;

 	return 0;
 }*/

/*

1.4. Zapoznaæ siê z instrukcjami warunkowymi (if, else if, else oraz switch). Pobraæ od u¿ywkownika liczbê i wyœwietliæ informacjê, czy jest
ona: mniejsza, wiêksza, czy równa 0.

 #include <iostream>
 #include <stdio.h>

 using namespace std;

int main (int argc,char**argv)

{
	int a;
	int liczba=a;
	cout << "Podaj liczbe: ";
	cin >> a;

if (a>0)
	{
		cout << a << " jest wieksze od 0 " << endl;
	}
else if (a<0)
	{
		cout << a << " jest mniejsze od 0" << endl;
	}
else
	{
		cout << a << " jest rowne 0" << endl;
	}

return 0;
 }
 */

/*

1.5. Pobraæ ud u¿ytkownika 3 liczby (x1, x2, x3). Wyœwietliæ informacjê, która z tych liczb jest najwiêksza.

#include <iostream>
#include <stdio.h>

using namespace std;

 int main()
 {
int a;
int b;
int c;
 	cout << "Podaj pierwsza liczbe: ";
 	cin >> a;

 	cout << "\nPodaj druga liczbe: ";
 	cin >> b;

 	cout << "\nPodaj trzecia liczbe: ";
 	cin >> c;

 		if (a>b && a>c)
 		{
 		cout << "\nNajwieksza liczba jest" << a;
		 }
			else if (b>a && b>c)
			{
			cout << "\nNajwieksza liczba jest" << b;
			}
 				else (c>a && c>b);
 				{
 				cout << "\nNajwieksza liczba jest " << c << endl;
				}

return 0;
 }*/

/*

1.6. Napisaæ prosty kalkulator. Nale¿y pobraæ od u¿ytkownika 2 liczby oraz operator (jeden z czterech: mno¿enie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu u¿ytkownika. Uwaga - nale¿y pamiêtaæ o u³amkach (1/3 powinno daæ 0.33, a nie
0)

 #include <iostream>
 #include <stdio.h>

 using namespace std;

 int main (int argc,char**argv)
 {
 	float a;
 	float b;
 	int dzialanie;
 	float wynik= a+b || a-b || a/b || a*b;


 	cout << "		>>>Prosty kalkulator<<<			" << endl;
 	cout << "\n\nPodaj pierwsza liczbe: ";
 	cin >> a;
 	cout << "\nPodaj druga liczbe: ";
	cin >> b;

 	cout << "\nPodaj rodzaj dzialania:\nDodawanie 1\nOdejmowanie 2\nDzielenie 3\nMnozenie 4" << endl;
 	cin >> dzialanie;
 	cout << "\nwynik: ";



 	switch(dzialanie)
 	{

 		case 1:
 			cout << a+b;
 		break;

 		case 2:
 			cout << a-b;
 		break;

		 case 3:
		 	cout << a/b;
		break;

		 case 4:
		 	cout << a*b;

 	}







return 0;
 }
 */


 /*

 2.1. Zapoznaæ siê z pêtl¹ while. Pêtla ta s³u¿y do wielokrotnego wykonania fragmentu kodu przez NIEZNAN¥ Z GÓRY iloœæ razy. Pêtla
wykonuje siê zawsze, jeœli warunek jest prawdziwy (ewaluowany do true). Napisaæ pêtlê, w któej u¿ytkownik podaje liczbê x. Nale¿y
wyœwietliæ tê liczbê. Je¿eli u¿ytkownik poda 0, nale¿y zakoñczyæ program.

 #include <iostream>
 #include <stdio.h>

 using namespace std;

 int main (int argc,char**argv)
 {
 	int a;

 	cout << "Podaj liczbe: ";
 	cin >> a;

 		while (a>0)
 		{
 		cout << "Podaj liczbe: ";
		cin >> a;
		}
 			if (a==0)

			cout << "Koniec";

return 0;
 }
 */



 /*

 2.2. Przerobiæ kalkulator z zadania 1.6. Teraz po ka¿dym dzia³aniu program powinien spytaæ u¿ytkownika, czy ten chce powtórzyæ
wszystko od pocz¹tku. Jeœli tak - restartujemy kalkulator i zaczynamy od nowa. Jeœli nie - koñczymy program.

 #include <iostream>
 #include <stdio.h>

 using namespace std;

 void kalkulator ()
 {
 		float a;
 	float b;
 	int dzialanie;
 	float wynik= a+b || a-b || a/b || a*b;


 	cout << "		>>>Prosty kalkulator<<<			" << endl;
 	cout << "\n\n\tPodaj pierwsza liczbe: ";
 	cin >> a;
 	cout << "\n\tPodaj druga liczbe: ";
	cin >> b;

 	cout << "\n\tPodaj rodzaj dzialania:\n\n\tDodawanie 1\n\tOdejmowanie 2\n\tDzielenie 3\n\tMnozenie 4\n\ " << endl << "\t";

	cin >> dzialanie;
 	cout << "\n\tTwoj wynik to : ";



 	switch(dzialanie)
 	{

 		case 1:
 			cout << a+b;
 		break;

 		case 2:
 			cout << a-b;
 		break;

		 case 3:
		 	cout << a/b;
		break;

		 case 4:
		 	cout << a*b;

 	}

 }

	int main ()
 {

 	kalkulator ();
    string a;
		cout << "\n\n\tCzy chcesz powtorzyc? [tak/nie]:  " << endl << "\n\t";
		cin >> a;
	if (a == "tak")
	{
	main();
	}





 	return 0;
 }
*/


/*
2.3. Pobrać od użytkownika liczbę x. Należy wyświetlić wszystkie kolejne potęgi liczby x. Zakończyć program, kiedy liczba przekroczy 100 000


 #include <iostream>
 #include <stdio.h>
 #include <math.h>
 using namespace std;

 int a;
 int b;
 void potegowanie()
 {
 	cout << "Podaj liczbe ktora chcesz podniesc do potegi : ";
 	cin >> a;
 }




 int main ()


 {
potegowanie();

while (pow(a,b)<100000 )
{
    cout << "potega twojej liczby to : "<< pow(a,b) << endl;
    b++;
}


return 0;
 }
*/




/*
2.4. Pobrać od użytkownika liczbę x. Jeśli liczba jest niedodatnia - należy zakończyć program. Następnie należy wyświetlać kolejno (w
nowej linii) wszystkie liczby mniejsze od x, aż osiągnięte zostanie 0.
*/

/*
#include <iostream>
#include <stdio.h>

using namespace std;
void wyswietl_liczby()
{
    int a;
    cout << "Podaj liczbe : ";
    cin >> a;

    if (a<0)
    {
    cout << "Podales liczbe mniejsza od 0" << endl;
    }
    while (a>0)
{
    cout << a << endl;
    a--;
}

}
    int main ()

 {

   wyswietl_liczby();


    return 0;
}
*/


/*

2.5. Zapoznać się z instrukcjami continue; i break;. Pierwsza służy do zakończenia iteracji i przejścia do następnej, a druga natychmiast
kończy pętlę. Przerobić program z zadania 1.4, aby wyświetlał tylko parzyste liczby (użyć if oraz continue). Jeśli liczba wynosi 40, należy
wyjść z pętli i zakończyć program.


#include <iostream>
#include <stdio.h>

 using namespace std;

int main (int argc,char**argv)

{
	int a;
	int liczba=a;
	cout << "Podaj liczbe: ";
	cin >> a;

if (a>0)
	{
		cout << a << " jest wieksze od 0 " << endl;
	}
else if (a<0)
	{
		cout << a << " jest mniejsze od 0" << endl;
	}
else
	{
		cout << a << " jest rowne 0" << endl;
	}

return 0;
 }
 */



/*
2.5. Zapoznać się z instrukcjami continue; i break;. Pierwsza służy do zakończenia iteracji i przejścia do następnej, a druga natychmiast
kończy pętlę. Przerobić program z zadania 1.4, aby wyświetlał tylko parzyste liczby (użyć if oraz continue). Jeśli liczba wynosi 40, należy
wyjść z pętli i zakończyć program.


#include <iostream>
#include <stdio.h>

 using namespace std;

 int main ()
 {

 int x;

        cout << "Podaj liczbe: " << endl;
        cin>> x;
        while (x > 0)
        {
            x = x-1;
        if (x == 40)
            {
            break;
            }
        else if (x % 2 == 0)
            {
                cout << x << endl;
            }
        else continue;
            }
return 0;
 }
*/

/*

2.6. Zapoznać się z pętlą for. Pętla służy do wykonania danego fragmentu kodu ZNANĄ Z GÓRY określoną ilość razy. Uwaga - każdą pętlę
for można zastąpić pętlą while i wzajemnie. Zwyczajowo obowiazuje zasada, że jeśli ilość iteracji jest znana - używamy for, a jeśli nie jest
znana (zależy od użytkownika lub jakiegoś stanu zewnętrznego) - używamy pętli while. Pętla for składa się z: ZMIENNEJ ITERACYJNEJ,
czyli stanu początkowego pętli, np. int i = 0. Następnie WARUNKU ZAKOŃCZENIA PĘTLI, np. i<10. Następnie OPERACJI WYKONYWANEJ
PO KAŻDEJ ITERACJI - zazwyczaj jest to zwiększenie iteratora o 1, czyli i = i + 1, bądź w skrócie i++. Napisać pętlę for, która wyświetli cyfry
od 0 do 9.


#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
   int i;

    for (i=0;i<=9;i++)
    {
        cout<< i << endl;
    }
return 0;

}
*/

/*
2.7. Pobrać od użytkownika liczby x i y. Zakładamy, że y > x (zawsze, nie musimy tego sprawdzać). Za pomocą pętli for wypisać liczby
między x a y (do przemyślenia - co jest stanem początkowym, a co warunkiem zakończenia pętli?)


#include <iostream>
#include<stdio.h>

using namespace std;

int main ()

{
    int x,y,i;

    cout << "Wpisz liczby oddzielone spacja : " << endl;
    cin >> x;
    cin >> y;
    cout << endl;

    for (i=1;x+i!=y;i++)

    {
        cout << x+i << endl;
    }


    return 0;
}
*/


/*

2.8. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisać wszystkie liczby mniejsze od x, ale większe niż 0.

#include <iostream>
#include <stdio.h>

using namespace std;

int main ()

{

    int x,i;

    cout << "Podaj liczbe : ";
    cin >> x;

    for(i=0;x>i;x--)
    {
        cout << x << endl;
    }

    return 0;
}

*/



/*
2.9. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisywać CO TRZECIĄ liczbę większą od x. Pętla powinna się zakończyć, jeśli
liczba przekroczy 100. Uwaga - proszę nie używać operacji continue i break, a sterować tylko parametrami pętli.


#include <iostream>
#include <stdio.h>

using namespace std;

int main()


{

int x,i;

cout << "Podaj liczbe: ";
cin >> x;

    for (i=x+3;i<100;i=i+3)
    {
        cout << i << endl;
    }

    return 0;
}
*/

/*
3.1. Napisać metodę void NewLine(). Powinna ona wypisać na ekran pojedynczą pustą linię. Użyć tej metodę w main().

#include <iostream>
#include <stdio.h>

using namespace std;

void newline()
{
    cout << endl;
}

int main ()

{

newline();

    return 0;
}
*/

/*
3.2. Napisać metodę void NewLines(int count). Powinna ona wypisać tyle nowych linii, ile zostało podanych W PARAMETRZE count (należy
użyć pętli for). Użyć metodę w main()


#include <iostream>
#include <stdio.h>

using namespace std;

void newlines(int x)
{
    int i;
    for(i=0;i<x;i++)
{
    cout << endl;
}

}
int main ()

{

newlines(10);


    return 0;
}
*/


/*
3.3. Napisać metodę void WriteBiggerNumber(int x, int y). Metoda powinna pobrać 2 parametry i zwrócić większy z nich. Wykorzystać
funckję w metodzie main(). UWAGA - pobieranie liczb od użytkownika powinno odbyć się w funkcji main(), a NIE w WriteBiggerNumber! Do
funkcji należy jedynie przesłać pobrane wcześniej parametry.


#include <iostream>
#include <stdio.h>

using namespace std;

int WriteBiggerNumber(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else if(y > x)
	{
		return y;
	}
	else
	{
        cout << "Podales dwie takie same liczby!" << endl;
	}
}



int main ()

{
    int x,y;
				cout << "Wpisz liczby oddzielone spacja: ";
				cin >> x;
				cin >> y;
				cout << endl;
                cout << WriteBiggerNumber(x,y) << endl;
return 0;
}
*/



/*
#include <iostream>
#include <stdio.h>

using namespace std;


int main ()

int Multiply(int x, int y)
{
return x * y;
}

{
    {
				int x, y;
				printf("Wpisz liczby oddzielone spacją\n");
				scanf("%d %d", &x, &y);
				printf("%d * %d = %d\n", x, y, Multiply(x, y));
				break;

}

return 0;


}
*/
