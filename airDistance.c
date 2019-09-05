/**
 * Author: Nicolas Lee Wen Han
 *
 * This program is used to prompt users to enter two locations and to
 find the distance between the two locations.
 *
 * formula:d = arccos (sin(ϕ1) sin(ϕ2) + cos(ϕ1) cos(ϕ2) cos(∆)) · R
 *
 */
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {

  double ϕ1 = 0;
  double ϕ2 = 0;
  double latitude1=0;
  double latitude2=0;
  double ∆=0;
  double longitude1=0;
  double longitude2=0;
  double longitudeA=0;
  double longitudeB=0;
  double R=6371;
  double degrees=0;
  double radians=0;
  double distance=0;


  printf("Please enter the latitude of location A: ");
  scanf("%d, &latitude1");

  printf("Please enter the latitude of location B: ");
  scanf("%d, &latitude2");
  if(ϕ1>90 || ϕ1<-90){
    printf("Please enter the latitude of location A: ");
    scanf("%d, &latitude1");

    printf("Please enter the latitude of location B: ");
    scanf("%d, &latitude2");
  }


  printf("Please enter the longitude of location A: ");
  scanf("%d, &longitude1");

  prinf("Please enter the longitude of location B: ");
  scanf("%d, &longitude2");

    if(ϕ1>180 || ϕ1<-180){
      printf("Please enter the longitude of location A: ");
      scanf("%d, &longitude1");

      prinf("Please enter the longitude of location B: ");
      scanf("%d, &longitude2");
    }

    ϕ1=(latitude1/180)*π;
    ϕ2=(latitude2/180)*π;
    longitudeA=(longitude1/180)*π;
    longitudeB=(longitude2/180)*π;


  ∆=longitudeA-longitudeB;


distance = arccos (sin(ϕ1) sin(ϕ2) + cos(ϕ1) cos(ϕ2) cos(∆)) · R;

	printf("Location Distance\n");
  printf("========================\n");
  printf("Origin:      (%f,%f)\n",latitude1,longitude1);
  printf("Destination: (%f,%f)\n",latitude2,longitude2);
  printf("Air distance is %f kms\n",distance);

	return 0;
}
