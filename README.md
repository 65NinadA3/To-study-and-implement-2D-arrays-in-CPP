# To study and implement 2D arrays in C++

**Name:** Ninad Phatak  
**PRN:** 24070123065  
**Batch:** ENTC A3  

---

## Overview of 2D Arrays in C++

A 2D array in C++ is a collection of elements arranged in rows and columns, essentially forming a table-like structure. Each element is accessed using two indices: one for the row and one for the column.  
They are useful for storing matrix data, tables, images, and more. In C++, 2D arrays can be declared using the syntax:

data_type arrayName[rows][columns];


Data is stored in row-major order, meaning that all elements of the first row are stored in consecutive memory locations, followed by elements of the second row, and so on.

## 1.Take matrix input from user and display it

**Theory:**  
This program takes a 3×3 matrix as input from the user and then displays it in matrix form. The program uses nested loops — the outer loop to handle rows and the inner loop to handle columns. Input is taken element-by-element and stored in the array. Display is also done row-wise, with proper tab spacing for alignment.

**Algorithm:**  
1. Declare a 3×3 integer matrix.  
2. Loop through rows (i) and columns (j) to take each element as input.  
3. Loop again through rows and columns to print the matrix in the same order.  

**Output:**  
Enter element(0,0):3
Enter element(0,1):4
Enter element(0,2):5
Enter element(1,0):3
Enter element(1,1):2
Enter element(1,2):2
Enter element(2,0):7
Enter element(2,1):4
Enter element(2,2):5
Matrix is:
3 4 5
3 2 2
7 4 5


## 2.Addition of two matrix

**Theory:**  
This program adds two matrices of the same dimensions. It uses two nested loops to input the elements of both matrices, then performs element-wise addition to generate a sum matrix. Each element in the sum matrix is the result of adding the corresponding elements from the first and second matrices.

**Algorithm:**  
1. Take matrix dimensions (rows and columns) as input.  
2. Input elements for the first matrix.  
3. Input elements for the second matrix.  
4. For each position `(i,j)`, compute `sum[i][j] = A[i][j] + B[i][j]`.  
5. Display the resulting sum matrix.  

**Output:**  
Enter number of rows: 3
Enter number of columns: 3

Enter elements of first matrix:
2
3
4
5
3
1
1
4
5

Enter elements of second matrix:
3
2
8
9
4
5
6
7
9

Sum of matrices:
5 5 12
14 7 6
7 11 14

## 3.Multiplication of two matrix

**Theory:**  
This program multiplies two matrices, provided that the number of columns in the first matrix equals the number of rows in the second matrix. The multiplication process involves calculating each element in the result matrix as the sum of products of corresponding elements from a row of the first matrix and a column of the second matrix.

**Algorithm:**  
1. Take dimensions of both matrices.  
2. Input all elements for the first matrix.  
3. Input all elements for the second matrix.  
4. For each position `(i,j)` in the result matrix:  
   - Initialize sum to 0.  
   - Multiply each element of row `i` in the first matrix by the corresponding element of column `j` in the second matrix and add to sum.  
   - Assign the sum to `res[i][j]`.  
5. Display the result matrix.  

**Output:**  
Rows cols of A: 3
4
Rows cols of B: 3
3

Enter A matrix:
2
3
2
4
5
8
9
4
3
2
5
3

Enter B matrix:
5
6
2
3

5
6
7
11
45

Result matrix (3x3):
33 49 112
112 169 463
56 83 243

## 4.Diagonal Addition

**Theory:**  
This program calculates the sum of the main diagonal elements of a square matrix. The main diagonal is formed by elements where the row index equals the column index. Using a loop, the program accumulates the sum of these diagonal elements.

**Algorithm:**  
1. Take the size `n` of the square matrix.  
2. Input all elements of the matrix.  
3. Initialize sum to 0.  
4. Loop from `i=0` to `n-1`, adding `m[i][i]` to sum.  
5. Display the sum.  

**Output:**  
Enter number of Rows & Column matrix: 3

Enter elements of matrix:
Element [0][0]: 4
Element [0][1]: 3
Element [0][2]: 2
Element [1][0]: 6
Element [1][1]: 3
Element [1][2]: 4
Element [2][0]: 3
Element [2][1]: 2
Element [2][2]: 1

Sum of main diagonal elements: 8

## 5.Transpose of a Matrix

**Theory:**  
The transpose of a matrix is formed by interchanging its rows and columns. This program takes a square matrix, swaps its indices while storing into a new matrix, and then displays the transposed version alongside the original.

**Algorithm:**  
1. Take size `n` of the square matrix.  
2. Input all elements into `matrix`.  
3. Loop through each `(i,j)` and set `transpose[j][i] = matrix[i][j]`.  
4. Display the original matrix.  
5. Display the transposed matrix.  

**Output:**  
Enter rows and columns of matrix: 3
4
Enter elements of the matrix:
Element[0][0]: 3
Element[0][1]: 2
Element[0][2]: 5
Element[0][3]: 6
Element[1][0]: 7
Element[1][1]: 3
Element[1][2]: 10
Element[1][3]: 22
Element[2][0]: 34
Element[2][1]: 67
Element[2][2]: 69
Element[2][3]: 54

Original Matrix:
3 2 5 6
7 3 10 22
34 67 69 54

Transpose of Matrix:
3 7 34
2 3 67
5 10 69
6 22 54

## 6. Compare elements row-wise

**Theory:**  
This program compares elements between the first and second rows of a 2×N matrix. It iterates column-wise, comparing corresponding elements in both rows, and outputs whether they are equal, or which row contains the larger value for that column.

**Algorithm:**  
1. Take the number of columns `c`.  
2. Input all elements for row 1.  
3. Input all elements for row 2.  
4. For each column index `j`:  
   - If `arr[0][j] == arr[1][j]`, print "Equal".  
   - Else if `arr[0][j] > arr[1][j]`, print "Row1 bigger".  
   - Else print "Row2 bigger".  

**Output:**  
Cols: 3
Enter row 1:
4
2
3
Enter row 2:
4
2
1

Comparison (row1 vs row2):
Col 0: Equal
Col 1: Equal
Col 2: Row1 bigger
