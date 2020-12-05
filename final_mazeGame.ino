
// 2-dimensional array of row pin numbers:
int R[] = {2,7,A5,5,13,A4,12,A2};  
// 2-dimensional array of column pin numbers:
int C[] = {6,11,10,3,A3,4,8,9};   
const int ldrPin = A0; 
  

unsigned char mazes[][8][8] = {
  // Level 1
  {
    {1,1,1,2,1,1,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,0,1,1,0,1,1},
    {1,1,1,1,1,0,1,1},
    {1,0,0,0,0,0,1,1},
    {1,1,1,0,1,1,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,1,3,1,0,0,1},
  },
  // Level 2 
  {
    {1,2,1,1,1,1,1,1},
    {1,0,0,0,1,0,0,1},
    {1,1,1,0,1,1,0,1},
    {1,0,0,0,0,0,0,1},
    {1,0,1,1,0,1,1,1},
    {1,0,1,1,0,1,3,1},
    {1,0,1,0,0,0,0,1},
    {1,1,1,1,1,1,1,1},
  },
  
  // Level 3 
  {
    {3,1,1,1,1,1,1,2},
    {0,0,0,0,0,0,1,0},
    {1,1,0,1,1,0,1,0},
    {1,0,1,1,1,0,1,0},
    {1,0,0,0,0,0,1,0},
    {1,0,1,1,1,1,1,0},
    {1,0,0,0,0,0,1,0},
    {1,1,1,1,1,0,0,0},

  },
  // Level 4
  {
    {2,1,1,1,1,1,1,1},
    {0,0,1,0,0,0,1,1},
    {1,0,0,0,1,0,1,1},
    {1,1,1,1,1,0,1,1},
    {1,0,0,0,0,0,1,1},
    {1,0,1,0,1,1,0,1},
    {1,0,0,0,0,0,0,1},
    {1,1,1,3,1,1,1,1},
  },
    // Level 5
  {
    {3,1,1,2,1,1,1,1},
    {0,0,1,0,1,0,0,1},
    {1,0,1,0,1,1,0,1},
    {1,0,0,0,0,0,0,1},
    {1,0,1,1,1,1,1,1},
    {1,0,1,0,0,0,1,1},
    {1,0,0,0,1,0,0,0},
    {1,1,1,1,1,1,1,0},
  },
    // Level 6
  {
    {1,1,1,1,2,1,1,1},
    {0,0,0,1,0,0,0,1},
    {0,3,0,1,0,1,0,1},
    {0,0,0,1,0,0,0,1},
    {0,1,0,1,1,0,1,1},
    {0,0,0,0,0,0,0,0},
    {0,1,0,1,0,0,1,0},
    {1,1,0,0,0,0,0,0},
  },
    // Level 7
  {
    {3,1,0,0,0,1,1,1},
    {0,1,0,1,0,0,0,1},
    {0,1,0,1,1,1,0,1},
    {0,1,2,1,0,0,0,1},
    {0,1,0,1,1,1,0,1},
    {0,1,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0},
  },
  // Level 8
  {
    {0,0,0,0,0,1,0,1},
    {0,1,0,1,0,0,0,1},
    {1,1,3,1,2,1,0,1},
    {0,1,1,1,0,0,0,1},
    {0,1,0,1,1,1,0,1},
    {0,1,0,1,0,0,0,0},
    {0,1,0,1,0,1,1,0},
    {0,1,0,0,0,1,0,0},
  },
    // Level 9
  {
    {0,0,0,1,1,1,1,1},
    {0,1,0,0,0,0,0,1},
    {1,1,0,1,1,1,0,1},
    {0,1,0,0,0,0,0,1},
    {0,0,0,0,1,2,1,1},
    {0,1,1,0,0,0,0,0},
    {0,0,0,1,0,1,1,0},
    {0,1,0,1,0,1,1,3},
  },
    // Level 10-1
  {
    {1,1,1,1,1,1,1,1}, 
    {1,1,0,0,0,1,0,1}, 
    {0,0,0,1,0,1,0,0}, 
    {0,1,0,1,0,1,1,0}, 
    {0,1,0,0,0,0,0,0},  
    {0,1,1,1,1,1,0,1}, 
    {2,1,1,0,0,0,0,1}, 
    {1,3,0,0,1,0,1,1}, 
  },
    // Level 11 10-2
  {
    {1,4,1,1,1,1,1,1}, 
    {1,2,1,0,0,0,1,3}, 
    {0,0,0,0,1,0,1,0}, 
    {1,1,1,1,1,0,1,0}, 
    {1,0,0,0,0,0,1,0}, 
    {1,0,1,1,1,0,1,0}, 
    {1,0,0,0,1,0,0,0},  
    {1,1,1,1,1,1,1,1},  

  },
    // Level 12 10-3
  {
  {1,1,0,0,0,1,3,1},              
  {4,2,0,1,0,1,0,1},
  {1,1,0,1,0,1,0,1},
  {1,0,0,1,0,1,0,1},
  {1,0,1,1,0,0,0,1},
  {0,0,1,1,0,1,1,1},
  {1,1,1,1,0,0,0,1},
  {1,1,1,1,1,1,0,1},

  },
    // Level 13 10-4
  {
  {1,1,1,1,1,1,1,1},
  {1,0,0,1,0,0,0,1},
  {1,0,1,1,1,1,0,1},
  {1,0,0,0,0,0,0,1},
  {1,0,1,3,0,1,0,1},
  {1,0,1,1,0,1,0,1},
  {1,0,0,0,0,1,2,1},
  {1,1,1,1,1,1,4,1},
  },
  //level 14 GMOV
  {
  {0,1,1,1,1,0,0,1},              
  {1,0,0,0,1,1,1,1},
  {1,0,1,1,1,0,0,1},
  {1,1,1,1,1,0,0,1},
  {1,1,1,1,1,0,0,1},
  {1,0,0,1,1,0,0,1},
  {1,0,0,1,0,1,1,1},
  {1,1,1,1,0,1,1,0},

  },
  /*
  // Level Template
  {
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
  }
  */
};
  
void setup()  
{  
  Serial.begin(9600);
   // iterate over the pins:
  for(int i = 0;i<8;i++)  
  // initialize the output pins:
  {  
    pinMode(R[i],OUTPUT);  
    pinMode(C[i],OUTPUT);  
  }  
  pinMode(ldrPin, INPUT);
}  

int level = 0;
int* lastPos = (int*) malloc(2 * sizeof(int));
int* playerPos = (int*) malloc(2 * sizeof(int));
int* dest = (int*) malloc(2 * sizeof(int));
int TPosx[9] = {4,1,3,4,7,6,3,1,7};
int TPosy[9] = {5,5,1,1,7,0,4,0,4};
int tc = 0; 
void loop()  
{  
  startAndDest();
  Serial.println("Enter W A S D to move:");
  Serial.println("Player will blink at the same time.");
  Serial.println("Try to find hidden treasure using 'light'");
  while(true){
    
//    if(playerPos[0] == dest[0] && playerPos[1] == dest[1]){
//      level++;
//      Clear();
//      break;
//    }

    makeMove();
  }


}  
  
void DisplayPlayer()    
{  
  for(int c = 0; c<8;c++)  
  {  
    digitalWrite(C[c],LOW);//use thr column 
    //loop
    for(int r = 0;r<8;r++)  
    { 
      if(mazes[level][r][c] < 2){
         digitalWrite(R[r],mazes[level][r][c]);
      }

    }  
    delay(1);  
    Clear();  //Remove empty display light
  }  
  

  
} 
void DisplayMaze()    
{  
  for(int c = 0; c<8;c++)  
  {  
    digitalWrite(C[c],LOW);//use thr column 
    //loop
    for(int r = 0;r<8;r++)  
    { 
      if(mazes[level][r][c]<=3){
        digitalWrite(R[r],mazes[level][r][c]);
      }
    }  
    delay(1);  
    Clear();  //Remove empty display light
  }  
}

void DisplayTreasure()    
{ 
  for(int c = 0; c<8;c++)  
  {  
    digitalWrite(C[c],LOW);//use thr column 
    //loop
    for(int r = 0;r<8;r++)  
    { 
      if(mazes[level][r][c]==1 || mazes[level][r][c]==5){
        digitalWrite(R[r],mazes[level][r][c]);
      }
    }  
    delay(1);  
    Clear();  //Remove empty display light
  }  
}

void startAndDest(){
  for(int c = 0; c < 8; c++){
    
    for(int r = 0; r < 8; r++){
      if(mazes[level][r][c] == 2){
       
        playerPos[0] = r;
        playerPos[1] = c;
        //Serial.print(r);
        //Serial.println(c);
      }
      else if(mazes[level][r][c] == 3){
        dest[0] = r;
        dest[1] = c;
        //Serial.print(r);
       // Serial.println(c);
      }
    }
  
  }


}


void process(char playerMove){
    startAndDest();
    int curx = playerPos[0];
    int cury = playerPos[1];
    int prex = curx;
    int prey = cury;
    
    if(playerMove == 'w'){
      mazes[level][ curx ][ cury ] = 0; 
      curx--;
    }
    else if(playerMove == 'a'){
      mazes[level][ curx ][ cury] = 0; 
      cury--;
    }
    else if(playerMove == 's'){
      mazes[level][ curx ][ cury ] = 0; 
      curx++;
    }
    else if(playerMove == 'd'){
      mazes[level][ curx ][ cury ] = 0; 
      cury++;
    }

    if(mazes[level][ curx ][ cury ] == 5){
      TPosx[level] = 99;
      TPosy[level] = 99;
      tc++;
      mazes[level][ curx ][ cury ] = 2;
    }
    
    //use in big maze
    else if(mazes[level][ curx ][ cury ] == 4){
      //mark the pervious level place
      mazes[level][ playerPos[0] ][ playerPos[1] ] = 2;
      level--;
      Clear();
    }    
    else if(mazes[level][ curx ][ cury ] == 3){
      //mark the last position player stay on the last map, only got use in the 4x4 matrix maze.
      if(level == 12){
        Serial.println("Game Over,you escape the maze");
        Clear();
        level++;
      }
      else if(level==8 && tc != 9){
        Clear();
        level = 13;
        Serial.println("Game Over,Try to collect all the hidden treasure to enter the final maze.");
        Serial.println("Restart the arduino to play again.");
      }
      else if(level==8 && tc == 9){
        mazes[level][ prex ][ prey ] = 2;
        level++;
        Clear();
      }
      else{
        level++;
        Clear();
      }
    }    
    else if((curx < 0 || curx > 7 || cury < 0 || cury > 7) || (mazes[level][ curx ][ cury ] != 0)){
      int curx = prex;
      int cury = prey;
      mazes[level][ curx ][ cury ] = 2;
      Serial.println("Invalid move");
    }
    else{
      mazes[level][ curx ][ cury ] = 2;
    }



    
    Serial.print(prex);
    Serial.println(prey);
    Serial.println(tc);
}

int makeMove(){
  char incomingByte = 0;
  while(Serial.available() == 0){
    for(int i = 0 ; i < 20 ; i++)       
    {  
      DisplayPlayer(); //display player's position  (from start)                
    }  
    for(int i = 0 ; i < 20 ; i++)         
    {     
      DisplayMaze();                  
    }//Display the maze
    //Serial.println(analogRead(ldrPin));
    if(analogRead(ldrPin) > 700 && TPosx[level] < 9 && mazes[level][TPosx[level]][TPosy[level]] != 2){
      for(int i = 0 ; i < 20 ; i++)         
      { 
        mazes[level][TPosx[level]][TPosy[level]]=5;    
        DisplayTreasure();                  
      }//Display the maze 
    }
    else if(mazes[level][TPosx[level]][TPosy[level]] != 2){mazes[level][TPosx[level]][TPosy[level]]=0;}  
  }//Don't go to next instruction until receive new inputs.
  char playerMove = Serial.read();
  process(playerMove);  
  while(Serial.available()){incomingByte = Serial.read();}
}

  
void Clear()                        
{  
  for(int i = 0;i<8;i++)  
  {  
    digitalWrite(R[i],LOW);  
    digitalWrite(C[i],HIGH);  
  }  
}  
