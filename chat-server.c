#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <string.h>
#include <pthread.h>

#define PORT 8080
#define MAX_CLIENTS 100

int main(){
    int client_sockets[MAX_CLIENTS];
    int client_count = 0;
    pthread_mutex_t client_list_lock = PTHREAD_MUTEX_INITIALIZER;

    void broadcastMessage(char *message, int sender_sock);


}

void broadcastMessage(char *message, int sender_sock){
    pthread_mutex_lock(&client_list_lock);
    for(int i = 0; i < client_count; i++)
}