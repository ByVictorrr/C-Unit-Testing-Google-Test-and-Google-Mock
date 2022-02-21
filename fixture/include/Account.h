//
// Created by delaplai on 2/1/2022.
//

#ifndef C_UNIT_TESTING_GOOGLE_TEST_AND_GOOGLE_MOCK_ACCOUNT_H
#define C_UNIT_TESTING_GOOGLE_TEST_AND_GOOGLE_MOCK_ACCOUNT_H


class Account
{
public:
    Account();
    void deposit(double sum);
    void withdraw(double sum);
    double getBalance() const;
    void transfer(Account &to, double sum);
private:
    double mBalance;
};


#endif //C_UNIT_TESTING_GOOGLE_TEST_AND_GOOGLE_MOCK_ACCOUNT_H
