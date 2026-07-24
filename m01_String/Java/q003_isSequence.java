public class q003_isSequence {
    public boolean isSubsequence( String s , String t ){

        int i = 0 , j = 0;

        while( i < s.length() && j < t.length() ){
            if( s.charAt(i) == t.charAt(j) ){
                i++;
                j++;
            }else{
                j++;
            }
        }

        return i == s.length();
    }


    public static void main(String[] args) {
        String s = "node";
        String t = "neetcode";

        q003_isSequence q = new q003_isSequence();

        boolean check = q.isSubsequence( s , t );

        System.out.println("They are Subsequnce :" + check );

        return;
    }
}
