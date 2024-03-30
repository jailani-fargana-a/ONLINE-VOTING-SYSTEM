# ONLINE-VOTING-SYSTEM
Developed an online voting system facilitating secure, convenient, and transparent voting processes,  ensuring accuracy and integrity for democratic elections. 
**Online Voting System**

**Description:**
The Online Voting System is a program designed to facilitate electronic voting. It allows users to cast their votes for different candidates remotely using their ID numbers and passwords. The system maintains a list of eligible voters and their corresponding passwords. It also keeps track of the votes cast for each candidate and provides statistics on the voting process.

**Features:**
- **User Authentication:** Users are required to enter their ID numbers and passwords to verify their identities before casting their votes.
- **Candidate Selection:** Users can choose their preferred candidate from a list of available options, including candidates and NOTA (None Of The Above).
- **Vote Casting:** Once authenticated, users can cast their votes securely through the system.
- **Voting Statistics:** The system provides real-time voting statistics, including the total number of votes cast for each candidate and NOTA.
- **Leading Candidate:** Users can check the leading candidate based on the current vote count.
- **Data Persistence:** The system stores the list of voted IDs in a separate file to ensure data integrity and prevent duplicate voting.
- **User-Friendly Interface:** The system features a simple and intuitive interface for ease of use.

**File Structure:**
- **vote.txt:** Stores the list of eligible voter IDs.
- **votedlist.txt:** Records the IDs of voters who have already cast their votes.
- **README.md:** Provides instructions and information about the Online Voting System.

**Usage:**
1. Compile the program using a C compiler (e.g., gcc).
2. Run the executable file to start the Online Voting System.
3. Follow the on-screen instructions to cast your vote, view voting statistics, or find the leading candidate.
4. Exit the program when finished voting.

**Note:** Ensure that the vote.txt and votedlist.txt files are present in the same directory as the executable file for proper functionality.
