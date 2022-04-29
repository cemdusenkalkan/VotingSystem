#include <stdio.h>
#include<string.h>
#include <stdbool.h>

int
main ()
{
  
  long int userinput;
  char str2[20];
  int value;
  int i;
  int x;
  int j;
  long int usernames[] = {20211701101 , 20201701026 , 20211701039 , 20201701024};
  char passwords[][10] = { "hossam" , "zeynep" , "cem" , "samed"};
  bool votes[4]; // to save the votes of the users
  bool did_vote[4]; //to save if a user has voted (i couldn't implement this feature, I tried to reach you on email but couldn't so hopefully it is implemented in the next part of the project)
  for (i = 0; i < 8; ++i){ //to repeat the code
  printf ("\npls enter your username: ");
  scanf ("%ld", &userinput);
  bool user_found = 1; //boolean variable to check if the user has been found, set as true in the beginning so the program doesnt keep on printing user not found before checking all users
  for (j = 0; j < 4; j++) // to check each element in the array
  {
      //if (did_vote[j] == true){
         // printf("You have already voted, voting again will modify your previous vote\n");
          
      //}
   if (userinput == usernames[j])
    {
      user_found = 1;
      printf ("pls enter your password: ");
      scanf ("%s", str2); 
      value=strcmp(passwords[j],str2); //to compare the user input and the passwords in the array, if the value is true the program will work
      break; //break the loop after the password is verified
    }
      //else {
         // printf("wrong username"); // i commented those 3 lines because it was easier to make a unified message (will appear in the end of the code)
         // break;
     // } 
      
       
  }
       
      if (value == 0) //if password is correct
	{
	    if (did_vote[j] == true){
          printf("You have already voted, voting again will modify your previous vote\n");
          
      }
	  printf
	    ("do you think reform x should be passed?\n Vote '1' for yes or '0' for no or '2' to abstain from voting or '3' to change your password: ");
	  scanf ("%ld", &userinput);
	  
	  
	  if (userinput == 1)
	    {
	      printf ("your vote has been recorded as a yes");
	      votes[j] = true;  //to save the vote as true in the boolean array
	      did_vote[j] = true;

	    
	    }
	    
	    if (userinput == 0){
	        printf("your vote has been recorded as a no");
	        votes[j] = false;  //to save the vote as false in the boolean array
	        did_vote[j] = true; //was intended to keep track of who voted and who did not but i couldnt make it work
	    }
	    
	    if (userinput == 3) 
	    {
	        printf("Please enter your new password: ");
	        scanf ("%s", str2); //to take the user input for the new password
	        strcpy(passwords[j], str2); //to change the string intended in the password array
	        printf("your new password is : %s" , passwords[j]);
	        printf("\nPlease enter your username and password again to vote.");
	        
	    }
	    
	    if (userinput == 2)
	    {
	        printf("you have abstained from voting");
	        did_vote[j] = false; 
	        votes[j]= NULL; //his vote is not recorded as a yes or no
	    }
	  
	    
	}
    
  else
    {
      printf ("username or password is incorrect"); //unified message if the username or password is incorrect
    }



}



}
