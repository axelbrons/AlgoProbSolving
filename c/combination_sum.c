#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */


int** combinationSum(int* candidates, int candidatesSize, int target, int* returnSize, int** returnColumnSizes) {
    
    // [2,3,5] target = 10

    int val;
    for (int i = 0; i < candidatesSize; i++) {
        val = target / candidates[i]; //val is the number that the candidate[i] should be repeated to obtain the target
    }
    int sum;
    int i = 0;
    int j = 0;
    while (i < candidatesSize) {
        while (sum < target) {
            sum += candidates[i];
            if (sum == target) {
                //TODO   
            }
        }
        i++;
    }
    
    for (int i = 0; i < candidatesSize; i++) {
        sum += candidates[i];

        for (int j = 0; j < candidatesSize; j++) {

        }
    }

    //-------------
    int newValue = 0;
    for (int i = 0; i < candidatesSize; i++) {

        if (target % candidates[i] == 0) {
            newValue = target / candidates[i];
            for (int i = 0; i < newValue; i++) {
                //donne la liste avec que des 2
            }
        }
        else {
            for (int k = i; k < candidatesSize; i++) {
                newValue = target - candidates[k];

            }
        }

    }

    //-------------
    sum = 0;
    for (int i = 0; i < candidatesSize; i++) {
        if (target - candidates[i] < 0) {
            while (sum < target) {
                
            }
        }
        else if (target - candidates[i] == 0) {
            //mettre seulement 1 solution
        }
        else {
            //ne rien faire
        }
    }
    

    
}


int main()
{
    int candidatesSize = 3;
    int target = 8;
    vector<vector<int>> candidates;
    

}

