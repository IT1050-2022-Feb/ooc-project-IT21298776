#include<iostream>
#include<cstring>
#include<string>

using namespace std;
#define SIZE 2

//Guest class
class Guest{
	protected :
		string guestName;
		string guestEmail;
		
	public :
		Guest();
		Guest(string pguestName, string pguestEmail);
		void displayGuest();		
};

//implementing guest class
Guest::Guest(){}
Guest::Guest(string pguestName, string pguestEmail) {
	guestName = pguestName;
	guestEmail = pguestEmail;
}
void Guest::displayGuest() 
{
	cout<<"Name of the Guest : "<<guestName<<endl;
	cout<<"Email of the Guest : "<<guestEmail<<endl;
}


//Voter class
class Voter{
	private :
		string voterID;
		string voterUsername;
		int voterContactNo;
		int voterAge;
		
	public :
		Voter();
		Voter(string pvoterID, string pvoterUsername, int pvoterContactNo, int pvoterAge);	
		void passwordValidation();
		void usernameValidation();	
		void displayVoter();
};

//implementing Voter class
Voter::Voter(){}
Voter::Voter(string pvoterID, string pvoterUsername, int pvoterContactNo, int pvoterAge){
	voterID = pvoterID;
	voterUsername = pvoterUsername;
	voterContactNo = pvoterContactNo;
	voterAge = pvoterAge;
}
void Voter:: passwordValidation() {}
void Voter:: usernameValidation() {}

void Voter::displayVoter() 
{
	cout<<"Voter ID : "<<voterID<<endl;
	cout<<"Username : "<<voterUsername<<endl;
	cout<<"Contact Number : "<<voterContactNo<<endl;
	cout<<"Age : "<<voterAge<<endl;
}

//Nominee class
class Nominee{
	private :
		string nomineeID;
		string nomineeName;
		string nomineeEmail;
		int nomineeAge;
		
	public :
		Nominee();
		Nominee(string pnomineeID, string pnomineeName, string pnomineeEmail, int pnomineeAge);	
		void nomineeValidation();
		void displayNominee();
};

//implementing Nominee class
Nominee::Nominee(){}
Nominee::Nominee(string pnomineeID, string pnomineeName, string pnomineeEmail, int pnomineeAge){
	nomineeID = pnomineeID;
	nomineeName = pnomineeName;
	nomineeEmail = pnomineeEmail;
	nomineeAge = pnomineeAge;
}
void Nominee:: nomineeValidation() {}

void Nominee:: displayNominee() 
{
	cout<<"Nominee ID : "<<nomineeID<<endl;
	cout<<"Name of the Nominee : "<<nomineeName<<endl;
	cout<<"Email of the Nominee : "<<nomineeEmail<<endl;
	cout<<"Age : "<<nomineeAge<<endl;
}


//Coordinator class
class Coordinator{
	private :
		string coorID;
		string coorName;
		string coorDepartment;
		
	public :
		Coordinator();
		Coordinator(string pcoorID, string pcoorName, string pcoorDepartment);	
		void replyInq();
		void displayCoordinator();
};

//implementing Coordinator class
Coordinator::Coordinator(){}
Coordinator::Coordinator(string pcoorID, string pcoorName, string pcoorDepartment){
	coorID = pcoorID;
	coorName = pcoorName;
	coorDepartment = pcoorDepartment;
}
void Coordinator:: replyInq() {}

void Coordinator:: displayCoordinator() 
{
	cout<<"Coordinator ID : "<<coorID<<endl;
	cout<<"Name of the Coordinator : "<<coorName<<endl;
	cout<<"Coordinating Department : "<<coorDepartment<<endl;
}



//Award class
class Award{
	private :
		int awardNo;
		string awardName;
		
	public :
		Award();
		Award(int pawardNo, string pawardName);	
		void storeAward();
		void displayAward();
};

//implementing Award class
Award::Award(){}
Award::Award(int pawardNo, string pawardName){
	awardNo = pawardNo;
	awardName = pawardName;
}
void Award:: storeAward() {}

void Award:: displayAward() 
{
	cout<<"Award Number : "<<awardNo<<endl;
	cout<<"Name of the award : "<<awardName<<endl;
}


//Inquiry class
class Inquiry{
	private :
		string inqID;
		string inqMsg;
		
	public :
		Inquiry();
		Inquiry(string pinqID, string pinqMsg);	
		void storeInq();
		void displayInquiry();
};

//implementing Inquiry class
Inquiry::Inquiry(){}
Inquiry::Inquiry(string pinqID, string pinqMsg){
	inqID = pinqID;
	inqMsg = pinqMsg;
}
void Inquiry:: storeInq() {}

void Inquiry:: displayInquiry()
{
	cout<<"Inquiry ID : "<<inqID<<endl;
	cout<<"Inquiry Message : "<<inqMsg<<endl;
}

//Feedback class
class Feedback{
	private :
		string feedbackID;
		string feedbackMsg;
		
	public :
		Feedback();
		Feedback(string pfeedbackID, string pfeedbackMsg);	
		void storeFeedback();
		void displayFeedback();
};

//implementing Feedback class
Feedback::Feedback(){}
Feedback::Feedback(string pfeedbackID, string pfeedbackMsg){
	feedbackID = pfeedbackID;
	feedbackMsg = pfeedbackMsg;
}
void Feedback:: storeFeedback() {}

void Feedback:: displayFeedback() 
{
	cout<<"Feedback ID : "<<feedbackID<<endl;
	cout<<"Feedback Message : "<<feedbackMsg<<endl;
}


//Report class
class Report{
	private :
		string reportID;
		
	public :
		Report();
		Report(string preportID);	
		void updateReport();
		void displayReport();
};

//implementing Report class
Report::Report(){}
Report::Report(string preportID){
	reportID = preportID;
}
void Report:: updateReport() {}

void Report:: displayReport() 
{
	cout<<"Report ID : "<<reportID<<endl;
}


//Admin class
class Admin{
	private :
		string adminID;
		string adminName;
		
	public :
		Admin();
		Admin(string padminID, string padminName);	
		void prepareReport();
		void updateSystem();
		void displayAdmin();
};

//implementing Admin class
Admin::Admin(){}
Admin::Admin(string padminID, string padminName){
	adminID = padminID;
	adminName = padminName;
}
void Admin:: prepareReport() {}
void Admin:: updateSystem() {}

void Admin:: displayAdmin() 
{
	cout<<"Admin ID : "<<adminID<<endl;
	cout<<"Admin Name : "<<adminName<<endl;
}

 Guest g1("Hansaka","hansaka@gmail.com");
  Voter v1("V001","hans@1",717593099,21);
  Nominee n1("N001","Shane","Shane@gmail.com",40);
  Coordinator c1("C001","Jagan","IT");
  Award a1(1,"Best Actor");
  Inquiry i1("I001","How to edit my profile?");
  Feedback f1("F01","Good Service");
  Report r1;
  Admin ad1("A01","Kasun");


//Main Program
int main() {
	
  Guest *g;
  g=new Guest("Hansaka","hansaka@gmail.com");
  g->displayGuest();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Voter *v;
  v=new Voter("V001","hans@1",717593099,21);
  v->displayVoter();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Nominee *n;
  n=new Nominee("N001","Shane","Shane@gmail.com",40);
  n->displayNominee();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Coordinator *c;
  c=new Coordinator("C001","Jagan","IT");
  c->displayCoordinator();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Award *a;
  a=new Award(1,"Best Actor");
  a->displayAward();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Inquiry *i;
  i=new Inquiry("I001","How to edit my profile?");
  i->displayInquiry();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Feedback *f;
  f=new Feedback("F01","Good Service");
  f->displayFeedback();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Report *r;
  r=new Report("R001");
  r->displayReport();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Admin *ad;
  ad=new Admin("A01","Kasun");
  ad->displayAdmin();
  cout<<"................................"<<endl;
  cout<<endl;
  
  return 0;
}


