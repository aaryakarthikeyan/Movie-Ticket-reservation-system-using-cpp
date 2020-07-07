#include<iostream>
#include<fstream>
#include<cstring>
#include<time.h>
#include<conio.h>
#include<cstdlib>
#include<bits/stdc++.h> 
using namespace std;
char fname[20]="file3.txt";
char file_name[20]="tic.txt";

struct record
{
 	char name[30],code[15],date[10],price[10],genre[20],rating[10];
 };
 

class movie
{
             public: void pack(record r);
	            record unpack(char a[]);
	            void insertmovie();
	            void viewallmovie();
	            void modifymovie();
	            void findmovie();
	            void bookticket();
	            void alltransactions();
	            void delete_ticket();
};
void movie::delete_ticket()
{
		char fn[20]="tic.txt";
	ifstream m;
	m.open(fn);
	
	if(!m.is_open())
	{
		exit(EXIT_FAILURE);
	}
	
	char word[50];
	m>>word;
	
	cout << "\n=============================================<<BOOKED TICKETS>>========================================================\n\n";	
    
	
	cout << "\n ======================================================================================================================";
	cout<<  "\n|BOOKED_DAY| |MOVIE_NAME|   |CUST_NAME| |PHONE|     |PRICE||TICK_TYPE||NO_TICKETS||TOTAL_AMT|";
	cout << "\n ======================================================================================================================\n";
	
	
int d;

while(m.good())	
{
	d=0;
	
	while(d<8){	
	cout<<word<<"\t";
	m>>word;
	d++;
}

cout<<"\n";	
}	
}
void movie::alltransactions()
{
		char fn[20]="tic.txt";
	ifstream m;
	m.open(fn);
	
	if(!m.is_open())
	{
		exit(EXIT_FAILURE);
	}
	
	char word[50];
	m>>word;
	
	cout << "\n=============================================ALL TRANSACTIONS==========================================================\n\n";	
    
	
	cout << "\n ======================================================================================================================";
	cout<<  "\n|BOOKED_DAY| |MOVIE_NAME|   |CUST_NAME| |PHONE|     |PRICE||TICK_TYPE||NO_TICKETS||TOTAL_AMT|";
	cout << "\n ======================================================================================================================\n";
	
	
int d;

while(m.good())	
{
	d=0;
	
	while(d<8){	
	cout<<word<<"\t";
	m>>word;
	d++;
}

cout<<"\n";	
}
}

void movie::bookticket()
{
		fstream fp;
 	char code[15],buff[100];
 	int i,j;
 	record s;
 	
 		fp.open(fname,ios::in);
     	if(fp==NULL)
     	{
	 	cout<<"\nCannot open file";
		exit(0);
              }
 	
	cout<<"ENTER THE MOVIES RELEASE DATE:";
		cin>>code;
			
	cout << "\n===================================AVAILABLE MOVIES ARE========================================================\n\n";	
    
	
	cout << "\n ==============================================================================================================";
	cout<<  "\nMOVIE_NAME\tMOVIE_CODE\tRELEASE_DATE\tTICKET_PRICE";
	cout << "\n ==============================================================================================================\n";
	
     	i=0;

   	while(1)
   	{
   		 fp.getline(buff,100,'*');
       		if(fp.eof())break;
       		s=unpack(buff);
       		if(strcmp(s.date,code)==0)
		{
	  	 cout<<s.name<<"\t"<<s.code<<"\t\t"<<s.date<<"\t"<<s.price<<endl;
	 	}
}
       
		 

string  scode,cname,cp,type,td,time;
char t,z;
int ta,tp,num,u;

ofstream myfile;
myfile.open("tic.txt",ios::out|ios::app);

	cout<<"\nENTER PURCHASE DATE(TODAYS DATE): \t";
		 cin>>td;
		 myfile<<td<<" ";
	 cout<<"\nENTER THE MOVIE NAME:\t";
		 cin>>scode;
		 myfile<<scode<<" ";
		 cout<<"\nSELECT MOVIE TIMINGS:\n <PRESS.1> 10:00 AM\n <PRESS.2> 2:00 PM\n <PRESS.3> 5:00 PM\n <PRESS.4>7:00 PM\n";
		 cout<<"\n\n>::::::::::::::::::::::::::::::::::::::::::::::::::::::::MOVIE TIMINGS:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	  	 cout<<"    __________________________________________________________________________________\n";
		 cout<<"\n||<PRESS.1> 10:00 AM|  |<PRESS.2> 2:00 PM|  |<PRESS.3> 5:00 PM|  |<PRESS.4>7:00 PM||\n";
		 cout<<"   __________________________________________________________________________________\n\n";
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ENTER YOUR CHOICE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
		 cin>>u;
		 switch(u){
		 	case 1:time="AT 10:00 AM";
		 			break;
		 	case 2:time="AT 02:00 PM";
		 			break;
		 	case 3:time="AT 5:00 PM";
		 			break;
		 	case 4:time="AT 07:00 PM";
		 			break;
		 }
		 cout<<"\nENTER CUSTOMER NAME: \t";
		 cin>>cname;
		 myfile<<cname<<" ";
		 cout<<"\nENTER PHONE: \t";
		 cin>>cp;
		 myfile<<cp<<" ";
		 cout<<"\nENTER EACH TICKET AMOUNT: \t";
		 cin>>tp;
		 myfile<<tp<<" ";
		 	cout<<"\n\n>::::::::::::::::::::::::::::::::::::::::::::::::::::::::TYPE OF SEATING:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	  		cout<<"    ________________________________________________________________\n";
			 cout<<"\n|PRESS <<P-PLATINUM CLASS>>  <<G-GOLDEN CLASS>>  <<NORMAL CLASS>>|\n";
			 cout<<"   ________________________________________________________________\n\n";
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ENTER YOUR CHOICE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
		 cin>>t;
		 switch(t)
		 {
		 	case 'p':cout<<"\n*********************YOU HAVE SELECTED THE PLATINUM CLASS*********************************\n";
		 			type="PLATINUM";
		 			 myfile<<type<<" ";
		 			cout<<"\nENTER NUMBER OF TICKETS:\t";
		 			cin>>num;
		 			myfile<<num<<" ";
		 			ta=num*3*tp;
		 			myfile<<ta<<"\n";
		 			break;
		 			
		 	case 'g':cout<<"\n*********************YOU HAVE SELECTED THE GOLDEN CLASS**********************************\n";
		 			type="_GOLDEN_";
		 			 myfile<<type<<" ";
		 			cout<<"\nENTER NUMBER OF TICKETS:\t";
		 			cin>>num;
		 			myfile<<num<<" ";
		 			ta=num*2*tp;
		 			 myfile<<ta<<"\n";
		 			break;
		 	case 'n':cout<<"\n*********************YOU HAVE SELECTED THE NORMAL CLASS*********************************\n";
		 			type="_NORMAL_";
		 			 myfile<<type<<" ";
		 			cout<<"\nENTER NUMBER OF TICKETS:\t";
		 			cin>>num;
		 			myfile<<num<<" ";
		 			ta=num*1*tp;
		 			 myfile<<ta<<"\n";
		 			break;
		 	default: cout<<"\nSORRY WRONG OPTION\n";
		 }
		 
		  
         cout<<"PRINT THE TICKET? (Y/N) \n";
					cin>>z;
					system("CLS");   
      if(z=='y'){
    cout<<"\n\t\t\t _____________________________________________________________________________";
    cout<<"\n\t\t\t||===========================================================================||";
	cout<<"\n\t\t\t||:::::::::::::TICKET BOOKED SUCCESSFULLY TICKET DETAILS ARE:::::::::::::::::||";
	cout<<"\n\t\t\t||===========================================================================||\n";
	cout<<"\n\t\t\t||---------------------------------------------------------------------------||\t";
	cout<<"\n\t\t\t||TICKET BOOKED DATE:\t"<<td;
	cout<<"\n\t\t\t||---------------------------------------------------------------------------||\t";
	cout<<"\n\t\t\t||MOVIE NAME:\t"<<scode;
	cout<<"\n\t\t\t||---------------------------------------------------------------------------||\t";
	cout<<"\n\t\t\t||MOVIE TIMINGS:\t"<<time;
	cout<<"\n\t\t\t||---------------------------------------------------------------------------||\t";
	cout<<"\n\t\t\t||CUSTOMER NAME:\t"<<cname;
	cout<<"\n\t\t\t||---------------------------------------------------------------------------||\t";
	cout<<"\n\t\t\t||CUSTOMER PHONE NUMBER:\t"<<cp;
	cout<<"\n\t\t\t||---------------------------------------------------------------------------||\t";
	cout<<"\n\t\t\t||EACH TICKET PRICE:\t"<<tp;
	cout<<"\n\t\t\t||---------------------------------------------------------------------------||\t";
	cout<<"\n\t\t\t||TICKET CLASS:\t"<<type;
	cout<<"\n\t\t\t||---------------------------------------------------------------------------||\t";
	cout<<"\n\t\t\t||NUMBER OF TICKETS BOUGHT:\t"<<num;
	cout<<"\n\t\t\t||---------------------------------------------------------------------------||\t";
	cout<<"\n\t\t\t||TOTAL AMOUNT TO BE PAYED:\t"<<ta;
	cout<<"\n\t\t\t ____________________________________________________________________________\n\n";	
}
	myfile.close();      	
}

void movie ::pack(record r)
{
             fstream fp;
             fp.open(fname,ios::out|ios::app);
             if(fp==NULL)
            {
		cout<<"\nCannot open file";
		
		exit(0);
             }
             char buff[100];
             strcpy(buff,r.name);
             strcat(buff,"|");
             strcat(buff,r.code);
             strcat(buff,"|");
             strcat(buff,r.date);
             strcat(buff,"|");
             strcat(buff,r.price);
             strcat(buff,"|");
             strcat(buff,r.genre);
             strcat(buff,"|");
             strcat(buff,r.rating);
             strcat(buff,"|*");
             fp<<buff<<endl;
             fp.close();
}

record movie::unpack(char buff[])
{
	record r;
	int i=0,j=0;
	while(buff[j]!='|')
	      r.name[i++]=buff[j++];
	r.name[i]='\0';
	i=0;
	j++;
	while(buff[j]!='|')
	      r.code[i++]=buff[j++];
	r.code[i]='\0';
	i=0;
	j++;
	while(buff[j]!='|')
	      r.date[i++]=buff[j++];
	r.date[i]='\0';
	i=0;
	j++;
	while(buff[j]!='|')
	      r.price[i++]=buff[j++];
	r.price[i]='\0';
	i=0;
	j++;
	while(buff[j]!='|')
	      r.genre[i++]=buff[j++];
	r.genre[i]='\0';
	i=0;
	j++;
	while(buff[j]!='|')
	      r.rating[i++]=buff[j++];
	r.rating[i]='\0';
	return(r);
}



void movie::insertmovie()
{
record r;
     	cout<<"\nENTER MOVIE NAME: ";
     	cin>>r.name;
     	cout<<"\nENTER MOVIE CODE: ";
     	cin>>r.code;
     	cout<<"\nENTER RELEASE DATE: ";
     	cin>>r.date;
     	cout<<"\nENTER TICKET PRICE: ";
     	cin>>r.price;
     	cout<<"\nENTER GENRE: ";
     	cin>>r.genre;
		cout<<"\nENTER RATINGS: ";
     	cin>>r.rating;     	
     	pack(r);
}

void movie::viewallmovie()
{
 	fstream fp;
   	char buff[100];
   	record r;
     	fp.open(fname,ios::in);
     	if(fp==NULL)
       	{
		cout<<"\nCannot open file";
		
		exit(0);
       	}	
     	//cout<<"\nThe movie database is";
     	
     	
    cout << "\n ==============================================================================================";
	cout<<  "\nMOVIE_NAME\tMOVIE_CODE\tRELEASE_DATE\tTICKET_PRICE\tGENRE\t\tRATING";
	cout << "\n ==============================================================================================\n";
     	while(1)
     	{
     	 	fp.getline(buff,100,'*'); 
       		if(fp.eof())break;
       		r=unpack(buff);
       	cout<<r.name<<"\t"<<r.code<<"\t\t"<<r.date<<"\t"<<r.price<<"\t\t"<<r.genre<<"\t\t"<<r.rating<<endl;
              }
     	fp.close();
     	return;
}


void movie ::modifymovie()
{
             fstream fp;
     	char code[15],buff[100];
     	int i,j,d,k;
     	record s[100];
     	record p[100];
     	fp.open(fname,ios::in);
     	if(fp==NULL)
             {
		cout<<"\nCannot open file";
		
		exit(0);
             }
             cout<<"\nENTER THE MOVIE CODE TO BE MODIFIED: ";
     	cin>>code;
 	i=0;
   	while(1)
   	{
       		fp.getline(buff,100,'*');
       		if(fp.eof())break;
       		s[i]=unpack(buff);
       		i++;
       }
   	for(j=0;j<i;j++)
             {
       		if(strcmp(s[j].code,code)==0)
		{
	  		cout << "\n \t\t\t===============================================================";
			cout << "\n \t\t\t::::::::::::VALUES OF THIS MOVIE RECORD ARE::::::::::::::::::::";
			cout << "\n \t\t\t===============================================================\n";
	  		cout<<"\t\t\t|MOVIE_NAME::\t"<<s[j].name;
	  		cout<<"\n\t\t\t|MOVIE_CODE::\t"<<s[j].code;
	  		cout<<"\n\t\t\t|RELEASE_DATE::\t"<<s[j].date;
	  		cout<<"\n\t\t\t|TICKET_PRICE::\t"<<s[j].price;
	  		cout<<"\n\t\t\t|GENRE::\t"<<s[j].genre;
			cout<<"\n\t\t\t|RATING::\t"<<s[j].rating;	  
					
	  		cout<<"\n\n>::::::::::::::::::::WHAT DO YOU WANT TO CHANGE?:::::::::::::::::::::\n\n";
	  		cout<<" ____________________________________________________________________________________________________________________________________\n\n";
	  		cout<<"||PRESS<1.MOVIE NAME>|  |PRESS<2.MOVIE CODE>|  |PRESS<3.RELEASE DATE>|  |PRESS<4.TICKET PRICE>|  |PRESS<5.GENRE>|  |PRESS <6.RATING>||\n";
			cout<<"_____________________________________________________________________________________________________________________________________\n\n" ;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ENTER YOUR CHOICE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
	  		
			  cin>>d;
	  		switch(d)
	  		{
			case 1: 
	  		        cout<<"\nENTER NEW MOVIE_NAME:\t ";
	  		        cin>>s[j].name;
	  		        strcpy(s[j].code,s[j].code);
	  		        strcpy(s[j].date,s[j].date);
	  		        strcpy(s[j].price,s[j].price);
	  		        strcpy(s[j].genre,s[j].genre);
	  		        strcpy(s[j].rating,s[j].rating);
	  		        break;
	  		case 2:
			  		cout<<"\nENTER NEW MOVIE_CODE:\t ";
	  				cin>>s[j].code;
	  		        strcpy(s[j].name,s[j].name);
	  		        strcpy(s[j].date,s[j].date);
	  		        strcpy(s[j].price,s[j].price);
	  		        strcpy(s[j].genre,s[j].genre);
	  		        strcpy(s[j].rating,s[j].rating);
	  				break;
	  		case 3:
	  				cout<<"\nRELEASE_DATE:\t ";
	  				cin>>s[j].date;
	  		        strcpy(s[j].code,s[j].code);
	  		        strcpy(s[j].name,s[j].name);
	  		        strcpy(s[j].price,s[j].price);
	  		        strcpy(s[j].genre,s[j].genre);
	  		        strcpy(s[j].rating,s[j].rating);
	  				break;
	  		case 4:
	  				cout<<"\nTICKET_PRICE:\t ";
	  				cin>>s[j].price;
	  		        strcpy(s[j].code,s[j].code);
	  		        strcpy(s[j].date,s[j].date);
	  		        strcpy(s[j].name,s[j].name);
	  		        strcpy(s[j].genre,s[j].genre);
	  		        strcpy(s[j].rating,s[j].rating);
	  				break;
	  		case 5:
	  				cout<<"\nGENRE:\t ";
	  				cin>>s[j].genre;
	  		        strcpy(s[j].code,s[j].code);
	  		        strcpy(s[j].date,s[j].date);
	  		        strcpy(s[j].price,s[j].price);
	  		        strcpy(s[j].name,s[j].name);
	  		        strcpy(s[j].rating,s[j].rating);
	  				break;
	  		case 6:
	  				cout<<"\nRATING: \t";
	  				cin>>s[j].rating;
	  		        strcpy(s[j].code,s[j].code);
	  		        strcpy(s[j].date,s[j].date);
	  		        strcpy(s[j].price,s[j].price);
	  		        strcpy(s[j].genre,s[j].genre);
	  		        strcpy(s[j].name,s[j].name);
	  				break;
	  		default: cout<<"SORRY WRONG OPTION\n";
	  				break;
	  	}
	break;
	}
}	
   	 fp.close();
  	 fstream fd;
 	 fd.open(fname,ios::out|ios::trunc);
 if(fd==NULL)
     	{
      	  	cout<<"\nCannot open file";
      		exit(0);
     	 }
   	for(j=0;j<i;j++)
      		pack(s[j]);
   	fd.close();
}
void movie::findmovie()
{
 	fstream fp;
 	char buff[1000];
 	char code[45],e;
 	int i,j,m;
 	record s;
 	do{
	 
      	fp.open(fname,ios::in);
     	if(fp==NULL)
     	{
	 	cout<<"\nCannot open file";
		exit(0);
              } 
        cout<<"\n\n>::::::::::::::::::::::HOW TO DO WANT TO SEARCH FOR A RECORD?:::::::::::::::::::::::::::::::::::\n\n";
	  	cout<<" __________________________________________________________________________________________________\n\n";
	  	cout<<"||PRESS<1.BASED ON MOVIE NAME>  |  |PRESS<2.BASED ON MOVIE CODE>|  |PRESS<3.BASED ON RELEASE DATE>||\n";
		cout<<"||PRESS<4.BASED ON TICKET PRICE>|  |PRESS<5.BASED ON GENRE>     |  |PRESS <6.BASED ON RATING>     ||\n";
		cout<<"___________________________________________________________________________________________________\n\n" ;
		cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ENTER YOUR CHOICE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
     	cin>>m;
     	i=0;
     	
	
     	switch(m)
     	{
		 
   		case 1:   					
   				cout<<"ENTER THE MOVIE NAME TO BE SEARCHED:\t";
   				cin>>code;
   				cout << "\n===================================SEARCHED MOVIES ARE========================================================\n\n";
				cout << "\n ==============================================================================================";
				cout<<  "\nMOVIE_NAME\tMOVIE_CODE\tRELEASE_DATE\tTICKET_PRICE\tGENRE\t\tRATING";
				cout << "\n ==============================================================================================\n";
     			while(1)
     		{
     	 	fp.getline(buff,100,'*'); 
       		if(fp.eof())break;
       		s=unpack(buff);
       			if(strcmp(s.name,code)==0){
       		cout<<s.name<<"\t"<<s.code<<"\t\t"<<s.date<<"\t"<<s.price<<"\t\t"<<s.genre<<"\t\t"<<s.rating<<endl;
              }
          }
          fp.close();
                break;
                
    case 2:
   			cout<<"ENTER THE MOVIE CODE OF THE MOVIE RECORD TO BE SEARCHED:\t";
   			cin>>code;
   			cout << "\n===================================SEARCHED MOVIES ARE========================================================\n\n";
	cout << "\n ==============================================================================================";
				cout<<  "\nMOVIE_NAME\tMOVIE_CODE\tRELEASE_DATE\tTICKET_PRICE\tGENRE\t\tRATING";
				cout << "\n ==============================================================================================\n";
     			while(1)
     		{
     	 	fp.getline(buff,100,'*'); 
       		if(fp.eof())break;
       		s=unpack(buff);
       			if(strcmp(s.code,code)==0){
       		cout<<s.name<<"\t"<<s.code<<"\t\t"<<s.date<<"\t"<<s.price<<"\t\t"<<s.genre<<"\t\t"<<s.rating<<endl;
              }
          }
          fp.close();
                break;
    case 3:
   			cout<<"ENTER THE MOVIE RELEASE DATE OF THE MOVIE RECORD TO BE SEARCHED:\t";
   			cin>>code;
   			cout << "\n===================================SEARCHED MOVIES ARE========================================================\n\n";
	cout << "\n ==============================================================================================";
				cout<<  "\nMOVIE_NAME\tMOVIE_CODE\tRELEASE_DATE\tTICKET_PRICE\tGENRE\t\tRATING";
				cout << "\n ==============================================================================================\n";
     			while(1)
     		{
     	 	fp.getline(buff,100,'*'); 
       		if(fp.eof())break;
       		s=unpack(buff);
       			if(strcmp(s.date,code)==0){
       		cout<<s.name<<"\t"<<s.code<<"\t\t"<<s.date<<"\t"<<s.price<<"\t\t"<<s.genre<<"\t\t"<<s.rating<<endl;
              }
          }
	 		fp.close();
                break;
                
    case 4:
   			cout<<"ENTER THE TICKET PRICE OF THE MOVIE RECORD TO BE SERACHED:\t";
   			cin>>code;
   			cout << "\n===================================SEARCHED MOVIES ARE========================================================\n\n";
	cout << "\n ==============================================================================================";
				cout<<  "\nMOVIE_NAME\tMOVIE_CODE\tRELEASE_DATE\tTICKET_PRICE\tGENRE\t\tRATING";
				cout << "\n ==============================================================================================\n";
     			while(1)
     		{
     	 	fp.getline(buff,100,'*'); 
       		if(fp.eof())break;
       		s=unpack(buff);
       			if(strcmp(s.price,code)==0){
       		cout<<s.name<<"\t"<<s.code<<"\t\t"<<s.date<<"\t"<<s.price<<"\t\t"<<s.genre<<"\t\t"<<s.rating<<endl;
              }
          }
	 		fp.close();
                break;
    case 5:
   			cout<<"ENTER THE GENRE OF THE MOVIE TO BE SEARCHED:\t";
   			cin>>code;
   			cout << "\n===================================SEARCHED MOVIES ARE========================================================\n\n";
	cout << "\n ==============================================================================================";
				cout<<  "\nMOVIE_NAME\tMOVIE_CODE\tRELEASE_DATE\tTICKET_PRICE\tGENRE\t\tRATING";
				cout << "\n ==============================================================================================\n";
     			while(1)
     		{
     	 	fp.getline(buff,100,'*'); 
       		if(fp.eof())break;
       		s=unpack(buff);
       			if(strcmp(s.genre,code)==0){
       		cout<<s.name<<"\t"<<s.code<<"\t\t"<<s.date<<"\t"<<s.price<<"\t\t"<<s.genre<<"\t\t"<<s.rating<<endl;
              }
          }
			fp.close();
                break;
                
        case 6:
   			cout<<"ENTER THE RATING OF THE MOVIE TO BE SEARCHED:\t";
   			cin>>code;
   			cout << "\n===================================SEARCHED MOVIES ARE========================================================\n\n";
		cout << "\n ==============================================================================================";
				cout<<  "\nMOVIE_NAME\tMOVIE_CODE\tRELEASE_DATE\tTICKET_PRICE\tGENRE\t\tRATING";
				cout << "\n ==============================================================================================\n";
     			while(1)
     		{
     	 	fp.getline(buff,100,'*'); 
       		if(fp.eof())break;
       		s=unpack(buff);
       			if(strcmp(s.rating,code)==0){
       		cout<<s.name<<"\t"<<s.code<<"\t\t"<<s.date<<"\t"<<s.price<<"\t\t"<<s.genre<<"\t\t"<<s.rating<<endl;
              }
          }
			fp.close();
                break;    
           }
       	  cout<<"HAPPY WITH THE SEARCH? (Y/N)";
       	  cin>>e;
       	  system("CLS");
}while(e=='n');
}


struct users
{
	string username;
	string pswd;

} obj1[2];

	void delete_line(const char *file_name, int n) 	
	{ 
    // open file in read mode or in mode 
    ifstream is(file_name); 
  
    // open file in write mode or out mode 
    ofstream ofs; 
    ofs.open("temp.txt", ofstream::out); 
  
    // loop getting single characters 
    char c; 
    int line_no = 1; 
    while (is.get(c)) 
    { 
        // if a newline character 
        if (c == '\n') 
        line_no++; 
  
        // file content not to be deleted 
        if (line_no != n) 
            ofs << c; 
    } 
  
    // closing output file 
    ofs.close(); 
  
    // closing input file 
    is.close(); 
  
    // remove the original file 
    remove(file_name); 
  
    // rename the file 
    rename("temp.txt", file_name); 
} 

int main()
{
	cout<<"\n\t\t\t\t---------------------------------------------------------------------------------------------------------------------------------- ";           
cout<<"\n\t\t\t\t          __             __    _____    __      __ _____   __   __   __                ___    ___        ___  _____  ___           ";
cout<<"\n\t\t\t\t   |\\ /| |  | \\     / | |        |   | |   | / |     |    |  | |  | |  | | / | |\\   | |      |    \\   / |       |   |     |\\ /|    "; 
cout<<"\n\t\t\t\t   | v | |  |  \\   /  | |__      |   | |   |/  |__   |    |__| |  | |  | |/  | | \\  | | __   |___  \\ /  |___    |   |__   | V |    "; 
cout<<"\n\t\t\t\t   |   | |  |   \\ /   | |        |   | |   |\\  |     |    |  | |  | |  | |\\  | |  \\ | |   |      |  |       |   |   |     |   |    "; 
cout<<"\n\t\t\t\t   |   | |__|    V    | |__      |   | |__ | \\ |__   |    |__| |__| |__| | \\ | |   \\| |___|   ___|  |    ___|   |   |___  |   |    \n"; 
cout<<"\n\t\t\t\t---------------------------------------------------------------------------------------------------------------------------------- \n"; 
	ifstream in("login.txt");//in is file object
		int q,s;
	for(int i=0;i<2;i++)
	{
		in >> obj1[i].username;
		in >> obj1[i].pswd;
	}
	
 	int ch;
 	 movie obj;
     
     back: 
    
	string un;
	char pw[15];//authentication is on the basis of password
	
	cout <<"\n\t\t\t\t\t\t\t\t ......................WELCOME...................."<<endl;
	
	{
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	cout << "\n\t\t\t\t\t\t\t\t _________________________________________________";
	cout << "\n\t\t\t\t\t\t\t\t|   CURRENT DATE (DAY/MONTH/YEAR):\t"<<timePtr->tm_mday<<"/"<<timePtr->tm_mon<<"/"<<timePtr->tm_year + 1900 <<"  |";
	cout << "\n\t\t\t\t\t\t\t\t|-------------------------------------------------|";
	cout << "\n\t\t\t\t\t\t\t\t|   CURRENT TIME (HOURS/MIN/SEC): \t"<< timePtr->tm_hour<<"/"<< timePtr->tm_min<<"/"<<timePtr->tm_sec<<"  |";
	cout << "\n\t\t\t\t\t\t\t\t|_________________________________________________|";
	}
	cout << "\n\t\t\t\t\t\t\t\t\t _________________________________";
	cout << "\n\t\t\t\t\t\t\t\t\t|---------------------------------|";
	cout << "\n\t\t\t\t\t\t\t\t\t|:::MOVIE TICKET BOOKING SYSTEM:::|";
	cout << "\n\t\t\t\t\t\t\t\t\t|---------------------------------|";
	cout << "\n\t\t\t\t\t\t\t\t\t|---------------------------------|";
	cout << "\n\t\t\t\t\t\t\t\t\t|::::::::ADMIN LOGIN PAGE:::::::::|";
	cout << "\n\t\t\t\t\t\t\t\t\t|_________________________________|\n";
	cout << "\n\t\t\t\t\t\t\t\t\t|ENTER USER NAME:\t";
	getline(cin, un);

cout << "\n\t\t\t\t\t\t\t\t\t|ENTER PASSWORD:\t";
	for(int i=0;i<6;i++)
	{
		pw[i]=getch();
		cout<<"*";
	}

	cout<<endl;	

	bool islogin = false;
	for (int i = 0; i < 2; i++)
	{
		if (pw == obj1[i].pswd && un==obj1[i].username)
		{

			cout << "\t\t\t\t\t\t\t\tadmin login successful"<<endl;
			islogin = true;
			break;

		}
		else
		{
			islogin = false;
		}
	}
	if (!islogin)
	{
		cout << "\n\t\t\t\t\t\t\t\tSorry invalid password" << endl;
		cout << "\t\t\t\t\t\t\t\tDo you want to try again\n \t\t\t\t\t\t\t\t1.yes\n \t\t\t\t\t\t\t\t2.no\t";
		int opt;
		cin>>opt;
		if (opt == 1)
		{
			system("CLS");  //to clear the screen
			while (getchar() != '\n');	//to flush the previously stored un and pw is deleted
			goto back;
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\tthank you \n";
		}
	}

	system("CLS");
	cout<<"\n\t\t\t\t\t\t\t\t\t..........LOGGING IN SUCESSFUL..............";
	

again:
	int choice; 
	char c;
	 cout<<"\n\t\t\t\t\t\t\t\t--------------------------------------------------------- "; 
cout<<"\n\t\t\t\t\t\t\t\t|W         W  EEEEE  L       CCCC   OOO   M     M  EEEEE |";
cout<<"\n\t\t\t\t\t\t\t\t| W	  W   E      L      C      O   O  M M M M  E     |";
cout<<"\n\t\t\t\t\t\t\t\t|  W  W  W    EEEEE  L      C      O   O  M  M  M  EEEEE |";
cout<<"\n\t\t\t\t\t\t\t\t|   W   W     E      L      C      O   O  M     M  E     |";
cout<<"\n\t\t\t\t\t\t\t\t|   W   W     EEEEE  LLLLL   CCCC   OOO   M     M  EEEEE |";
cout<<"\n\t\t\t\t\t\t\t\t---------------------------------------------------------\n\n";
do
{
	cout << "\t\t\t =============================================\n";
	cout << "\t\t\t|  ADMIN MOVIE TICKET BOOKING MAIN PAGE       |\n";
	cout << "\t\t\t|=============================================|\n";
    cout << "\t\t\t|Press <1> INSERT A MOVIE                     |\n";
	cout << "\t\t\t|Press <2> VIEW ALL MOVIES                    |\n";
	cout << "\t\t\t|Press <3> MODIFY MOVIE RECORD                |\n";
	cout << "\t\t\t|Press <4> FIND MOVIE RECORD                  |\n";
	cout << "\t\t\t|Press <5> DELETE MOVIE RECORD                |\n";
	cout << "\t\t\t|Press <6> BOOK MOVIE TICKET                  |\n";
	cout << "\t\t\t|Press <7> VIEW ALL TICKET TRANSACTIONS       |\n";
	cout << "\t\t\t|Press <8> CANCEL TICKET                      |\n";
	cout << "\t\t\t|Press <0> EXIT                               |\n";
	cout << "\t\t\t|_____________________________________________|\n\n";
	  	cout<<"\nENTER UR CHOICE: ";
	  	cin>>ch;
	  	switch(ch)
	  	{
			 case 1:
			 		cout << "\n ============================================";
					cout << "\n   PLEASE ENTER THE MOVIE DETAILS ";
					cout << "\n ============================================";
			 		obj.insertmovie();
			 		cout << "\n ============================================";
					cout << "\n   MOVIE DETAILS ENTERED SUCCESSFULLY  ";
					cout << "\n   THANK YOU ";
					cout << "\n ============================================\n";
					cout<<"\n\nDo you want to continue(y/n)\n";
					cin>>c;
					system("CLS");
			            break;
		 	case 2:obj.viewallmovie();
		 		cout<<"\n\nDo you want to continue(y/n)\n";
					cin>>c;
					system("CLS");
			            break;
		 	case 3:obj.modifymovie(); 
		 		cout<<"\n\nDo you want to continue(y/n)\n";
					cin>>c;
					system("CLS");
			            break;
		 	case 4: obj.findmovie();
		 		cout<<"\n\nDo you want to continue(y/n)\n";
					cin>>c;
					system("CLS");
			            break;
			case 5:obj.viewallmovie();
					cout<<"\n\nENTER THE TICKET ROW THAT YOU WANT TO DELETE:\t";
					cin>>s;
					delete_line("file3.txt", s); 
					cout << "\n ============================================";
					cout << "\n   MOVIE DELETED SUCCESSFULLY  ";
					cout << "\n   THANK YOU ";
					cout << "\n ============================================\n";
					cout<<"\n\nDo you want to continue(y/n)\n";
					cin>>c;
					system("CLS");
					break;	            
			case 6:obj.bookticket();
					cout<<"\n\nDo you want to continue(y/n)\n";
					cin>>c;
					system("CLS");
					break;
			case 7:obj.alltransactions();
					cout<<"\n\nDo you want to continue(y/n)\n";
					cin>>c;
					system("CLS");
					break;
			case 8:obj.delete_ticket();
					cout<<"\n\nENTER THE TICKET ROW THAT YOU WANT TO DELETE:\t";
					cin>>q;
					delete_line("tic.txt", q); 
					cout << "\n ============================================";
					cout << "\n   TICKET CANCELLED SUCCESSFULLY  ";
					cout << "\n   THANK YOU ";
					cout << "\n ============================================\n";
					cout<<"\n\nDo you want to continue(y/n)\n";
					cin>>c;
					system("CLS");
					break;
			 default:exit(0);
		}
} while(c=='y');
	   
	   return 0; 
}

