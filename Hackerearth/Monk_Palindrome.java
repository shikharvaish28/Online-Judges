     
import java.util.*;
class Monk_Palindrome {
    public static void main(String args[] )
    {
        Scanner s = new Scanner(System.in);
        int  n = s.nextInt();                 // Reading input from STDIN
        for(int i=0;i<n;i++){
            String str=s.next();
            if(new String(new StringBuffer(str).reverse()).equals(str)){ //This is Important and needed to be learnt
                System.out.print("YES ");
                if(str.length()%2==0)
                System.out.println("EVEN");
                else
                System.out.println("ODD");
            }else{
                System.out.println("NO");
            }
        }
        }
    }
    