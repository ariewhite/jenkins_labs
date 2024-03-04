#include <iostream>
#include <cmath>
#include <fstream>

int main() {
    const int width = 160; // Ширина консоли
    const int height = 40; // Высота консоли
    const double x_min = 0.0;
    const double x_max = 2 * 3.14159; 
    const double y_min = -1.0;
    const double y_max = 1.0;
    
    const double x_step = (x_max - x_min) / width;
    const double y_step = (y_max - y_min) / height;

    std::ofstream file;

    file.open("out.txt");

    if (file.is_open()){

        for (int y = 0; y < height; ++y) {
            double y_val = y_max - y * y_step;
            for (int x = 0; x < width; ++x) {
                double x_val = x_min + x * x_step;
                double func_val = std::cos(x_val); 
                if (std::fabs(func_val - y_val) < y_step / 2.0) {
                    file << "*"; 
                } else if (x == width / 2) {
                    file << "|"; 
                } else if (y == height / 2) {
                    file << "-"; 
                } else {
                    file << " ";
                }
            }
            file << std::endl;
        }
        file.close();
    } else {
        std::cout << "error";
        return 0;
    }

    return 0;

}
