class Solution {
    public String processStr(String s) {
        String result="";
        for(char c: s.toCharArray()){
            if(Character.isLetter(c)){
                result+=c;
            }else if(c=='*'){
                if(result.length()>0)
                    result=result.substring(0,result.length()-1);
            }else if(c=='#'){
                if(result.length()>0)
                    result+=result;
            }else if(c=='%'){
                result = new StringBuilder(result).reverse().toString();
            }
        }
        return result;
        }
        
    }
