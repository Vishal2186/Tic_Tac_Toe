#include<iostream>
#include<stdlib.h>

using namespace std;

int i = 1;
char turn = 'O';
char arr[] = {'1','2','3','4','5','6','7','8','9'};
int choies;


int display(){
    system("clear");
    cout<<"\t\t T I C   T A C   T O E "<<endl;
    cout<<"player1 = [X]\nplayer2 = [O]"<<endl;

    for (int i = 0; i < 9; i++)
    { 
       if( i==0 || i==3 || i==6 || i==8){ cout<<"\t\t     |     |     "<<endl;} 
       else if( i==1 || i==4 || i==7){ cout<<"\t\t  "<<arr[i-1]<<"  |  "<<arr[i]<<"  |  "<<arr[i+1]<<"  "<<endl;}
       else{cout<<"\t\t_____|_____|_____"<<endl;}
    }
    
    
return 0;
}

void playerturn(){
    if(turn == 'X'){cout<<"\n\tplayer1 - [X] turn = ";}
   else if(turn == 'O'){cout<<"\n\tplayer2 - [O] turn = ";}
   cin>>choies;
 char v;
    if(turn == 'X'){v = 'X';}
    else{v = 'O';}

      switch (choies)
    {
    case 1: if(arr[0]=='1'){arr[0] = v;}
            else{cout<<"Place is full!!!";if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 2: if(arr[1]=='2'){arr[1] = v;}
            else{cout<<"Place is full!!!";if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 3: if(arr[2]=='3'){arr[2] = v;}
            else{cout<<"Place is full!!!";if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 4: if(arr[3]=='4'){arr[3] = v;}
            else{cout<<"Place is full!!!";if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 5: if(arr[4]=='5'){arr[4] = v;}
            else{cout<<"Place is full!!!";if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 6: if(arr[5]=='6'){arr[5] = v;}
            else{cout<<"Place is full!!!";if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 7: if(arr[6]=='7'){arr[6] = v;}
            else{cout<<"Place is full!!!";if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 8: if(arr[7]=='8'){arr[7] = v;}
            else{cout<<"Place is full!!!";if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    case 9: if(arr[8]=='9'){arr[8] = v;}
            else{cout<<"Place is full!!!";if(turn == 'X'){turn = 'O';}else{turn = 'X';}} break;
    
    default: cout<<"Invalied choies!!!\n"; break;}
    
}
void game_over(){
    display();
    cout<<"\n\tPlayer - ["<<turn<<"] WON!!!";
    }

bool winner(){
    if(arr[0] == arr[1] && arr[1] == arr[2]
    ||arr[3] == arr[4] && arr[4] == arr[5]
    || arr[6] == arr[7] && arr[7] == arr[8]
    || arr[0] == arr[3] && arr[3] == arr[6]
    || arr[1] == arr[4] && arr[4] == arr[7]
    || arr[2] == arr[5] && arr[5] == arr[8]
    || arr[0] == arr[4] && arr[4] == arr[8]
    || arr[2] == arr[4] && arr[4] == arr[6]){cout<<"\nGAME OVER!!!";game_over();return false;
        }
    
  
   else if(
   arr[0]=='1'||
   arr[1]=='2'||
   arr[2]=='3'||
   arr[3]=='4'||
   arr[4]=='5'||
   arr[5]=='6'||
   arr[6]=='7'||
   arr[7]=='8'||
   arr[8]=='9'){return true;}
   else{arr[choies]=turn;display();cout<<"Match Draw!!!";return false;}
}


int main(){
  do{
if(turn=='O'){turn = 'X';}else{turn='O';}
display();
playerturn();
winner();
   i++;
   }
   while (winner());


return 0;}