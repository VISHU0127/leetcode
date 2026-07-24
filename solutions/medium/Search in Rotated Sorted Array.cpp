// Title: Search in Rotated Sorted Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/search-in-rotated-sorted-array/

                  if(arr[mid] < target && target <= arr[end]){
                        st = mid + 1;
                  } else {
                        end = mid - 1;
                  }
            }
        }
        return -1;
    }
    
};
