#include <iostream>
#define HEAP_LIMIT 100
using namespace std;

int parent(int i)
{
	return (i-1)/2;
}

int left_child(int i)
{
	return i*2 + 1;
}

int right_child(int i)
{
	return i*2 + 2;
}

void repair(int heap[], int heap_size, int i)
{
	int min_index = i;
	if(left_child(i) < heap_size && heap[left_child(i)]<heap[i])
		min_index = left_child(i);
	if(right_child(i)< heap_size && heap[right_child(i)]<heap[min_index])
		min_index = right_child(i);
	if(min_index != i) {
		swap(heap[min_index], heap[i]);
		repair(heap, heap_size, min_index);
	}
}

int insert(int heap[], int &heap_size, int v)
{
	if(heap_size+1 >= HEAP_LIMIT)
		return 1;

	heap[heap_size++] = v;
	for(int i=heap_size-1; i>0 && heap[i]<heap[parent(i)]; i=parent(i)) {
		swap(heap[i], heap[parent(i)]);
	}
	return 0;
}

int remove_min(int heap[], int &heap_size)
{
	int minimum = heap[0];
	heap[0] = heap[heap_size-1];
	heap_size--;
	repair(heap, heap_size, 0);
	return minimum;
}

void print(int A[], int size)
{
	for(int i=0; i<size; ++i)
		cout << A[i] << ' ';
	cout << '\n';
}

int main(void) 
{
	int heap[HEAP_LIMIT];
	int heap_size = 0;
	int n, k;
	cout << "Hi! Enter the total no. of elements: ";	
	cin >> n;
	int A[n];	
	cout << "Enter those elements: ";
	for(int i=0; i<n; ++i)
		cin >> A[i];
	cout << "Enter k: ";
	cin >> k;
	for(int i=0; i<n; ++i)
		insert(heap, heap_size, A[i]);
	for(int i=0; i<k-1; ++i)
		remove_min(heap, heap_size);
	cout << remove_min(heap, heap_size) << endl;
	return 0;
}
