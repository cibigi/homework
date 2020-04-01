//CHRISTIAN B. GIANNARELLI, 3^BINF, 9/11/2019
//INPUT >> IL NUMERO DI VOTI, I VOTI
//OUTPUT << LA MEDIA DEI VOTI, IL NUMERO DI VOTI <6

#pragma once

#include <iostream>
#include <string>
using namespace std;

struct SubjectName {
	string name;
	string * nameLocation = &name;
};

struct Subject {
	string name;
	short int grade;
};

struct Report {
	string name;
	string surname;
	
	Subject subjectsList[];
	unsigned short int suff;
	unsigned short int insuff;
	
	unsigned short int average;
};

//VARIABILI UNIVERSALI
short int nP= 0, n= 0;

void print(Report reportsToPrint[]) {
	for(int i= 0; i<nP; i++) {
		cout << "---------------------------------------------" << endl << endl;
		cout << "Pagella di " << reportsToPrint[i].name << " " << reportsToPrint[i].surname << endl
		     << "Media=  " << reportsToPrint[i].average << endl
		     << "Sufficienze= " << reportsToPrint[i].suff << endl
		     << "Insufficienze= " << reportsToPrint[i].insuff << endl
		     << "Voti: " << endl << endl;
		
		for(int i1; i1<n; i1++) {
			cout << i1 << ") " << reportsToPrint[i].subjectsList[i1].name << endl << "   Voto:" << reportsToPrint[i].subjectsList[i1].grade << endl << endl;
		}
	}
}

int main() {
	cout << "Utility creazione guidata pagelle." << endl;
	
	//INPUT
	do {
		cout << "Inserire numero di pagelle:" << endl;
		cin >> nP;
		cout << "Inserire numero di voti:" << endl;
		cin >> n;
	} while(nP<=1 || n<=1);
	
	Report reports[nP];
	string subjectsNames[n];
	
	for(int i1= 1; i1<= n; i1++) {
		cout << "Nome materia " << i1 << ":" << endl;
		cin >> subjectsNames[i1];
	}
	
	cout << "Nomi inseriti." << endl << endl;
	
	//INPUT DEI NOMI, COGNOMI, VOTI, CALCOLO DELLE MEDIE E CONTATORI SUFF. E INSUFF. 
	for(int i= 0; i<nP; i++) {
		cout << "Nome alunno:" << endl;
		cin >> reports[i].name;
		
		cout << "Cognome alunno:" << endl;
		cin >> reports[i].surname;
		
		int sum= 0;
		
		for(int i1= 1; i1<= n; i1++) {
			reports[i].subjectsList[i1].name= subjectsNames[i1];
			
		    do {
		        cout << "Voto in " << reports[i].subjectsList[i1].name << ":" << endl;
		        cin >> reports[i].subjectsList[i1].grade;
	        } while(reports[i].subjectsList[i1].grade<0 || reports[i].subjectsList[i1].grade>10);
	    
		    sum+=reports[i].subjectsList[i1].grade;
		
		    if(reports[i].subjectsList[i1].grade<6) {
			    reports[i].insuff++;
		    } else {
		    	reports[i].suff++;
			}
	    }
	    
	    reports[i].average= sum/n;
	}
	
	print(reports);
	
	return 0;
}
