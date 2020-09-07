#include<iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	int ans_array[T];

	for(int i=0;i<T;i++)
	{
		int N;
		cin>>N;
		ans_array[i] = 0;

		int arr[N];

		for(int j=0;j<N;j++)
		{
			cin>>arr[j];
		}

		int largest = INT_MIN;

		for(int j=0;j<N;j++)
		{
			 if(arr[j]>largest)
			 {
				 largest = arr[j];
				 //cout << "New largest: " << largest << endl;
					 if(j==N-1)
					 {
						ans_array[i]++;
					//	cout << "Loop 1 true" << j << endl;
					 }


					else if(arr[j]>arr[j+1])
					{
						ans_array[i]++;
					//	cout << "Loop 2 true" << j << endl;
					}

			}

		}
	}

	for(int i=0;i<T;i++)
	{
		cout << "Case #" << i+1<<": " << ans_array[i] << endl;
	}



	return 0;
}
