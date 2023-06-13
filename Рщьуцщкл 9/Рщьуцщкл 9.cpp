#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{ 
    //task 1
	int n, s;  
    s = 0;
	cout << "Введите число до 500: ";
	cin >> n;
 
    while(n <= 500)
    {
        s = s + n;
        n = n + 1;
    }
    cout << s;

    cout << "\n\n\n\n";

    //task 2
    int x, y, p;
    cout << "Введите 1 целое число: ";
    cin >> x;
    cout << "Введите 2 целое число: ";
    cin >> y; 
    p = 1;
    for (int i = 0; i < y; i++) 
    {
        p = p * x;
      
    }
    cout << p;

    cout << "\n\n\n\n";

    float sum, m;
    sum = 0;
    m = 0;
    while (m < 1000)
    { 
        m = m + 1;
        sum = sum + m;
    }
    cout << "Среднее арифтетическое = " << sum / 1000;

    cout << "\n\n\n\n";

    int a;
    int g = 1;
    cout << "Введите число до 20: ";
    cin >> a;
    for (int i = a; i <= 20;i++)
        g = g * i;
    cout << g;
}