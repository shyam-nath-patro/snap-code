/* Design a menu-driven ATM machine that manages N fixed accounts. Each account has a unique Account number, PIN, and Balance. The system should allow users to log in, perform transactions, and log out before another user can access the ATM.

Menu Options: Once logged in, a user can perform the following operations based on given inputs (A,B,C,D,E):

A - Login
Input account number and PIN.
Allow access if credentials are correct; otherwise, display a message and ask menu input again.
If a user is already logged in, do not allow login option for another user, display a message and ask menu input again.
B - Check Balance
Display the current balance of the logged-in user.
If no user is logged in, display a message and ask menu input again.
C - Deposit Money
Input an amount to deposit and update the balance accordingly.
If no user is logged in, display a message and show menu again.
D - Withdraw Money
Input an amount to withdraw.
If sufficient balance, deduct the amount; otherwise, show an error, and ask menu input again.
If no user is logged in, display a message and ask menu input again.
E - Logout
Logs out the current user and allows another user to log in.
If no user is logged in, do not allow logout option, display a message and ask menu input again.
F - Exit
Ends the program if no user is logged into the system.
Note:

Only one user can be logged in at a time.
The menu options are case-sensitive.
Options B,C and D should be functional only after a user logs in.
The account balance cannot go below 0.
Incorrect credentials should prompt re-entry for login option.
After each menu operation, the program should prompt the user for the next action.
The program continues running until the user explicitly chooses to exit.
Input Format

The program starts by asking N which represents number of registered users.
Take inputs for N Account Numbers and their respective password and balance. First N lines in the input file contain account details, one per line:
Account Number
PIN
Initial Balance
After successful user entry, the subsequent line contains a sequence of operations (A,B,C,D,E or F) based on following menu:
A. Login
B. Check Balance
C. Deposit Money
D. Withdraw Money
E. Logout
F. Exit
Based on the user’s choice:
Login (A):
If no user is logged in, take the following input:
Account Number
PIN
Deposit (C):
If user is logged in, take the following input:
Amount to deposit
Withdrawal (D):
If user is logged in and if enough balance, take the following input:
Amount to withdraw
Constraints

Number of Accounts (N): 1 ≤ N ≤ 100
Account Number (A): 1 < A < 10^6
PIN (P): 1 < P < 10^4
Balance (B): 0 ≤ B ≤ 10^9
Deposit Amount (D): 1 ≤ D ≤ 10^6
Withdraw Amount (W): 1 ≤ W ≤ 10^6
Output Format

Only print the outputs for the following menu options:

Login (A):
If Account Number and PIN is correct, print "Welcome User [Account Number]"
If Account Number or PIN is incorrect, print "Wrong Credentials!"
If a user is already logged in, print "User [Account Number] is already using the ATM."
Balance Inquiry (B):
If some user is logged in, print "Balance: Rs.[balance]"
If no user is logged in, print "Login first!"
Deposit (C):
If some user is logged in, print the new balance based on given input, "New Balance: Rs.[amount]"
If no user is logged in, print "Login first!"
Withdrawal (D):
If some user is logged in:
If enough balance, deduct the amount based on given input and print the new balance, "New Balance: Rs.[amount]"
If insufficient balance, print "Insufficient balance!"
If no user is logged in, print "Login first!"
Logout (E):
If some user is logged in, print "Logged out successfully."
If no user is logged in, print "No user is currently logged in."
Exit (F):
If some user is logged in, print "Exiting the ATM without logging out is not allowed."
If no user is logged in, print "- Print "Exiting ATM. Thank you!""
If an invalid menu option is selected, print "Invalid choice. Please enter A, B, C, D, E, or F."
  */

#include <stdio.h>

int main()
{
 int in;
 scanf("%d",&in);

 long long acn[100], pin[100], bal[100];

 int i;
 for(i=0;i<in;i++)
 {
    scanf("%lld %lld %lld",&acn[i],&pin[i],&bal[i]);
 }

 int login = -1;
 char ch;

 while(1)
 {
    scanf(" %c",&ch);

    if(ch=='A')
    {
       long long acc, p;
       scanf("%lld %lld",&acc,&p);

       if(login!=-1)
       {
          printf("User %lld is already using the ATM.\n",acn[login]);
           
       }
       else
       {
          int fnd = -1;

          for(i=0;i<in;i++)
          {
             if(acn[i]==acc && pin[i]==p)
             {
                fnd = i;
                 
                break;
                 
             }
              
          }

          if(fnd==-1)
          {
             printf("Wrong Credentials!\n");
          }
          else
          {
             login = fnd;
              
             printf("Welcome User %lld\n",acn[login]);
          }
           
       }
        
        
    }

    else if(ch=='B')
    {
       if(login==-1)
       {
          printf("Login first!\n");
       }
       else
       {
          printf("Balance: Rs.%lld\n",bal[login]);
       }
    }

    else if(ch=='C')
    {
      
        long long x;
       scanf("%lld",&x);

       if(login==-1)
       {
          printf("Login first!\n");}
       else
       {
          bal[login] = bal[login] + x;
          printf("New Balance: Rs.%lld\n",bal[login]);
       }
    }

     
    else if(ch=='D')
    {
        long long w;
       scanf("%lld",&w);

        if(login==-1)
       {
          printf("Login first!\n");
            
       } 
        else if(bal[login] >= w)
       {
          bal[login] = bal[login] - w;
          printf("New Balance: Rs.%lld\n",bal[login]);
            
       }
       else
          printf("Insufficient balance!\n");
    }

    else if(ch=='E')
    {
       if(login==-1)
          printf("No user is currently logged in.\n");
       else
       {
          login = -1;
          printf("Logged out successfully.\n");
       }
    }
     
     

    else if(ch=='F')
    {
        
       if(login!=-1)
       {
           
          printf("Exiting the ATM without logging out is not allowed.\n");
       }
       else
       {
           
          printf("Exiting ATM. Thank you!\n");
           
          break;
       }
    }

    else
    {
       printf("Invalid choice. Please enter A, B, C, D, E, or F.\n");}
 }

 return 0;
}
