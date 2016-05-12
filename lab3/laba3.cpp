/**
 * Created by Student on 01.04.2016.
 */
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileNotFoundException;
import java.lang.String;
import java.io.IOException;
import java.util.regex.*;

public class Main
{
    public static String read(String filename) throws FileNotFoundException {
        StringBuilder ab = new StringBuilder();

        try {
            BufferedReader in = new BufferedReader(new FileReader(filename));

            try {
                //BufferedReader in = new BufferedReader ( new FileReader(filename));
                String a;
                while ((a = in.readLine()) != null) {
                    ab.append(a);
                    ab.append("\n");
                }
                } finally{
                    in.close();
                }
                } catch (IOException e) {
                throw new RuntimeException(e);


            }
            return ab.toString();
        }
//}
        private static String filename = "C:\\Users\\Student\\Desktop\\slova.txt";
    public static void main (String [] args ) throws FileNotFoundException {
        String textFromFile = read (filename);
        System.out.println(textFromFile);
        Pattern p = Pattern.compile ("\\b[А-я]+(у|ишь|[ая]ть|[ен]т|и[тм]|[ну]т|[и]те|ся)\\b");
        Matcher m = p.matcher ( textFromFile);
        int k = 0;
        while (m.find()) {
            System.out.println(m.group());
            k++;

        }

        System.out.println("________");
        System.out.println("Кол-во глаголов:" +k);
        System.out.println();


        Pattern nar = Pattern.compile("\\b[в|из|до|на|за][А-я]+[оа]\\b");
        Matcher m_nar = nar.matcher(textFromFile);
        int k_nar = 0 ;
        while (m_nar.find())
        {
            System.out.println(m_nar.group());
            k_nar++;
        }

        System.out.println("______");
        System.out.println("Количество наречий: " +k_nar);
        System.out.println();


        Pattern pr = Pattern.compile("\\b[А-я]+([ое]му|[ое]го|[ми]й|[ую]ю|ый)\\b");
        Matcher m_pr = pr.matcher(textFromFile);
        int k_pr = 0;
        while (m_pr.find())
        {
            System.out.println(m_pr.group());
            k_pr++;
        }
        System.out.println ( "__________") ;
        System.out.println(" Количество прилагательных:  "+k_pr );
        System.out.println();


}
}
