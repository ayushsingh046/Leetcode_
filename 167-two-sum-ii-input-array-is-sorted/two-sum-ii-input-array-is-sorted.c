/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int x = 0;
    int y = numbersSize -1;
    
    int *result = malloc(2* sizeof(int));

    while(x<y){
        if(numbers[x] + numbers[y] == target){
            result[0] = x+1;
            result[1] = y+1;

            *returnSize = 2;
            return result;
        }else if(numbers[x] + numbers[y] > target){
            y--;
        }else{
            x++;
        }
    }
    *returnSize = 0;
    free(result);
    return NULL;
}