#include<stdio.h>
#include<string.h>
struct user {
    int mno;
    char name[30];
    int bal;
    char kyc;
}user;

void read_data(){
    printf("Name");
    scanf("%d", &user.name);

    printf("Bal");
    scanf("%d", &user.bal);

    printf("Mobile");
    scanf("%s", user.mno);

    printf("Name");
    scanf("%s",user.kyc);
}

void disp() {
    if(user.bal<1000){
    printf("%d\n", user.mno);
    printf("%s\n", user.name);
    printf("%d\n", user.bal);
    printf("%d\n", user.mno);
    }
}
int main(){
    
        struct user users[5];
    for (int i = 0 ; i< 5; i++){
        read_data();
    }
}