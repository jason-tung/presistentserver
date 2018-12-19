#include "pipe_networking.h"


int main() {

  int to_server;
  int from_server;

  from_server = client_handshake( &to_server );
  while(1){
    printf("input: ");
    input_buff = malloc(9999);
    scanf(input_buff, stdin);
    write(from_server, input_buff, 9999);
  }
}
