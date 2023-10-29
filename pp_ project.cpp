/* Copyright (c) by Akshay Kumar Verma (2023)
    All Rights Reserved..
*/
//Coding Standards Applied...

#include <iostream>
#include <vector>

using namespace std;

// Structure to represent a single category from available 3 categories
struct Category 
{
    string cat1;
    string cat2;
    string cat3;
};
// Structure to represent a subject from available categories
struct Subject
{
    string sub1;
    
}; 
// Function for details of JEE Subject choosen based on input of digit
void viewSubDetailsJ(Subject& sub, int d)
{
    cout << "1: " << sub.sub1 << "\n";
   if(d==0)
   {  
     cout<<"Best books for reference for JEE Physics"<<endl;
       cout<<"1->"<<"Concepts of Physics Vol I and II"<<endl;
        cout<<" "<<".Author->H.C VERMA"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Concept-Physics-Part-1-2018-2019-Session/dp/8177091875/ref=sr_1_1?qid=1698066251&refinements=p_27%3AH+C+VERMA&s=books&sr=1-1"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"2->"<<"Problems in General Physics"<<endl;
        cout<<" "<<".Author->I.E IRODOV"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Problems-General-Physics-IE-Irodov/dp/938812734X/ref=sr_1_3?crid=2BZTKRZRPR5PI&keywords=ie+irodov&qid=1698066533&s=books&sprefix=ie+%2Cstripbooks%2C232&sr=1-3"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"3->"<<"Problems in Physics"<<endl;
        cout<<" "<<".Author->KROTOV"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Science-Everyone-Aptitude-Problem-Physics/dp/9388127404/ref=sr_1_1?crid=PH5MMSCAKIXS&keywords=krotov+physics&qid=1698066672&s=books&sprefix=kro%2Cstripbooks%2C197&sr=1-1"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"4->"<<"Physics Galaxy"<<endl;
        cout<<" "<<".Author->Ashish Arora"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Physics-Galaxy-Volumes-Advanced-Ashish/dp/9356812594/ref=sr_1_1?crid=20RG2UB9GE6AP&keywords=physics+galaxy&qid=1698066745&s=books&sprefix=physics%2Cstripbooks%2C207&sr=1-1"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
    }
  else if(d==1)
  {
     cout<<"Best books for reference for JEE Chemistry"<<endl;
       cout<<"1->"<<"Modern Approach to Chemical Calculations"<<endl;
        cout<<" "<<".Author->R.C Mukherjee"<<endl;
        cout<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Concept-Physics-Part-1-2018-2019-Session/dp/8177091875/ref=sr_1_1?qid=1698066251&refinements=p_27%3AH+C+VERMA&s=books&sr=1-1"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"2->"<<"Concise Inorganic Chemistry"<<endl;
        cout<<" "<<".Author->J.D Lee"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Wileys-Concise-Inorganic-Chemistry-Advanced/dp/9354644201"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"3->"<<"Problems in Physical Chemistry for JEE Mains & Adavnced "<<endl;
        cout<<" "<<".Author->N. Awasthi"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Problems-Physical-Chemistry-Mains-Adavnced/dp/9391065473/ref=sr_1_3?crid=1BX5FA94UJX4L&keywords=n+awasthi+physical+chemistry+jee&qid=1698068892&s=books&sprefix=n+awas%2Cstripbooks%2C206&sr=1-3"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"4->"<<"Advanced Problems in Organic Chemistry"<<endl;
        cout<<" "<<".Author->MS Chouhan"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Advanced-Problems-Organic-Chemistry-JEE/dp/9391065163/ref=sr_1_3?crid=1QEAVOHIMSHAQ&keywords=ms+chauhan+organic+chemistry+jee&qid=1698069032&s=books&sprefix=ms+%2Cstripbooks%2C187&sr=1-3"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
   }
   else if(d==2)
   {
     cout<<"Best books for reference for JEE Maths"<<endl;
       cout<<"1->"<<" Cengage JEE (Advanced) Calculus "<<endl;
        cout<<" "<<".Author->G. Tewani"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Advanced-Calculus-Assessments-Digital-Content/dp/9355735839/ref=sr_1_3?crid=23ACJ4540AQDE&keywords=calculus+jee&qid=1698069292&s=books&sprefix=calculus+je%2Cstripbooks%2C202&sr=1-3"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"2->"<<"Advanced Problems In Coordinate Geometry "<<endl;
        cout<<" "<<".Author->vikas Gupta"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Advanced-Problems-Coordinate-Geometry-Main/dp/9391065341/ref=sr_1_5?crid=2GPERGFFWDO48&keywords=coordinate+geometry+jee&qid=1698069392&s=books&sprefix=coordinate+geometry+jee%2Cstripbooks%2C217&sr=1-5"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"3->"<<"Problems In Algebra For JEE (Main & Advanced)"<<endl;
        cout<<" "<<".Author->Sameer bansal"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Problems-Advanced-Competitive-Entrance-Examinations/dp/B0BNHR34V4/ref=sr_1_14?crid=1X4A9MA6QVHX1&keywords=algebra+jee&qid=1698069463&s=books&sprefix=algebra+jee%2Cstripbooks%2C194&sr=1-14"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"4->"<<"Skills in Mathematics - Trigonometry for JEE Main and Advanced "<<endl;
        cout<<" "<<".Author->Amit M Agrawal"<<endl;
        cout<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Skills-Mathematics-Trigonometry-Main-Advanced/dp/9389204798/ref=sr_1_4?crid=3O33NA9Y1FAD&keywords=trigonometry+jee&qid=1698069562&s=books&sprefix=trigonometry+jee%2Cstripbooks%2C203&sr=1-4"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
   }
}
// Function for details of NEET Subject choosen based on input of digit
void viewSubDetailsN(Subject& sub, int d)
{
    cout << "1: " << sub.sub1 << "\n";
   if(d==0)
   {
     cout<<"Best books for reference for NEET Physics"<<endl;
       cout<<"1->"<<"Concepts of Physics Vol I and II"<<endl;
        cout<<" "<<".Author->H.C VERMA"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Concept-Physics-Part-1-2018-2019-Session/dp/8177091875/ref=sr_1_1?qid=1698066251&refinements=p_27%3AH+C+VERMA&s=books&sr=1-1"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"2->"<<"Objective Physics"<<endl;
        cout<<" "<<".Author->D.C Pandey"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/NEET-Objective-Physics-DC-Pandey/dp/9389204828/ref=sr_1_3?crid=1PDJRRBDERBS9&keywords=objective+physics&qid=1698121275&s=books&sprefix=objective+physics%2Cstripbooks%2C197&sr=1-3"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"3->"<<"Fundamentals of Physics "<<endl;
        cout<<" "<<".Author->Halliday, Resnick, and Walker"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/sspa/click?ie=UTF8&spc=MToxNzg0MTIxNTI0NDA3NjYxOjE2OTgxMjEzMTY6c3BfYXRmOjIwMDIyODUzNzMyOTA2OjowOjo&url=%2FWileys-Halliday-Resnick-Walker-Physics%2Fdp%2F8126598379%2Fref%3Dsr_1_1_sspa%3Fcrid%3D11BTAG6I48J7P%26keywords%3Dfundamentals%2Bof%2Bphysics%2Bby%2Bhalliday%2Bresnick%2Bwalker%26qid%3D1698121316%26s%3Dbooks%26sprefix%3Dfundamenta%252Cstripbooks%252C194%26sr%3D1-1-spons%26sp_csd%3Dd2lkZ2V0TmFtZT1zcF9hdGY%26psc%3D1"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"4->"<<"40 Days of Physics for NEET"<<endl;
        cout<<" "<<".Author->SB Tripathi"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/40-Days-Physics-NEET-Tripathi/dp/931112768X/ref=sr_1_1?crid=ZHYKKTDWL5BW&keywords=40+days+of+physics+for+neet+by+s.b.+tripathi&nsdOptOutParam=true&qid=1698121362&s=books&sprefix=40+days+of+physics+%2Cstripbooks%2C218&sr=1-1"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
    }
  else if(d==1)
  {
     cout<<"Best books for reference for NEET Chemistry"<<endl;
       cout<<"1->"<<"Physical Chemistry"<<endl;
        cout<<" "<<".Author->O P Tandon"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Textbook-Physical-Chemistry-Competitive-Examinations/dp/9394836179/ref=sr_1_3?crid=1QQ40R9AMFOFS&keywords=physical+chemistry+op+tandon&qid=1698121471&s=books&sprefix=physical+chemistry+op+%2Cstripbooks%2C219&sr=1-3"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"2->"<<"Concise Inorganic Chemistry"<<endl;
        cout<<" "<<".Author->J.D Lee"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Wileys-Concise-Inorganic-Chemistry-Advanced/dp/9354644201"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"3->"<<"40 Days Chemistry for NEET"<<endl;
        cout<<" "<<".Author->N. Awasthi"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Days-Crash-Course-NEET-Chemistry/dp/9327191889/ref=sr_1_3?crid=1E3AS0DD31GLN&keywords=40+days+chemistry&qid=1698121662&s=books&sprefix=40+days+chemistry%2Cstripbooks%2C252&sr=1-3"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"4->"<<"Advanced Problems in Organic Chemistry"<<endl;
        cout<<" "<<".Author->MS Chouhan"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Advanced-Problems-Organic-Chemistry-JEE/dp/9391065163/ref=sr_1_3?crid=1QEAVOHIMSHAQ&keywords=ms+chauhan+organic+chemistry+jee&qid=1698069032&s=books&sprefix=ms+%2Cstripbooks%2C187&sr=1-3"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
   }
   else if(d==2)
   {
     cout<<"Best books for reference for NEET Biology"<<endl;
       cout<<"1->"<<" Trueman’s Biology – Vol 1 and Vol 2 "<<endl;
        cout<<" "<<".Author->KM BHATIA"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Truemans-Elementary-Biology-2022-23-Examinations/dp/B0B9CJ8DSX/ref=sr_1_3?crid=3OUKVAXSQQQNF&keywords=trueman+biology&qid=1698121790&s=books&sprefix=trueman+biology%2Cstripbooks%2C200&sr=1-3"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"2->"<<"NCERT at your Fingertips "<<endl;
        cout<<" "<<".Author->MTG"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/sspa/click?ie=UTF8&spc=MToxMTM1MDU3NDMxNTQzNjYxOjE2OTgxMjE4ODA6c3BfYXRmOjIwMTI0NTczMDU1NDk4OjowOjo&url=%2FObjective-NCERT-your-FINGERTIPS-Biology%2Fdp%2F9355555946%2Fref%3Dsr_1_1_sspa%3Fcrid%3D3PQ13RG4V14I3%26keywords%3Dneet%2Bbiology%2Bbook%26qid%3D1698121880%26s%3Dbooks%26sprefix%3Dneet%2Bbiology%2B%252Cstripbooks%252C188%26sr%3D1-1-spons%26sp_csd%3Dd2lkZ2V0TmFtZT1zcF9hdGY%26psc%3D1"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"3->"<<"Tablet Biology"<<endl;
        cout<<" "<<".Author->Hariom Gangwar"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/NCERT-Tablet-Biology-NEET-Mnemonics/dp/9395761806/ref=sr_1_8?crid=3PQ13RG4V14I3&keywords=neet+biology+book&qid=1698121880&s=books&sprefix=neet+biology+%2Cstripbooks%2C188&sr=1-8"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"4->"<<"NEET Exploring Biology "<<endl;
        cout<<" "<<".Author->Sudhakar Banerjee"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Exploring-Biology-Sudhakar-Banerjee-Mahendra/dp/9389204860/ref=sr_1_13?crid=3PQ13RG4V14I3&keywords=neet+biology+book&qid=1698121880&s=books&sprefix=neet+biology+%2Cstripbooks%2C188&sr=1-13"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
    }
}
// Function for details of CLAT Subject choosen based on input of digit
void viewSubDetailsC(Subject& sub, int d)
{
    cout << "1: " << sub.sub1 << "\n";
   if(d==0){
     cout<<"Best books for reference for CLAT English"<<endl;
       cout<<"1->"<<"Objective General English "<<endl;
        cout<<" "<<".Author->N Khurmi"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Objective-General-English-N-KHURMI/dp/8182300258"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"2->"<<"English is Easy"<<endl;
        cout<<" "<<".Author->Chetanand Singh"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/ENGLISH-EASY-CHETANANAND-SINGH-ebook/dp/B07H2VJT92"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"3->"<<"High School English Grammar and Composition"<<endl;
        cout<<" "<<".Author->Wren & Martin"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/School-English-Grammar-Composition-Regular/dp/9352530144"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"4->"<<"CLAT Guide"<<endl;
        cout<<" "<<".Author->Tata McGraw-Hill"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Study-Package-Clat-Llb-Bhardwaj/dp/9351340341"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
    }
  else if(d==1)
   {
     cout<<"Best books for reference for CLAT Quatitaive Aptitude"<<endl;
        cout<<"1->"<<"Data interpretation"<<endl;
        cout<<" "<<".Author->RS AGRAWAL"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://amazon.in/Advanced-Approach-Data-Interpretation/dp/8121913594"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"2->"<<"Fast Track Objective Arithmetic "<<endl;
        cout<<" "<<".Author->Arihant Publications"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"Fast Track Objective Arithmetic by Arihant Publications"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"3->"<<"30 Days Wonder for Maths"<<endl;
        cout<<" "<<".Author->S Chand"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Maths-30-Days-Wonder-3/dp/935283755X"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"4->"<<"Magical Book on Quicker Maths"<<endl;
        cout<<" "<<".Author->N Tyra"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Magical-Book-Quicker-Maths-Tyra/dp/B07X93W2FC"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
    }
   else if(d==2)
   {
     cout<<"Best books for reference for CLAT LEGAL Reasoning"<<endl;
       cout<<"1->"<<"Legal Awareness and Legal Reasoning "<<endl;
        cout<<" "<<".Author->KM BHATIA"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Awareness-Reasoning-2022-2023-Detailed-2020-2021/dp/9354499082"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"2->"<<"Legal Aptitude and Legal Reasoning  "<<endl;
        cout<<" "<<".Author->AP Bhardwaj"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Workbook-2022-2023-Updated-Papers-Pearson/dp/9354498965"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
       cout<<"3->"<<"Important Judgement That Transformed India"<<endl;
        cout<<" "<<".Author->Alex Andrews George"<<endl;
        cout<<" "<<".Ref Link:"<<" "<<"https://www.amazon.in/Important-Judgments-Transformed-Services-Administrative/dp/9355321295"<<endl;
        cout << "----------------------------" << endl;
        cout<<endl;
    }
}
 
// Function to display all available subjects
void displaySubjects(const vector<Subject>& subjects)
{
    for (int i = 0; i < subjects.size(); i++) 
    {
        cout << i + 1 << ". " << subjects[i].sub1 << "\n";
    }
}

// Function to display all categories 
void displayBookResources(const vector<Category>& resources) 
{
    cout << "Available Category:\n";

    for (int i = 0; i < resources.size(); i++)
    {
        cout << i + 1 << ". " << resources[i].cat1 << "\n";
    }
}

// Function to view details of a selected category
void viewBookDetails(Category& book, int d) 
{
    cout << "cat1: " << book.cat1 << "\n";
    if(d==0)
    {
        vector<Subject> diffSubject;
        diffSubject.push_back({"Physics"});
        diffSubject.push_back({"Chemistry"});
        diffSubject.push_back({"Maths"}); 
          displaySubjects(diffSubject);

      int choice;
        cout << "Enter the Subject (Please Enter the Corresponding Digit)&(0 to exit): ";
        cin >> choice;

        if (choice < 1 || choice > diffSubject.size()) 
        {
            cout << "Exiting...\n";
            //break;
        } 
        else 
        {
            d=choice - 1;
            viewSubDetailsJ(diffSubject[d],d);
        }
    }
   else if(d==1)
   {
         vector<Subject> diffSubject;
        diffSubject.push_back({"Physics"});
        diffSubject.push_back({"Chemistry"});
        diffSubject.push_back({"Biology"}); 
         displaySubjects(diffSubject);

     int choice;
        cout << "Enter the Subject(Please Enter the Corresponding Digit) (0 to exit): ";
        cin >> choice;

        if (choice < 1 || choice > diffSubject.size()) 
        {
            cout << "Exiting...\n";
            //break;
        } 
        else 
        {
            d=choice - 1;
             viewSubDetailsN(diffSubject[d],d);
        }
    }
   else if(d==2)
   {
         vector<Subject> diffSubject;
        diffSubject.push_back({"English"});
        diffSubject.push_back({"Quatitaive Aptitude"});
        diffSubject.push_back({"Legal Reasoning"}); 
         displaySubjects(diffSubject);

      int choice;
        cout << "Enter the Subject(Please Enter the Corresponding Digit) (0 to exit): ";
        cin >> choice;

        if (choice < 1 || choice > diffSubject.size()) 
        {
            cout << "Exiting...\n";
            //break;
        } 
        else 
        {
            d=choice - 1;
            viewSubDetailsC(diffSubject[d],d);
        }
    }
}

int main() {
    vector<Category> bookResources;
    vector<Subject> diffSubject;
    cout<<"Hello welcome to the one stop solution for all your need related with resources for JEE NEET and CLAT"<<endl;
      cout << "----------------------------" << endl;
      cout << "----------------------------" << endl;
    cout<<"This interface showcase the best book resources available to prepare for the competitive examinations!!!!"<<endl;
      cout << "----------------------------" << endl;
      cout << "----------------------------" << endl;
    cout<<"The Journey BEGINS !!!!!!!!!!"<<endl;
     cout << "----------------------------" << endl;
    string str;
     cout<<"Enter USERNAME:"<<endl;
     cin>>str;
    // Categories
    bookResources.push_back({"JEE"});
    bookResources.push_back({"NEET"});
    bookResources.push_back({"CLAT"});
    int d;
    while (true) 
    {
        displayBookResources(bookResources);

        int choice;
         cout << "Enter the Category (Please Enter the Corresponding Digit)&(0 to exit): ";
         cin >> choice;
     // Exits loop if any other input is made
        if (choice < 1 || choice > bookResources.size()) 
        {
            cout << "Exiting...\n";
            break;
        } 
        else 
        {
            d=choice - 1;
            viewBookDetails(bookResources[d],d);  // calls the view book details function
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}
 