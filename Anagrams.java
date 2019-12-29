import java.util.Scanner;

public class Solution {
    static boolean isAnagram(String a, String b) {
        // Complete the function
       if (a.length() != b.length()) return false;
        
       String m = a.toLowerCase();
      String  n = b.toLowerCase();
        
        int Aarr[] = new int[26];
        int Barr[] = new int[26];
        
        if(a.length()==b.length()){

            for(int i=0 ; i<m.length() ; i++){
            Aarr[m.charAt(i)-'a']++;
            Barr[n.charAt(i)-'a']++;
        }
    for(int k=0;k<26;k++){
            if(Aarr[k]!=Barr[k]){
                return false;
                }
      }
      return true;
    }else{
        return false;
    }
}

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
