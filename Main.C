#include <stdio.h>
//byhChen 2018-11-4 22:56
int main()
{
	int N = 1;
	int A = 1;
	int T = 0;
	int M = 0;
	int ARR[8000] = { 0 };
	ARR[0] = 1;
	for (N=2;N<=100;N++)
	{
		for (A=1;A<=800;A++)
		{
			M = ARR[A - 1] * N;
			ARR[A - 1]=M%10000 + T;
			T = M / 10000;
		}
	}
	for (N = 800; N >= 1; N--)
	{
		//if(0== ARR[N - 1])
		//	continue;
		printf("%04d", ARR[N - 1]);
	}
	 

	return 0;
}
