#include <conio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

struct Train {
    int number;
    char path[10];
    int hour;
    int min;
};
using namespace std;
int main() {
    const int N = 8;
    setlocale(LC_ALL, "Russian");
    Train trains[8];

    for (int i = 0; i < N; i++) {
        cout << "Пункт " << i + 1 << endl;
        cin >> trains[i].path;
        cout << "Номер поезда " << i + 1 << endl;
        cin >> trains[i].number;
        cout << " Время отправления:часы" << i + 1 << endl;
        cin >> trains[i].hour;
        cout << "Время отправления:минуты " << i + 1 << endl;
        cin >> trains[i].min;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (strcmp(trains[i].path, trains[j].path) > 0)
            {
                Train tmp = trains[i];
                trains[i] = trains[j];
                trains[j] = tmp;
            }
        }
    }
    for (int i = 0; i < N; ++i)
    {
        cout << " Пункт : " << trains[i].path << "   номер: " << trains[i].number << "   Время отправления: " << trains[i].hour << ":" << trains[i].min << endl << endl;
    }
    int time_h;
    int time_min;
    int k = 0;
    cout << "Время(часы ,минуты)" << endl;
    cin >> time_h >> time_min;
    cout << " Время:" << time_h << ":" << time_min << endl << endl;
    for (int i = 0; i < N; i++)
    {
        if ((time_h < trains[i].hour) || (time_h == trains[i].hour && time_min < trains[i].min))
        {
            cout << "  Поезда : " << trains[i].number << " время " << trains[i].hour << ":" << trains[i].min << endl;
            k++;
        }
    }
    if (k == 0)
        cout << " Нет таких поездов" << endl;

    _getch();
    return 0;
}