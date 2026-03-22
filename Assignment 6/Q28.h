#ifndef Q28_H
#define Q28_H

#include<string>
 using namespace std;
   class AccountHolder{
      
        protected :
                    string  fname , lname, mobile, email;
        
        public :
                void acceptHolder();
                void displayHolder();
             
   };
      
    class savingAccount : public AccountHolder
    {
        private :
                int chequeBookNo;
                float interestRate;
                float minBalance;
        
        public :
                savingAccount();
                void acceptSaving();
                void displaySaving();
    };

    class CurrentAccount : public AccountHolder
    {
        private :
                int transactionsPerDay;
                float interestRate;
                float minBalance;
        
        public :
                CurrentAccount();
                void acceptCurrent();
                void displayCurrent();
    };

    class DematAccount : public AccountHolder
    {
        private :
                string shareName;
                int numShares;
                float buyPrice, sellPrice;
                string buyDate, sellDate;

        public :
                void acceptDemat();
                void displayDemat();
                float calculateaprofitLoss();
    };

#endif