#include <iostream>
using namespace std;

void RotateArr(unsigned int* arr, int N)
{
  unsigned int temp = arr[N - 1];

  for (unsigned int i = N - 1; i > 0; --i)
    arr[i] = arr[i - 1];

  arr[0] = temp;
}

void DeleteArr(unsigned int* arr, int N, int index)
{
  if (index < N)
  {
    for (unsigned int i = N - index ; i < N - 1; ++i)
      arr[i] = arr[i + 1];
  }
  else
  {
    for (unsigned int i = 0; i < N - 1; ++i)
      arr[i] = arr[i + 1];
  }
}

unsigned int GetArrayResult(unsigned int* arr, int N)
{
  for (int i = 1; i < N; ++i)
  {
    RotateArr(arr, N - i + 1);
    DeleteArr(arr, N - i + 1, i);
  }
  return arr[0];
}

int main() {
	
	unsigned int T;
	cin>>T;
	
	while(T--)
      {
        unsigned int N;
        cin >> N;
        unsigned int arr[N];
    
        for (int i = 0; i < N; ++i)
          cin >> arr[i];
    
        cout << GetArrayResult(arr, N) << endl;
      }

	return 0;
}
