// Title: Peak Index in a Mountain Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

        while (st <= end){
            int mid = st + (end - st)/2;
            if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
                  return mid;
            }
            else if(arr[mid - 1] < arr[mid]){ //right
                  st = mid + 1;
            }
            else{ //left
                  end = mid - 1;
            }
            }
            return -1;
        }
        int st = 1, end = arr.size() -2;
public:
    int peakIndexInMountainArray(vector<int>& arr) {
class Solution {
