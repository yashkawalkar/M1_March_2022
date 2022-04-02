// Driver Code
int 
main () 
{
  
char you, bot;
  
srand (time (0));
  
int inp_number = rand () % 100 + 1;
  
 
if (inp_number < 33)
    
    {
      
bot = 's';
    
}
  
  else if (inp_number > 33 && inp_number < 66)
    
    {
      
bot = 'w';
    
}
  
  else
    
    {
      
bot = 'g';
    
}
  
printf ("Enter 's' for snake, 'w' for " "water and 'g' for gun");
  
printf ("\n");
  
scanf ("%c", &you);
  
int result = snakeWaterGun (you, bot);
  
if (result == 0)
    
    {
      
printf ("Game draw!");
      
printf ("\n");
    
}
  
  else if (result == 1)
    
    {
      
printf ("You win!");
      
printf ("\n");
    
}
  
  else
    
    {
      
printf ("You Lose!");
      
printf ("\n");
    
}
  
 
 
printf ("You choose %c and bot choose %c. ", you, bot);
  
return 0;

}