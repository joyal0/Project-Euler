#include<iostream>
#include<cmath>
#include<chrono>
using namespace std;


int main()
{
    //Measuring starts  
    auto start = chrono::high_resolution_clock::now();
    
    /* Code Here */ 


    // code to measure
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count() * 1e-9;

    cout << "Execution time: " << duration << " s" << endl;
    return 0;
}
