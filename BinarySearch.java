import java.util.*;
public class BinarySearch
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the Size of the Array");
		int n=sc.nextInt();
		int a[]=new int[n];
		System.out.println("Enter the Values in Ascending Order");
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		System.out.println("Enter the Number required to find");
		int x=sc.nextInt();
		int l=0;
		int f=n-1;
		while(l<=f)
		{
			int mid=(f+l)/2;
			if(a[mid]==x)
			{
				System.out.println("Found at => "+mid);
				break;
			}
			else if(a[mid]>x)
			{
				f=mid-1;
			}
			else
			{
				l=mid+1;
			}
		}
		if(l>f)
		{
			System.out.println("Not Found");
		}
	}
}