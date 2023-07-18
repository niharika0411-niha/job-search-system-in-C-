#include"header.h"
#include"function.h"
#include<vector>
#include<set>
class profile
{
private:
	 string fn;
	 string ln;
	 string college;
public:
      float cpi;
      bool iitb;
      bool iitm;
      bool btech;
      bool mtech;
      bool internship;
      int ninternship;
      int profession;
      int roll;
      void outputProfile(void)
      {
             cout<<"\n---------PROFILE---------\n" ; 
             cout<<"ALLOTED ROLL-NO - \t"<<roll<<"\n" ;
             cout<<"NAME  -  \t "<<fn<<" "<<ln<<"\n" ;
             cout<<"COLLEGE - \t"<<college<<"\n";
             cout<<"CPI -  \t\t"<<cpi<<"\n";
             if(internship)
              {
              cout<<"NUMBER OF INTERNSHIP DONE - \t"<<ninternship<<"\n";
              } 
              
             if(btech && iitb)
             {
               cout<<"GRADUATED - \t B.Tech\n";
               cout<<"FROM IIT    -\t\t YES\n";    
               }
             else if(btech)
             {
               cout<<"GRADUATED - \t B.Tech\n";
               cout<<"FROM IIT    -\t\t NO\n";    
             }
             else
             {
               
              cout<<"GRADUATED - \t NO\n";    
             }
             if(mtech && iitm)
             {
                 cout<<"POST-GRADUATED - \t M.Tech\n";
                 cout<<"FROM IIT    -\t\t YES\n";    
             }
             else if(mtech)
             {
               cout<<"POST-GRADUATED - \t M.Tech\n";
               cout<<"FROM IIT    -\t\t NO\n";    
             }
             else
             {
               
              cout<<"POST-GRADUATED - \t NO\n";
             }
             if(profession==1)
              {
                 cout<<"Applying for -\t DATA SCIENTIST.\n";
              
              } 
              else
              {
                     
              cout<<"Applying for -\t SOFTWARE DEVELOPMENT ENGINEER\n";
              }
              
      
      }
      void createp(void)
      {
		 cout<< " \nPlease Enter Your  First Name\t"; 
		 string s,p,c;
		 
		 cin >> s;
		 fn=s;
		 cout<< " \nPlease Enter Your Last Name\t"; 
		 cin >> p;
		 ln= p;
		 cout<< "\nPlease Enter Your CPI\t";
		 float x;
		 cin>> x;
		 cpi=x;
		 bool g,m,ib,im;
		 cout<< "\nPlease Enter Your College Name (without spaces) \t";
		 cin>>c;
		 college=c;
		 
		 cout<< "\nGraduated(B.Tech) '0' for  No '1' for Yes\t";
		 cin>> g;
		 btech=g;   
		 if(btech)
		 {
			 cout<< "\nGraduated(B.Tech) from IIT '0' for  No '1' for Yes\t";
			 cin>>ib;
			 iitb=ib;
			 cout<< "\nPost-Graduated(M.Tech) '0' for  No '1' for Yes\t";
			 cin>> m;
			 mtech=m;
		 }
		 else
		 {
			 mtech=0;
			 iitb=0;
		 } 
		 if(mtech)
		 {
			 cout<< " \nPost-Graduated(M.Tech) from IIT '0' for  No '1' for Yes\t";
			 cin>>im;
			 iitm=im; 
		 }
		 else
		 {
			iitm=0; 
		  }
		 cout <<"\nHave you done any Intership ? '0' for  No '1' for Yes\t";
		 bool i;
		 int ni;
		 cin>>i ;
		 internship=i;
		 if(internship){
			 cout <<"\nPlease Enter The Number Of Internships Done(in integer)\t";
			 cin >> ni;
			 ninternship=ni;
			 }
		 else
		 {
			 ninternship=0;
		 }
		  
		  
	  }
	 
	
   
};
class vacancy
{
  public:
          int type;
          float salary;
          string location;
          string company;
          char cpicutoff;
          bool iitbr;
          int sn;
          bool alloted;
          void job(void)
          {
           if(!alloted)
           {
            cout<<sn<<">\n";
            cout<<"COMPANY NAME -\t\t"<<company<<"\n";
            cout<<"TYPE OF VACANCY-\t";
            if(type==1)
            {
            cout<<" DATA SCIENTIST\n";
            }
            else
            {
	    cout<<"SOFTWARE DEVELOPMENT\n";
	    }
            
            cout<<"SALARY PER MONTH-\t\t"<<"Rs."<< salary<<"-/\n";
            
            cout<<"LOCATION OF JOB IN INDIA( Name of the city) \t";  
            cout<<"-"<<location<<"\n";        
          }
	}	  

                 
};
int Profession(void)
{
	cout<< "\n Choose the profession you are interested in  \n";
	cout<<"1. Data Scientist\n";
	cout<<"2. Software Development\n";
	int n;
	cin>> n;
	return n;
}

int main()
{
    
    int n;
    int a,b;
    profile candidate[10];
    vacancy job[6];
    job[0].sn=1;
    job[0].type=1;
    job[0].salary=55000;
    job[0].location="Delhi";
    job[0].company="Amazon";
    job[0].cpicutoff=8;
    job[0].iitbr=1;
    job[0].alloted=0;
    job[1].sn=2;
    job[1].type=1;
    job[1].salary=40000;
    job[1].location="Gaurgaon";
    job[1].company="Adobe";
    job[1].cpicutoff=7;
    job[1].iitbr=0;
    job[1].alloted=0;
    job[2].sn=3;
    job[2].type=1;
    job[2].salary=80000;
    job[2].location="Bangaluru";
    job[2].company="Google";
    job[2].cpicutoff=8;
    job[2].iitbr=1;
    job[2].alloted=0;
    job[3].sn=4;
    job[3].type=2;
    job[3].salary=85000;
    job[3].location="Delhi";
    job[3].company="Flipkart";
    job[3].iitbr=1;
    job[3].cpicutoff=8;
    job[3].alloted=0;
    job[4].sn=5;
    job[4].type=2;
    job[4].salary=30000;
    job[4].location="Bangaluru";
    job[4].company="Wipro";
    job[4].cpicutoff=7;
    job[4].iitbr=0;
    job[4].alloted=0;
    job[5].sn=6;
    job[5].type=2;
    job[5].salary=90000;
    job[5].location="Bangaluru";
    job[5].company="Google";
    job[5].cpicutoff=9;
    job[5].iitbr=1;
    job[5].alloted=0;
    //adj[u].push_back(make_pair(v, wt));
    vector<pair<int, int>>eligible[10];
    pair<int,vector<int>>apply;
    vector<int>rn[6];
    set<int>roll;
    int i=0;
    cout<< "----------------------------------------";
    cout<<"\n........Welcome To Job Finder.......\n ";
    cout<< "----------------------------------------";
    int v;
    int r;
    while (1)
    {
        printf("\n-----CHOOSE APPROPRIATE OPTIONS-----\n");
        printf("\nENTER 1- Create profile\n");
        printf("ENTER 2- Print Profile \n");
        printf("ENTER 3- Vacancies Available\n");
        printf("ENTER 4- Check Eligibility for a vacancy.\n");
        printf("ENTER 5- Print all the Eligible vacancies.(compulsary if you want to apply for any vacancy)\n");
        printf("ENTER 6- Apply for a vacancy.\n");
        printf("ENTER 7- Job Result \n");
        printf("ENTER 8- exit\n");
       cin>> n;
        if(n==8){break;}
        switch (n)
        {
        case 1:
             candidate[i].createp();
	     candidate[i].roll=i+100;
	     cout<<"\n Roll no Alloted - "<<candidate[i].roll<<"\n";
	     candidate[i].profession=Profession();
             i++;
             break;
        case 2:
            cout<<"Enter Roll no to See the Profile\n";
            cin>>v;
            candidate[v-100].outputProfile();
            break;
        case 3:
            cout<<"\n------- Vacancies Available --------\n";
            for(int i=0;i<6;i++)
            {
            job[i].job();
            cout<<"\n";}
            cout<<":::::::::Please note down the SERIAL NUMBER of the vacancies in order to apply later:::::::::\n";
            break;
        case 4:
            cout<<"ENTER SERIAL NUMBER OF THE VACANCY (one vacancy at a time)\n";
            cin>>v;
            cout<<"ENTER ALLOTED ROLL-NO TO CHECK YOUR ELIGIBILITY\n";
            cin>>r;
            if(job[v-1].alloted==0)
            {
            if(candidate[r-100].profession==job[v-1].type)
            {
            if(candidate[r-100].cpi>=job[v-1].cpicutoff &&  candidate[r-100].iitb>=job[v-1].iitbr)
            {cout<<"________ELIGIBLE_______\n";}
            else
            {cout<<"**********NOT ELIGIBLE*********\n";}
            }
            else
            {cout<<"[Vacancy Type and Candidate Profession doesn't match]\n";}
            }
            else
            {cout<<"***This vacancy is no longer available because a candidate have been selected.***\n";}
            break;
        case 5:
            cout<<"ENTER YOUR ALLOTED ROLL-NO TO PRINT ALL THE VACANCIES YOU ARE ELLIGIBLE IN-\n";
            cin>>r;
            cout<<"________ELIGIBLE VACANCIES_______\n";
            for(int i=0;i<6;i++)
            {
            if(candidate[r-100].profession==job[i].type)
            {
            if(candidate[r-100].cpi>=job[i].cpicutoff &&  candidate[r-100].iitb>=job[i].iitbr)
             {
             job[i].job();
             eligible[r-100].push_back(make_pair(i, 1));
             }
            else
             {
               eligible[r-100].push_back(make_pair(i, 0));
              }
            }
             else
             {
                eligible[r-100].push_back(make_pair(i, 0));
             }
            }
            break;
        case 6:
              cout<<"ENTER SERIAL NUMBER OF THE VACANCY TO APPLY (one vacancy at a time):\n";
              cin>>v;
              cout<<"ENTER YOUR ALLOTED ROLL-NO: \n";
              cin>>r;
              if(job[v-1].alloted==0)
               {
                if(eligible[r-100].capacity()==0)
                {cout<<"PLease check elligibility of the candidate by following command 5\n";}
                for (auto it = eligible[r-100].begin(); it!=eligible[r-100].end(); it++)
		 {   
                  if(it->first==(v-1) && it->second==0)
			{
                          cout<<"---Error - Application Rejected\t not elligible----\n";
                        }
                  else if(it->first==(v-1) && it->second==1)
                  {
                    if(rn[v-1].size()<=1)
                    {
                    cout<<" -----Application Submitted----\n"; 
                    
                    rn[v-1].push_back(r-100);
                    
                    cout<<"<"<<rn[v-1].size()<<">"<<"\n";
                    
                    }
                    else
                       {
                          cout<<"-----Try again !!! --------This vacancy is not accepting application anymore\n";
                       }
                      }
                    }
                 }
                 else
                 {cout<<"This vacancy is no longer available because a candidate have been selected.\n";}
                
              break;
        case 7:
               cout<<"ENTER YOUR ALLOTED ROLL-NO TO CHECK YOUR JOB RESULT\n";
               cin>> r;
               cout<<"ENTER SERIAL NUMBER OF THE VACANCY YOU APPLIED IN\n";
               cin>>v;
               if(job[v-1].alloted==0)
               {
                   if(rn[v-1].size()>1)
                 {
                    auto it =rn[v-1].begin();
                    a=*it;
                    it++;
                    b=*it;
                    if(candidate[a].cpi>candidate[b].cpi)
                   {
                      if( a==(r-100))
                      { cout<<"Congratulations!!!!!!! you are hired for the job!\n";
                        job[v-1].alloted=1;
                      } 
                   }
                   else if(candidate[a].cpi<candidate[b].cpi)
                   {cout<<"---SORRY YOUR APPLICATION IS REJECTED FOR THIS VACANCY!!!--\n";}
                 else
                 { 
                 if(candidate[a].iitb>candidate[b].iitb)
                 {
                   if( a==(r-100))
                   { cout<<"Congratulations!!!!!!! you are hired for the job!\n";
                     job[v-1].alloted=1;
                   } 
                 }
                 else if(candidate[a].iitb<candidate[b].iitb)
                 {cout<<"---SORRY YOUR APPLICATION IS REJECTED FOR THIS VACANCY!!!--\n";}
                 else
                {
                 if(candidate[a].iitm>candidate[b].iitm)
                 {
                   if( a==(r-100))
                   { cout<<"Congratulations!!!!!!! you are hired for the job!\n";
                     job[v-1].alloted=1;
                   } 
                 }
                 else if(candidate[a].iitm<candidate[b].iitm)
                 {cout<<"---SORRY YOUR APPLICATION IS REJECTED FOR THIS VACANCY!!!--\n";}
                 else
                 {
                     if(candidate[a].internship>candidate[b].internship)
                    {
                         if( a==(r-100))
                          { cout<<"Congratulations!!!!!!! you are hired for the job!\n";
                            job[v-1].alloted=1;
                          } 
                    }
                    else if(candidate[a].internship==candidate[b].internship)
                     {
                         if(candidate[a].ninternship>candidate[b].ninternship)
                         {
                               if( a==(r-100))
                                    { cout<<"Congratulations!!!!!!! you are hired for the job!\n";
                                      job[v-1].alloted=1;
                                    } 
                         }
                         else
                         {cout<<"---SORRY YOUR APPLICATION IS REJECTED FOR THIS VACANCY!!!--\n";}
                     }
                     else
                     {cout<<"---SORRY YOUR APPLICATION IS REJECTED FOR THIS VACANCY!!!--\n";}
                  }
                 }
                }
               }
               else if(rn[v-1].size()==1)
               {
                 for (auto it = eligible[r-100].begin(); it!=eligible[r-100].end(); it++)
                 {
                   if(it->first==(v-1) && it->second==1)
                   {
                      cout<<"Congratulations!!!!!!! you are hired for the job!\n";
                      job[v-1].alloted=1;
                   
                   }   
                 
                 }
               
               }
               else
               {
               cout<<"Error--- Please first apply for the job!!!\n";
               }
              }
              else
              {
                cout<<"This vacancy is no longer available because a candidate have been selected.\n";
              }
               break;  
       default:
            printf("invalid");
        }
    }

    return 0;
}
