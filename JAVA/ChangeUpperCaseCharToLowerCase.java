public class ChangeUpperCaseCharToLowerCase {
    public static void main(String[] args) {
        String name = "rAuNaK";
        // String str=name.toLowerCase();
        // System.out.println(str);
        String newName="";
        for(int i=0;i<name.length();i++){
            char ch=name.charAt(i);
            if(ch>=65 && ch<=90){
              newName  += (char)(ch+32);
            }else{
                newName += ch;
            }
        }
        System.out.println(newName);
    }
}
