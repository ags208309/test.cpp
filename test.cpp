#include <iostream>
#include <string>
#include <cstdio>
#include <ctime> 
using namespace std;

int rand(int a, int b)
{
    return (int)a+rand()%(b-a);
}

int wait(double t)
{
	unsigned int start,finish;
	start=clock();
	cout <<endl;
	finish=start;
	while (((finish-start)*1000)<(t*CLOCKS_PER_SEC))
    	finish=clock();
	return 0;
}

int calc(int x)
{
	wait(rand(0,1000));
	return x+x;
}

int main()
{
	srand(time(NULL));
    for (int x = 0; x < 10; x++)
    {
	    cout<<calc(x);
    }
}
