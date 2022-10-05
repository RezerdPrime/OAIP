// --- --- --- #1


//#include <stdio.h>
//
//int main() {
//	int arr[10], max_el = 0, min_el = 999; 
//
//	for (int i = 0; i < 10; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] % 2 == 0) {
//			max_el = (arr[i] > max_el) ? arr[i] : max_el;
//		}
//		else {
//			min_el = (min_el > arr[i]) ? arr[i] : min_el;
//		}
//	}
//
//	printf("Max element is: %d\nMin element is: %d\n", max_el, min_el);
//}


// --- --- --- №2


//#include <stdio.h>
//
//int main() {
//	int arr[10], negative_sum = 0;
//
//	for (int i = 0; i < 10; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] < 0) {
//			negative_sum += arr[i];
//		}
//	}
//
//	printf("Sum is: %d\n", negative_sum);
//}


// --- --- --- №3


//#include <stdio.h>
//
//int main() {
//	int arr[10], prod = 1;
//	
//	for (int i = 0; i < 10; i++) {
//		printf("%d) ", i);
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if ((i % 2) != 0) {
//			prod *= arr[i];
//		}
//	}
//
//	printf("\n%d\n", prod);
//}


// --- --- --- №4


//#include <stdio.h>
//
//int main() {
//	int arr[10], nul_index1 = 11, nul_index2 = 11, sum = 0;
//	
//	for (int i = 0; i < 10; i++) {
//		printf("%d) ", i);
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] == 0) {
//			if (nul_index1 == 11) { nul_index1 = i; }
//
//			else { nul_index2 = i; break; }
//		}
//	}
//
//	if (nul_index1 == 11 or nul_index2 == 11) {
//		printf("\n0\n");
//		return 0;
//	}
//
//	for (int i = nul_index1; i < nul_index2; i++) {
//		sum += arr[i];
//	}
//
//	printf("\nResult is: %d\n", sum);
//}


// --- --- --- №5


//#include <stdio.h>
//
//int main() {
//	int arr[10], max_value = 0, min_value = 1000;
//	
//	for (int i = 0; i < 10; i++) {
//		printf("%d) ", i);
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		max_value = (arr[i] > max_value) ? arr[i] : max_value;
//
//		min_value = (arr[i] < min_value) ? arr[i] : min_value;
//	}
//
//	printf("\nMinimum is: %d\nMaximum is: %d\n", min_value, max_value);
//}


// --- --- --- №6


//#include <stdio.h>
//
//int main() {
//	int arr[10], min_value = 1000;
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d) ", i);
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] < 0) { arr[i] = -arr[i]; }
//		min_value = (arr[i] < min_value) ? arr[i] : min_value;
//	}
//
//	printf("Minimal module is: %d", min_value);
//}


// --- --- --- №7


//#include <stdio.h>
//
//int main() {
//	int arr[10], arr2[10], count = 0;
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d) ", i);
//		scanf_s("%d", &arr[i]);
//	}
//
//	printf("\nResult is:\n");
//
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] == 0) { arr2[count] = 0; printf("%d  ", arr2[count]); count++; }
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] != 0) { arr2[count] = arr[i]; printf("%d  ", arr2[count]); count++; }
//	}
//}