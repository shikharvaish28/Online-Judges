import java.util.*;
class Monk_Rotation
{
    public static void main(String args[])
    {
        Scanner ob = new Scanner(System.in);
        int n = ob.nextInt();   //no of test cases
        while (n > 0)
        {
          int size = ob.nextInt();
          int steps = ob.nextInt(); 
          int arr [] = new Int [size];  //declare array 
          int new_arr [] = new int[size];
          for (int i = 0 ; i < size ; i++ )
          {
              arr[i] = ob.nextInt();
          }     //input of array complete
          for (int j = 0 ; j < size ; j++)
          {
                if (j <= 3)
                {
                    new_arr[j+steps] = arr[j];
                }    
                else if (j = 5 && j<)
          }
          
        }
    }
}