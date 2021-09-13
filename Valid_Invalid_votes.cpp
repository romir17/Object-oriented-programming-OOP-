#include <iostream>
using namespace std;
class Candidate{
    public:
    int candidate_number,votes;
    Candidate(int num){
        candidate_number=num;
        votes=0;
    }
};
int main(){
    int invalid_votes=0,temp;
    Candidate c1(1),c2(2),c3(3),c4(4),c5(5);
    cout<<endl<<"       Welcome to ELECTION "<<endl<<"Remember Only Ballot Number 1,2,3,4,5 are valid "<<endl<<"       All Other INTEGERS are INVALID"<<endl<<"       There are total 15 VOTES"<<endl<<endl<<"***LET THE VOTING BEGIN***"<<endl<<endl<<endl;
    int votes[15];
    for(int i=0;i<5;i++){
        cout<<"Vote Number "<<i+1<<" : ";
        cin>>votes[i];
    }
    for(int i=0;i<5;i++){
        if(votes[i]<1 || votes[i]>5){
            invalid_votes++;
        }
        else{
            switch(votes[i]){
                case 1:
                c1.votes++;
                break;
                case 2:
                c2.votes++;
                break;
                case 3:
                c3.votes++;
                break;
                case 4:
                c4.votes++;
                break;
                case 5:
                c5.votes++;
                break;
            }
        }
    }
    cout<<endl<<"Votes for Candidate 1 are "<<c1.votes;
    cout<<endl<<"Votes for Candidate 2 are "<<c2.votes;
    cout<<endl<<"Votes for Candidate 3 are "<<c3.votes;
    cout<<endl<<"Votes for Candidate 4 are "<<c4.votes;
    cout<<endl<<"Votes for Candidate 5 are "<<c5.votes;
    cout<<endl<<"Invalid Votes are "<<invalid_votes;
    return 0;
}






