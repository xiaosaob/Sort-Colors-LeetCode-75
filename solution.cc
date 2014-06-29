// Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

// Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

// Note:
// You are not suppose to use the library's sort function for this problem.

class Solution {
public:
    void sortColors(int A[], int n) {
        int redIdx = 0, whiteIdx = n, blueIdx = n;
        while(redIdx < whiteIdx) {
            if(A[redIdx] == 0) ++redIdx;
            else if(A[redIdx] == 1) {
                A[redIdx] = A[--whiteIdx];
                A[whiteIdx] = 1;
            } else {
                A[redIdx] = A[--whiteIdx];
                A[whiteIdx] = 1;
                A[--blueIdx] = 2;
            }
        }
    }
};
