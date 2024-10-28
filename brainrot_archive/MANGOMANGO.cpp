#include <iostream>

int main() {
    
    #pragma omp parallel num_threads(10)
    {
        for (int i = 0; i<10; i++) {
            std::cout<<"MANGO MANGO"<<std::endl;
        }
    }
}