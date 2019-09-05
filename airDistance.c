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

  double latitudeA = 0;
  double latitudeB = 0;
  double latitude1=0;
  double latitude2=0;
  double difference=0;
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
  if(latitude1>90 || latitude1<-90){
    printf("Please enter the latitude of location A: ");
    scanf("%d, &latitude1");
}
  if(latitude2>90 || latitude2<-90){
    printf("Please enter the latitude of location B: ");
    scanf("%d, &latitude2");
  }


  printf("Please enter the longitude of location A: ");
  scanf("%d, &longitude1");

  prinf("Please enter the longitude of location B: ");
  scanf("%d, &longitude2");

    if(longitude1>180 || longitude1<-180){
      printf("Please enter the longitude of location A: ");
      scanf("%d, &longitude1");
}
    if(longitude2>180 || longitude2<-180){
      prinf("Please enter the longitude of location B: ");
      scanf("%d, &longitude2");
    }

    latitudeA=(latitude1/180)*π;
    latitudeB=(latitude2/180)*π;
    longitudeA=(longitude1/180)*π;
    longitudeB=(longitude2/180)*π;


  difference=longitudeA-longitudeB;


distance = arccos (sin(latitudeA) sin(latitudeB) + cos(latitudeA) cos(latitudeB) cos(difference)) · R;

	printf("Location Distance\n");
  printf("========================\n");
  printf("Origin:      (%f,%f)\n",latitude1,longitude1);
  printf("Destination: (%f,%f)\n",latitude2,longitude2);
  printf("Air distance is %f kms\n",distance);

	return 0;
}
