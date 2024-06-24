#include<bits/stdc++.h> // Including a common header file that includes most standard headers.
using namespace std; 

int main(){

	vector<vector<int>> v {{1, 2, 3, 4}, {4, 5, 6, 7}, {7, 8, 9, 1}, {4, 9, 2, 5}}; 
 
    // Printing the original matrix.
    for (int i = 0; i < v.size(); i++){ 
        for (int j = 0; j < v.size(); j++){ 
            cout << v[i][j] << " "; 
        }
        cout<<endl;
    }

    // Transposing the matrix.
    for(int i=0; i<v.size(); i++){ // Looping through each row of the matrix.
        for(int j=i; j<v.size(); j++){ // Looping through each element of the row from index i.
            if(i!=j){ // Checking if row index is not equal to column index.
                swap(v[i][j], v[j][i]); // Swapping elements to transpose the matrix.
            }
        }
    }

    cout<<endl; 

    // Printing the transposed matrix.
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v.size(); j++){
            cout << v[i][j] << " "; 
        }
        cout<<endl; 
    }
    

}
