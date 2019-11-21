#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void main() {
	
	ofstream MyFile("Times.csv");
	int k = 0;
	ifstream Time;
	string vt[20] = { "AVA.csv", "BAH.csv","BOT.csv","CAM.csv", "CAP.csv","CEA.csv","CHA.csv", "COR.csv","CRU.csv","CSA.csv","FLA.csv","FLU.csv","FOR.csv","GOI.csv","GRE.csv","INT.csv", "PAL.csv","SAN.csv","SAO.csv","VAS.csv" };


	while (k < 20) {

		Time.open(vt[k]);

		while (Time.good()) {

			string time;
			string nome;
			string pos;
			string status;
			string sg;


			getline(Time, time, ';');
			getline(Time, nome, ';');
			getline(Time, pos, ';');
			getline(Time, status, ';');
			getline(Time, sg, '\n');

			if (status == "Titular")
				MyFile << time << ';' << nome << ';' << pos << ';' << status << ';' << sg << '\n';
		}
		Time.close();
		k++;
	}

	MyFile.close();
}