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
            /* ���������low + (high - low) / 2������λ��������low + high������� */
            /* ����middle�����long long int���ͣ���Ϊmiddle * middleҲ������� */
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

