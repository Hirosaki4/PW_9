#include <iostream>
#include <vector>
#include<Windows.h>
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Завдання 1:
    /*
    int n = 1, m = 2;  // Мій номер у списку - 12
    vector<vector<int>> matrix = { {1, 2}, {3, 4} };

    // Суми рядків
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Сума рядка " << i + 1 << ": " << rowSum << endl;
    }

    // Суми стовпців
    for (int j = 0; j < m; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        cout << "Сума стовпця " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}
*/
    //Завдання 2
    /*
    int n = 1, m = 2;
    vector<vector<int>> matrix1 = { {1, 2}, {3, 4} };
    vector<vector<int>> matrix2 = { {5, 6}, {7, 8} };
    vector<vector<int>> result(n, vector<int>(m));

    // Складання двох матриць
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Виведення результату
    cout << "Результат додавання матриць:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
    //Завдання 3
    /*
        int n = 1, m = 2;
        vector<vector<int>> matrix = { {1, 2}, {3, 4} };
        vector<vector<int>> transposed(m, vector<int>(n));

        // Транспонування матриці
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                transposed[j][i] = matrix[i][j];
            }
        }

        // Виведення транспонованої матриці
        cout << "Транспонована матриця:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << transposed[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    }
*/
    //Завдання 4
    /*
    int n, k;
    cout << "Введіть розмір матриці (n): ";
    cin >> n;
    cout << "Введіть значення k: ";
    cin >> k;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Введіть елементи матриці:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int count = 0;
    // Підрахунок елементів, кратних k
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % k == 0) {
                count++;
            }
        }
    }

    // Видозмінення матриці
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                matrix[i][j] = -matrix[i][j];  // Над діагоналлю
            }
            else if (i > j) {
                matrix[i][j] = matrix[i][j] * matrix[i][j];  // Під діагоналлю
            }
        }
    }

    // Виведення результату
    cout << "Кількість елементів, кратних " << k << ": " << count << endl;
    cout << "Видозмінена матриця:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
