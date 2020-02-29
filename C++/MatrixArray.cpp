#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int count_sum(int matrix[5][5]);

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream file("matrix.txt");
  if (!file){
        cout << "File cannot be opened!";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            file >> matrix[y][x];
          }
    }
    file.close();
    cout << "Matrix:" << endl;
    print_matrix(matrix);
    sum = count_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
}  
void print_matrix(int a[5][5])
{
	int i, j;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			cout << a[i][j] << " ";
		}	
		cout << endl;
	}		
}
	
int count_sum(int a[5][5])
{
	int i, j, sum;
	sum = 0;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			sum += a[i][j];
		}	
	}	
	return sum;
}
