#include "func.h"
/* 
 *
 *SNAKE IN C
 *
 *
*/

struct position pos;
void init();

bool check();

int main(){
 printf("\n\nsnake in C\n\nPARTY EDITION\n\n");
  scanf("%s",NULL);
  srand(time(NULL));
  system("clear");
  init();
}
int score = 1100;
bool check(int x, int y){
  if (x <= 0 || x >= 19 || y <= 0 || y >= 9){
    return false;
  } else {
    return true;
  }
}
bool applecheck(int px,int py,int ax,int ay){
  if (px == ax && py == ay ){
    return true;
  } else {
    return false;
  }
}
int io = 0;
void init(){
 // TODO: make a series of char arrays for the map that are controlled by pos.x // pos.y TODO:
  // update do the same with applex and appley
  char y1 [] = "|******************";
  char y2 [] = "|******************";
  char y3 [] = "|******************";
  char y4 [] = "|******************";
  char y5 [] = "|******************";
  char y6 [] = "|******************";
  char y7 [] = "|******************";
  char y8 [] = "|******************";
  pos.parts = 1;
  pos.x = 9;
  pos.y = 4;
  pos.applex = (rand() % (18 - 1 + 1)) + 1 ;
  pos.appley = (rand() % (8 - 1 + 1)) + 1;
  
  char where;
  bool checker = check(pos.x,pos.y);
  checker = true;
  bool applec = applecheck(pos.x,pos.y,pos.applex,pos.appley);
  while (checker == true){
      
      if (pos.appley == 1){
      y1[pos.applex] = 'A';
    } else if (pos.appley == 2){
      y2[pos.applex] = 'A';
    } else if (pos.appley== 3){
      y3[pos.applex] = 'A';
    } else if (pos.appley == 4){
      y4[pos.applex] = 'A';
    } else if (pos.appley == 5){
      y5[pos.applex] = 'A';
    } else if (pos.appley == 6) {
      y6[pos.applex] = 'A';
    } else if (pos.appley == 7) {
      y7[pos.applex] = 'A';
    } else if (pos.appley == 8) {
      y8[pos.applex] = 'A';}
      
      if (pos.y == 1 ){
      y1[pos.x] = 'S';
    } else if (pos.y == 2){
      y2[pos.x] = 'S';
    } else if (pos.y == 3){
      y3[pos.x] = 'S';
    } else if (pos.y == 4){
      y4[pos.x] = 'S';
    } else if (pos.y == 5){
      y5[pos.x] = 'S';
    } else if (pos.y == 6) {
      y6[pos.x] = 'S';
    } else if (pos.y == 7) {
      y7[pos.x] = 'S';
    } else if (pos.y == 8) {
      y8[pos.x] = 'S';
    }
    
    // long print
    printf("\n");
    printf("%s\n",&y1);
    printf("%s\n",&y2);
    printf("%s\n",&y3);
    printf("%s\n",&y4);
    printf("%s\n",&y5);
    printf("%s\n",&y6);
    printf("%s\n",&y7);
    printf("%s\n",&y8);
     if (pos.y == 1){
      y1[pos.x] = '*';
    } else if (pos.y == 2){
      y2[pos.x] = '*';
    } else if (pos.y == 3){
      y3[pos.x] = '*';
    } else if (pos.y == 4){
      y4[pos.x] = '*';
    } else if (pos.y == 5){
      y5[pos.x] = '*';
    } else if (pos.y == 6) {
      y6[pos.x] = '*';
    } else if (pos.y == 7) {
      y7[pos.x] = '*';
    } else if (pos.y == 8) {
      y8[pos.x] = '*';
    }

    
    
    applec = applecheck(pos.x,pos.y,pos.applex,pos.appley);
    if (applec == true){
       pos.applex = (rand() % (18 - 1 + 1)) + 1 ;
       pos.appley = (rand() % (8 - 1 + 1)) + 1;
       pos.parts += 1;
      applec = false;
    }
    int remindx = pos.x;
    int remindy = pos.y;
    scanf("\n\n%s",&where);
    if (where == 'W' || where == 'w'){
      pos.y--;
    }else if (where == 'S'|| where == 's'){
      pos.y++;
    } else if (where == 'd' || where == 'D'){
      pos.x++;
    } else if (where == 'a' || where == 'A'){
      pos.x--;
    } else if (where == 'E'){
      system("exit");
    }
    else {
      
      printf("\n\n\n\n WHYYYYYYYY");
    } 
    checker = check(pos.x,pos.y);
   
    io++;
    where = ' ';

    system("clear");
    if (pos.parts == 20){
      printf("\n\n YOU WIN! \n\n");
      pos.parts = pos.parts +io;
    
      return;
      break;
    }
  }
  printf("\n\n\n\n you lose\n\n");
  printf("\n\n Press A to try again\n\n");
  pos.parts = pos.parts + io;

  char aa;
  scanf("\n%c",&aa);
  if (aa == 'A' || aa == 'a'){
    io = 0;
    init();
  }
  }
