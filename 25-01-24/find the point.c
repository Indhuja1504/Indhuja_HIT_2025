#Consider two points,  and . We consider the inversion or point reflection, , of point  across point  to be a  rotation of point  around .

#Given  sets of points  and , find  for each pair of points and print two space-separated integers denoting the respective values of  and  on a new line.

#Function Description

#Complete the findPoint function in the editor below.

#findPoint has the following parameters:

#int px, py, qx, qy: x and y coordinates for points  and 
#Returns

#int[2]: x and y coordinates of the reflected point 
#Input Format

#The first line contains an integer, , denoting the number of sets of points.
#Each of the  subsequent lines contains four space-separated integers that describe the respective values of , , , and  defining points  and .

#Constraints

#Sample Input


#Explanation

#The graphs below depict points , , and  for the  points given as Sample Input:

#find-point-0011.png
#find-point-1122.png


#include <stdio.h>

int main()

{

    int t;

    scanf("%d",&t);

    while(t--)

    {

        int px,py,qx,qy,rx,ry;

        scanf("%d%d%d%d",&px,&py,&qx,&qy);

        rx=2*qx-px;

        ry=2*qy-py;

        printf("%d %d\n",rx,ry);

    }

    return 0;

}
