import java.util.*;
class welcome_Problem
{
    public static void main(String args[]){
        Scanner ob = new Scanner(System.in);
        int n = ob.nextInt();
        int a[] = new int[n];
        int b[] = new int [n];
        int c[] = new int [n];
        for (int i = 0; i < n; i++){
            a [i] = ob.nextInt();
        }
        for (int j = 0; j < n; j++){
            b [j] = ob.nextInt();
        }
        for (int k = 0; k < n; k++){
             System.out.print(a[k]+b[k]+" ");
        }
        
    }
}