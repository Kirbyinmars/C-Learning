#include <iostream>
void Log(const char* message);

int Multiply(int a, int b){
    Log("Multiply");
    return a*b;
}
int main(){
    std::cout << Multiply(2,4) << std::endl;
    std::cin.get();
};