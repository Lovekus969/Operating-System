#include <stdio.h>

#define MAX_PROC 5   // number of processes

// One mailbox per process
int mailbox[MAX_PROC];
int hasMessage[MAX_PROC] = {0}; // 0 = empty, 1 = full

/* send(P, message)
   P = destination process ID
*/
void send(int P, int message) {

    // BASE CASE: mailbox is empty
    if (hasMessage[P] == 0) {
        mailbox[P] = message;
        hasMessage[P] = 1;
        printf("Message %d sent to process %d\n", message, P);
        return;
    }

    // RECURSIVE CASE: mailbox full → wait
    send(P, message);
}

/* receive(Q)
   Q = receiving process ID
*/
int receive(int Q) {

    // BASE CASE: message available
    if (hasMessage[Q] == 1) {
        int msg = mailbox[Q];
        hasMessage[Q] = 0;
        printf("Process %d received message %d\n", Q, msg);
        return msg;
    }

    // RECURSIVE CASE: mailbox empty → wait
    return receive(Q);
}

int main() {

    int receivedMessage;

    // Process 0 sends a message to Process 1
    send(1, 100);

    // Process 1 receives the message
    receivedMessage = receive(1);

    return 0;
}
