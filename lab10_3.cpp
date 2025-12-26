#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include<fstream>

using namespace std;

int main()
{
        int count = 0;
        float sum =0;
        float sum_of_square = 0;
        string textline;
        ifstream source("score.txt");
        while (getline(source,textline))
        {
            float x = atof(textline.c_str());
            sum += x;
            sum_of_square += x*x;
            count++;
        }
        double mean = sum/count;
        double stadard = sqrt(sum_of_square/count-mean*mean);
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << mean << "\n";
        cout << "Standard deviation = " << stadard;
        cout << setprecision(3);
}