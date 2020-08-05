int find_square(int num){
  if(num<2)
    return num;
    
  num = abs(num);
  
  int i = num>>1;
  
  if(num&1)                                     //if even
    return ((find_square(i)<<2) + (i<<2) + 1);
    
   else                                         //if odd
    return find_square(i) << 2;
}

int find_square_2(int num){
  int square = 0;

  for(int i=0;i<num;i++){
      square += num;
    }

return square;
}

int find_square_3(int num){
  int odd = 1,square = 0;
  
  while(num--){
    square += odd;
  }
  return square;
}
