#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

// Constants
const int MAX_CANDIDATES = 10;


void registerCandidates(string candidates[], int& numCandidates);

void startVoting(string candidates[], int votes[], int numCandidates);

void displayResults(string candidates[], int votes[], int numCandidates);

void sortResults(string candidates[], int votes[], int numCandidates);

int main() {
	
    string candidates[MAX_CANDIDATES];
    int votes[MAX_CANDIDATES] = {0}; 
    int numCandidates = 0; 


    cout << "...........................Welcome to the Voting System!........................................\n\n";

    
    registerCandidates(candidates, numCandidates);

   
    startVoting(candidates, votes, numCandidates);

    
    displayResults(candidates, votes, numCandidates);


    cout << "Thank you for using the voting system. Goodbye!\n";

    return 0;
}


void registerCandidates(string candidates[], int& numCandidates) {
    cout << "Enter the number of candidates (max " << MAX_CANDIDATES << "): ";
    cin >> numCandidates;

    if (numCandidates > MAX_CANDIDATES || numCandidates <= 0) {
        cout << "Invalid number of candidates. Try again.\n";
        return;
    }

    cout << "Enter the names of the candidates:\n";
    for (int i = 0; i < numCandidates; i++) {
        cout << "Candidate " << i + 1 << ": ";
        cin >> ws; 
        getline(cin, candidates[i]);
    }
    cout << "Candidates registered successfully!\n";
}


void startVoting(string candidates[], int votes[], int numCandidates) {
    int voterCount = 0;
    int candidateIndex;

    cout << "\nThe candidates are:\n";
    for (int i = 0; i < numCandidates; i++) {
        cout << i + 1 << ". " << candidates[i] << endl;
    }

    cout << "\nVoting starts now!..... Enter 0 to stop voting....\n";

    while (true) {
        cout << "Enter the candidate number to vote for (1-" << numCandidates << "): ";
        cin >> candidateIndex;

        if (candidateIndex == 0) {
            cout << "\nVoting is now closed.\n";
            break;
        }

        if (candidateIndex < 1 || candidateIndex > numCandidates) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        votes[candidateIndex - 1]++;
        voterCount++;
        cout << "Vote recorded! Total votes so far: " << voterCount << endl;
    }
}


void sortResults(string candidates[], int votes[], int numCandidates) {
    for (int i = 0; i < numCandidates - 1; i++) {
        for (int j = 0; j < numCandidates - i - 1; j++) {
            if (votes[j] < votes[j + 1]) {
                
                int tempVote = votes[j];
                votes[j] = votes[j + 1];
                votes[j + 1] = tempVote;

              
                string tempCandidate = candidates[j];
                candidates[j] = candidates[j + 1];
                candidates[j + 1] = tempCandidate;
            }
        }
    }
}


void displayResults(string candidates[], int votes[], int numCandidates) {
    int totalVotes = 0;

    
    for (int i = 0; i < numCandidates; i++) {
        totalVotes += votes[i];
    }

    if (totalVotes == 0) {
        cout << "No votes were cast.\n";
        return;
    }


    sortResults(candidates, votes, numCandidates);

    cout << "\nElection Results:\n\n";
    cout << "Rank  Candidate    Votes   Percentage\n";
    for (int i = 0; i < numCandidates; i++) {
        double percentage = (double(votes[i]) / totalVotes) * 100;
        cout << setw(4) << i + 1 << ". "
             << left << setw(15) << candidates[i]
             << setw(8) << votes[i]
             << fixed << setprecision(2) << percentage << "%\n";
    }

    cout << "\nWinner is: " << candidates[0] << " with " << votes[0] << " votes.\n";
}

