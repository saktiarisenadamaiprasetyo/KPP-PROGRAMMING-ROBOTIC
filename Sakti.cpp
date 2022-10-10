// NAMA		: SAKTI ARISENA DAMAI PRASETYO
// NRP		: 2042221029
// Jurusan	: TEKNIK INSTRUMENTASI

#include <iostream>
#include <cmath>

using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

float mencari_V0(float x, float y)
{
    float v0;
    v0 = x - y;
    return v0; 
}

int speed_dgn_loss(int x)
{
    int loss;
    if (x >= 1, x <= 10){
        loss = 1;
    } else if (x >= 11 , x <=  20){
        loss = 3;
    } else if (x >= 21, x <= 30){
        loss = 5;
    }
      return loss;
}
int main() {
    float kecepatantangensial, input, theta;
    int jarak;
    cin >> input;
    theta = (SUDUT*3.14159265/180);
    jarak = pow (mencari_V0 (input, speed_dgn_loss(input)), 2) * sin(2*theta)/ GRAVITASI;
    kecepatantangensial = 29.8998;
    cout << jarak << " " << kecepatantangensial << endl;
    return 0;
}