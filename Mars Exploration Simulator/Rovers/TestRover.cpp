//#include<iostream>
//#include"Rover.h"
//#include"EmergencyRover.h"
//#include"MountainousRover.h"
//#include"PolarRover.h"
//using namespace std;
//void printData(Rover* r)
//{
//	cout << "Basic info :-" << endl;
//	cout << "ID : " << r->getID() << endl;
//	cout << "speed : " << r->getSpeed() << endl;
//	cout << "missions for checkup : " << r->getCheckupReqMissions() << endl;
//	cout << "days for checkup : " << r->getCheckupReqDays() << endl << endl;
//
//	cout << "Missions Info:-" << endl;
//	cout << "mission id : " << r->getMissionID() << endl;
//	cout << "mission Duration : " << r->getMissionDuration() << endl;
//	cout << "mission Location : " << r->getMissionLocation() << endl;
//	cout << "mission CheckupEndDay : " << r->getMissionOrCheckupEndDay() << endl << endl;
//
//	cout << "Other info:-" << endl;
//	cout << "mission number : " << r->getMissionNumber() << endl;
//	cout << "Need checkup ? " << (r->getneedCheckup() ? "Yes" : "NO") << endl << endl;
//	cout << "============================================================" << endl;
//
//}
//int main()
//{
//	Rover r0(20, 4, 8);
//	EmergencyRover r2(20, 4, 8);
//	PolarRover r3(20, 4, 8);
//	MountainousRover r1(20, 4, 8); //done testing ID and  3 rovers
//	printData(&r1); //done
//	r1.assignCheckup();
//	r1.decreaseSpeedToHalf();      //done dec speed testing and its effect on the time  
//	printData(&r1); //done
//
//	r1.assignMission(2, 432, 10000);
//	printData(&r1);
//	r1.assignMission(2, 432, 10000);
//	r1.assignMission(2, 432, 10000);
//	r1.assignMission(2, 432, 10000);
//	r1.assignMission(2, 432, 10000);
//	r1.assignMission(2, 432, 10000);
//	r1.assignMission(2, 432, 10000);
//	r1.assignMission(98, 2432, 15430);
//	printData(&r1);
//	r1.assignCheckup();
//	printData(&r1);
//	r1.assignMission(198, 223432, 1512430);
//	printData(&r1);
//
//	return 0;
//}
///*
//* constructor   done
//* assignCheckup done
//* assignMission done
//* ALL getters   done
//*/