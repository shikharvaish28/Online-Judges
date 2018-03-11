import java.util.*;
class Monk_GoodString{
    public static void main(String args[]){
        Scanner ob = new Scanner(System.in);
        String str = " ";
        while(ob.hasNextLine()){
         str = ob.nextLine();
        }
        int count = 0;
        int max = 0;
        int j = 0;
        str = str.toLowerCase();
        char ch = ' ';
        
        for (int i = 0; i<str.length(); i++)
        {
            //int j = i+1;
            if (i < str.length())
            {
                j = i+1;
            }
            else if (i== str.length()){
            j = i+1;
            }
            ch = str.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                count++;
                while (str.charAt(j) == 'a' || str.charAt(j) == 'e' || str.charAt(j) == 'i' ||str.charAt(j) == 'o' || str.charAt(j) == 'u'){
                   count++; 
                   j++;
                } 
                // System.out.println(count);
                if (max < count){
                    max = count;
                }
            }
            count = 0;
        }
        System.out.println(max);
    }

}
