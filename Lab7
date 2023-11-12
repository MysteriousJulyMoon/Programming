#include <iostream>

int main()
{
    const int N_Max = 20000;
    int mas[N_Max];

    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> mas[i];

    // Удаление
    int j = 0;
    while (j < n)
    {
        // Проверка на одинаковость цифр числа
        int digitCount[10] = { 0 };
        int x = mas[j];
        while (x > 0)
        {
            digitCount[x % 10] = digitCount[x % 10] + 1;
            x = x / 10;
        }

        bool isDifferent = true;
        for (int i = 0;i < 10;i++)
            if (digitCount[i] > 1)
                isDifferent = false;

        if (isDifferent)
        {
            // Удаление
            for (int k = j;k < n - 1;k++)
                mas[k] = mas[k + 1];
            n = n - 1;
        }
        else
            j = j + 1;
    }

    // Дублирование
    if (isDifferent % 14 == 0)
    {
        for (int k = j;k < n - 1;k--)
            mas[k] = mas[k - 1];
        n = n + 1;
    }
    else
        j = j + 1;
    
    
    for (int i = 0;i < n;i++)
        cout << mas[i] << " ";

}
