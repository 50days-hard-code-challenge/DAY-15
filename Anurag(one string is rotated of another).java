import java.util.*;
public class Solution {
    public static int isCyclicRotation(String p, String q)  {
      if(p.length()==0 && q.length()==0)
      {
          return 0;
      }
      if(p.length()!=q.length())
      {
          return 0;
      }
      String str=p+p;
      if(str.contains(q))
      {
          return 1;
      }
      return 0;
    }
}
