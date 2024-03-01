#include <iostream>
#include <cmath>

int main() {
    const int width = 160; // Ширина консоли
    const int height = 40; // Высота консоли
    const double x_min = 0.0;
    const double x_max = 2 * 3.14159; // Период косинуса
    const double y_min = -1.0;
    const double y_max = 1.0;

    // Шаги по осям X и Y
    const double x_step = (x_max - x_min) / width;
    const double y_step = (y_max - y_min) / height;

    // Отображение графика
    for (int y = 0; y < height; ++y) {
        double y_val = y_max - y * y_step;
        for (int x = 0; x < width; ++x) {
            double x_val = x_min + x * x_step;
            double func_val = std::cos(x_val); // Вычисляем значение косинуса
            if (std::fabs(func_val - y_val) < y_step / 2.0) {
                std::cout << "*"; // Отображаем точку на графике
            } else if (x == width / 2) {
                std::cout << "|"; // Отображаем ось Y
            } else if (y == height / 2) {
                std::cout << "-"; // Отображаем ось X
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    // for (int i = 0; i < height; i++){

    // }

    return 0;
}
