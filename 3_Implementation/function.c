int 
snakeWaterGun (char you, char bot) 
 

{
  
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw // Cases
    // covered: | snake snake |
    // gun gun | water water
    if (you == bot)
    
    {
      
return 0;
    
}
  
 
 
    // Non-draw conditions
    // Cases covered:// snake gun
    // | gun snake | snake water
    // | water sanke | gun water | water gun
    
if (you == 's' && bot == 'g')
    
    {
      
return -1;
    
}
  
  else if (you == 'g' && bot == 's')
    
    {
      
return 1;
    
}
  
 
if (you == 's' && bot == 'w')
    
    {
      
return 1;
    
}
  
  else if (you == 'w' && bot == 's')
    
    {
      
return -1;
    
}
  
 
if (you == 'g' && bot == 'w')
    
    {
      
return -1;
    
}
  
  else if (you == 'w' && bot == 'g')
    
    {
      
return 1;
    
}

}

