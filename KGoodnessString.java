import java.util.*;

public class KGoodnessString {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int c = 0;
		while(c != t) {
			int n = sc.nextInt();
			int k = sc.nextInt();
			sc.nextLine();
			String s = sc.next();
			int costToConvert = 0;
			int scoreEarned = 0;
			int low = 0 , high = n - 1;
			while(low < high) {
				if(s.charAt(low) == s.charAt(high)) {
					costToConvert++;
				}else {
					scoreEarned++;
				}
				low++;
				high--;
			}
			if(scoreEarned == k) {
				System.out.println("Case " + "#" +(c + 1) + ": " + "0");
			}else {
				System.out.println("Case " + "#" +(c + 1) + ": " +costToConvert);
			}
			c++;
		}
		sc.close();
	}

}
