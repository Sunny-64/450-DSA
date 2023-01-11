class ReverseAString{
    public static void main(String[] args) {
        String s = "Sunny"; 
        String newString = ""; 
        for(int i = s.length()-1; i>=0; i--){
            newString += s.charAt(i); 
        }
        System.out.print(newString); 
    }
}