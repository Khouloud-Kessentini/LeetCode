class Solution {
    public String defangIPaddr(String address) {
        String def_ip_address = "";
        int len = address.length();
        short i;
        for(i=0;i<len;i++){
            if(address.charAt(i)!='.'){
                def_ip_address+=address.charAt(i);
            }
            else{
                def_ip_address+="[.]";
            }
        }
        return def_ip_address;
    }
}
