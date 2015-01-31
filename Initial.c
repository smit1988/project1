#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




int main(int argc, char ** argv)

{
	
    if (argc > 2)  // MODE 1
    {
		float Lambda0, Lambda1, AvgServiceTime, NumberOfTasks;

		Lambda0 = atof(argv[1]);
		Lambda1 = atof(argv[2]);
		AvgServiceTime = atof(argv[3]);
		NumberOfTasks = atof(argv[4]);

		//printf("%f %f %f %f", Lambda0, Lambda1, AvgServiceTime, NumberOfTasks);
    } 
    
    return 0;

}
