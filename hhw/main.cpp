#include <iostream>
using namespace std;
template <typename tsk1> int createvar(int size) { return new tsk1[size]; }
void createrandarr(int *inparr, int size, int minval, int maxval) {
  for (int i = 0; i < size; i++) {
    inparr[i] = minval + rand() % (maxval - minval + 1);
  }
}
void printingarray(int *inparr, int size) {
  for (int i = 0; i < size; i++) {
    cout << inparr[i] << endl;
  }
}
void arraydelete(int *inparr) {
  delete[] inparr; }
int *arrayaddelement(int *arr, int input, int size) {
  int *temparr = new int[size + 1];
  for (size_t i = 0; i < size; i++) {
    temparr[i] = arr[i];
  }
  temparr[size + 1] = 5;
  return temparr;
}
int *arrayaddgivenelement(int *arr, int size, int inp, int index) {
  int *temparr = new int[size + 1];
  for (int i = size + 1; i >= index; i--) {
    temparr[i] = arr[i - 1];
    arr[index - 1] = inp;
  }
  for (int i = 0; i <= size; i++) {
    temparr[i] = arr[i];
  }

  return arr;
}
 template<typename T>
 T* insertTo(T* arr, int size, int index, T var) {
	T* temp = new T[size + 1];
	for (int i = 0; i < size; i++)
	{
		if (i<index) {
			temp[i] = arr[i];
		}
		else{
			temp[i+1]=arr[i];
		}
	}
	temp[index]=var;
	delete[] arr;
	return temp;
}
int main() {
  int *arr = new int[5];
  for (int i = 0; i < 5; i++) {
    arr[i] = rand() % 10;
  }
  insertTo(arr, 5, 5,2);
  printingarray(arr, 6);
}
