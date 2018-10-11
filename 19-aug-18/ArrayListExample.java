class CmpClass implements Comparator<Integer>
{
  public int compare(Integer f, Integer s){
    return f-s;
  }

}
void sortArrayAndList(List<Integer>i,  Integer a[]){

  CmpClass cmp = new CmpClass();
  Array.sort(a,cmp);
  Collections.sort(i, cmpClass);
}

