#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout << "Enter rows and cols: "; cin >> m >> n;
    int arr[m][n];
    cout << "Enter elements:\n";
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin >> arr[i][j];

    float f[m][n]; double d[m][n];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) { f[i][j]=arr[i][j]; d[i][j]=arr[i][j]; }

    // Multiply matrices (example multiply by itself)
    int r[m][n] = {0};
    float rf[m][n] = {0};
    double rd[m][n] = {0};
    for(int i=0;i<m;i++) 
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++){
                r[i][j] += arr[i][k]*arr[k][j];
                rf[i][j] += f[i][k]*f[k][j];
                rd[i][j] += d[i][k]*d[k][j];
            }
    cout << "Matrix multiplication done.\n";
}

