
public class LCSthree{

	static int LCSof3 (String a, String b, String c, int n1, int n2, int n3){

		int DP[][][] = new int[n1+1][n2+1][n3+1];

		for(int i=0;i<n1+1;i++){
			for(int j=0;j< n2+1;j++){
				for(int k=0;k<n3+1;k++){
					if(i == 0 || j == 0 || k == 0){
						DP[i][j][k] = 0;
					}
				}
			}
		}

		for(int i=1;i<n1+1;i++){
			for(int j=1;j<n2+1;j++){
				for(int k=1;k<n3+1;k++){
					if(a.charAt(i-1) == b.charAt(j-1) && b.charAt(j-1) == c.charAt(k-1)){
						DP[i][j][k] = 1 + DP[i-1][j-1][k-1];
					}else{
						DP[i][j][k] = Math.max(DP[i-1][j][k], Math.max(DP[i][j-1][k], DP[i][j][k-1]));
					}
				}
			}
		}

		return DP[n1][n2][n3];
	}

	static int lcs(int x, int y, String s1, String s2)
    {
        
        int DP[][] = new int[x+1][y+1];
        
        
        for(int i=0;i<x+1;i++){
            for(int j=0;j<y+1;j++){
                if(i == 0 || j == 0){
                    DP[i][j] = 0;
                }    
            }
        }
        
        
        for(int i=1;i<x+1;i++){
            for(int j=1;j<y+1;j++){
                if(s1.charAt(i-1) == s2.charAt(j-1)){
                    DP[i][j] = 1 + DP[i-1][j-1];
                }else{
                    DP[i][j] = Math.max(DP[i-1][j], DP[i][j-1]);
                }
            }
        }

        return DP[x][y];
        
    }

	public static void main(String[] args) {
		String a = "cdabba";
		String b = "abbacd";
		String c = "aaavbb";

		int p = a.length();
		int q = b.length();
		int r = c.length();

		System.out.println(lcs(p,q,a,b));
	}
}