#include <iostream>

using namespace std;

int main()
{
	int num = 1;
	int s3 = 0;
	int s5 = 0;
	int s15 = 0;
	int soma;
	
	while (num <= 1000)
	{
		if (num % 3 == 0)
		{
			s3 = s3 + num;
		}
		if (num % 5 == 0)
		{
			s5 = s5 + num;
		}
		if (num % 15 == 0)
		{
			s15 = s15 + num;
		}
		num++;
	}
	
	soma = s3 + s5 - s15;
	cout << soma << endl;
	
	return 0;
}
