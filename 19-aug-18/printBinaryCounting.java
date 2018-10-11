void printBinaryCounting(int n) 
{
  // isEmpty(), void add(Integer i), int remove()  
  if(n==0)
    return;
  System.out.print("0 ");

  if(n==1)
    return;
  n--; // decrease n as 0 is we have printed.

  Queue<Integer> q = new LinkedList<Integer>();
  q.add(1);
  while(!q.isEmpty()){
    if(n==0)
      break; 
    int f = q.remove();
    System.out.print(f + " ");
    q.add(f*10);
    q.add(f*10+1);
    n--;
  }      
}
