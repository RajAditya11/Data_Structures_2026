public class q004_filterString{

    public String filterString( String word ){

        StringBuilder filterWord = new StringBuilder( "" );

        for( int i = 0 ; i < word.length() ; i++ ){
            char ch = word.charAt(i);

            if( Character.isLetter(ch) ){
                filterWord.append(ch);
            }
        }

        return filterWord.toString();
    }

    public static void main(String[] args) {

        q004_filterString q = new q004_filterString();


        String name = "    ra j adit  *7 ya .";

        System.out.println( "Before filter String " + name );

        name = q.filterString( name );

        System.out.println( "After filter String " + name );
    }

};