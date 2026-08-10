// Title: Single Element in a Sorted Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/single-element-in-a-sorted-array/

            }else{
            if(arr[mid - 1] == arr[mid]){ //odd
                  start = mid + 1; //right
            } else {
                  end = mid - 1; //left
            }
                  }
                        start = mid + 1; //right
        }
    }
    return -1;
}
};
