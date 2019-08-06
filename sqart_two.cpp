#include <stdio.h>
#include <iostream>

using namespace std;

int main ( ) {
	int x;
	cin << x;
    int low = 0;
    int high = x;
    while(low < high)
        {
            /* 这里最好用low + (high - low) / 2计算中位数，否则low + high容易溢出 */
            /* 另外middle最好是long long int类型，因为middle * middle也容易溢出 */
            long long int middle = low + (high - low) / 2;
            if(middle * middle <= x && (middle + 1) * (middle + 1) > x)
                return middle;
            else if(middle * middle > x)
                high = middle - 1;
            else
                low = middle + 1;
        }
        return low;
}

