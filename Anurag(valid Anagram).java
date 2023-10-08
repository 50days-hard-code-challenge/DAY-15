class Solution {
    public boolean isAnagram(String s, String t) {
         if(s.length()!=t.length())
        {
            return false;
        }
        HashMap<Character,Integer> map1=new HashMap<>();
        for(int i=0;i<t.length();i++)
        {
            if(map1.containsKey(t.charAt(i)))
            {
                int freq=map1.get(t.charAt(i));
                freq++;
                map1.put(t.charAt(i),freq);
            }
            else
            {
            map1.put(t.charAt(i),1);
            }
        }
        HashMap<Character,Integer> map2=new HashMap<>();
        for(int i=0;i<s.length();i++)
        {
             if(map2.containsKey(s.charAt(i)))
            {
                int freq=map2.get(s.charAt(i));
                freq++;
                map2.put(s.charAt(i),freq);
            }
            else
            {
            map2.put(s.charAt(i),1);
            }

        }
        if(map1.equals(map2))
        {
            return true;
        }
        return false;
    }
}
