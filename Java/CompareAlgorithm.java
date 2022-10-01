import java.util.Arrays;
import java.util.concurrent.TimeUnit;

public class CompareAlgorithm {

    // QUICKSORT PART

    static int partition(int arr[], int l, int r) {
        int arrc = arr[r], i = l, j = r;
        while ( i < j ){
            while ( arr[i] < arrc ){
                i++;
            }
            while ( ( i < j ) && ( arr[j] >= arrc) ){
                j--;
            }
            if ( i < j ){
                // swap arr[i] and arr[j] 
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp;
            } else {
                // swap arr[i] and arr[r] 
                int temp = arr[i]; 
                arr[i] = arr[r]; 
                arr[r] = temp;
            }
        }
        return i;
    }

    public static void Quicksort(int[] a, int i, int j) {
        if (i < j) {
            int part = partition(a, i, j);
            Quicksort(a, i, part - 1);
            Quicksort(a, part + 1, j);
        }
    }

    // HEAP SORT

    public static void Heapsort(int arr[]) 
    { 
        int size = arr.length; 

        for (int i = size / 2 - 1; i >= 0; i--) 
            heapset(arr, size, i);

        for (int i = size - 1; i > 0; i--) {
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;

            heapset(arr, i, 0);
        }
    }

    static void heapset(int arr[], int size, int i) 
    { 
        int max = i; 
        int l = 2*i + 1;
        int r = 2*i + 2;
   
        if (l < size && arr[l] > arr[max]) 
            max = l; 
  
        if (r < size && arr[r] > arr[max]) 
            max = r; 

        if (max != i) 
        { 
            int temp = arr[i]; 
            arr[i] = arr[max]; 
            arr[max] = temp; 
   
            heapset(arr, size, max); 
        } 
    } 
    
    // RADIX Heap

    static int getMax(int arr[], int size) 
    { 
        int max = arr[0]; 
        for (int i = 1; i < size; i++) 
            if (arr[i] > max) 
                max = arr[i]; 
        return max; 
    } 
  
    static void countingN(int arr[], int size, int k) 
    { 
        int output[] = new int[size]; 
        int i; 
        int count[] = new int[10]; 
        Arrays.fill(count,0); 
   
        for (i = 0; i < size; i++) 
            count[ (arr[i]/k)%10 ]++; 
   
        for (i = 1; i < 10; i++) 
            count[i] += count[i - 1]; 
  
        for (i = size - 1; i >= 0; i--) 
        { 
            output[count[ (arr[i]/k)%10 ] - 1] = arr[i]; 
            count[ (arr[i]/k)%10 ]--; 
        } 
  
        for (i = 0; i < size; i++) 
            arr[i] = output[i]; 
    } 

    static void Radixsort(int arr[], int n) 
    { 
        int max = getMax(arr, n); 
        for (int i = 1; max/i > 0; i *= 10) 
            countingN(arr, n, i); 
    }

    public static void main(String[] args) {
        // GENERATING ARRAYS OF 10,50,100,500,1000 WITH RANDOM NUMBERS
        int[] arr1 = new int[10];
        int[] arr1c1 = new int[10];
        int[] arr1c2 = new int[10];
        for (int i = 0; i < arr1.length; i++) {
            // Generate random number between 0 to 10000
            arr1[i] = (int) (Math.random() * 10000);
        }
        System.arraycopy(arr1, 0, arr1c1, 0, arr1.length);
        System.arraycopy(arr1, 0, arr1c2, 0, arr1.length);


        int[] arr2 = new int[50];
        int[] arr2c1 = new int[50];
        int[] arr2c2 = new int[50];
        for (int i = 0; i < arr2.length; i++) {
            arr2[i] = (int) (Math.random() * 10000);
        }
        System.arraycopy(arr2, 0, arr2c1, 0, arr2.length);
        System.arraycopy(arr2, 0, arr2c2, 0, arr2.length);

        int[] arr3 = new int[100];
        int[] arr3c1 = new int[100];
        int[] arr3c2 = new int[100];
        for (int i = 0; i < arr3.length; i++) {
            arr3[i] = (int) (Math.random() * 10000);
        }
        System.arraycopy(arr3, 0, arr3c1, 0, arr3.length);
        System.arraycopy(arr3, 0, arr3c2, 0, arr3.length);

        int[] arr4 = new int[500];
        int[] arr4c1 = new int[500];
        int[] arr4c2 = new int[500];
        for (int i = 0; i < arr4.length; i++) {
            arr4[i] = (int) (Math.random() * 10000);
        }
        System.arraycopy(arr4, 0, arr4c1, 0, arr4.length);
        System.arraycopy(arr4, 0, arr4c2, 0, arr4.length);
        
        int[] arr5 = new int[1000];
        int[] arr5c1 = new int[1000];
        int[] arr5c2 = new int[1000];
        for (int i = 0; i < arr5.length; i++) {
            arr5[i] = (int) (Math.random() * 10000);
        }
        System.arraycopy(arr5, 0, arr5c1, 0, arr5.length);
        System.arraycopy(arr5, 0, arr5c2, 0, arr5.length);

        //-------------------------------------------------------------------------------------------------------------------
        // ARRAR SIZE 10

        System.out.println("QUICKSORT");

        System.out.println(Arrays.toString(arr1));

        long startTime1 = System.nanoTime();
        /* QUICKSORT TIMER STARTS */
        Quicksort(arr1, 0, arr1.length - 1);
        /* QUICKSORT TIMER ENDS */
        long endTime1 = System.nanoTime();

        long timeElapsed1 = endTime1 - startTime1;

        System.out.println("QUICKSORT with array 10=> Running time in seconds: " + timeElapsed1);

        System.out.println(Arrays.toString(arr1));

        // ARRAY SIZE 50

        // System.out.println(Arrays.toString(arr2));

        long startTime2 = System.nanoTime();
        /* QUICKSORT TIMER STARTS */
        Quicksort(arr2, 0, arr2.length - 1);
        /* QUICKSORT TIME ENDS */
        long endTime2 = System.nanoTime();

        long timeElapsed2 = endTime2 - startTime2;

        System.out.println("QUICKSORT with array 50 => Running time in seconds: " + timeElapsed2);

        // System.out.println(Arrays.toString(arr2));

        // ARRAY SIZE 100

        // System.out.println(Arrays.toString(arr3));

        long startTime3 = System.nanoTime();
        /* QUICKSORT TIMER STARTS */
        Quicksort(arr3, 0, arr3.length - 1);
        /* QUICKSORT TIME ENDS */
        long endTime3 = System.nanoTime();

        long timeElapsed3 = endTime3 - startTime3;

        System.out.println("QUICKSORT with array 100 => Running time in seconds: " + timeElapsed3);

        // System.out.println(Arrays.toString(arr3));

        // ARRAY SIZE 500

        // System.out.println(Arrays.toString(arr4));

        long startTime4 = System.nanoTime();
        /* QUICKSORT TIMER STARTS */
        Quicksort(arr4, 0, arr4.length - 1);
        /* QUICKSORT TIME ENDS */
        long endTime4 = System.nanoTime();

        long timeElapsed4 = endTime4 - startTime4;

        System.out.println("QUICKSORT with array 500 => Running time in seconds: " + timeElapsed4);

        // System.out.println(Arrays.toString(arr4));

        // ARRAY SIZE 1000

        // System.out.println(Arrays.toString(arr5));

        long startTime5 = System.nanoTime();
        /* QUICKSORT TIMER STARTS */
        Quicksort(arr5, 0, arr5.length - 1);
        /* QUICKSORT TIME ENDS */
        long endTime5 = System.nanoTime();

        long timeElapsed5 = endTime5 - startTime5;

        System.out.println("QUICKSORT with array 1000 => Running time in milliseconds: " + timeElapsed5);

        // System.out.println(Arrays.toString(arr5));

        //-----------------------------------------------------------------------------------------------------------------

        // ARRAR SIZE 10

        System.out.println("HEAP SORT");

        System.out.println(Arrays.toString(arr1c1));

        long startTime6 = System.nanoTime();
        /* HEAP SORT TIMER STARTS */
        Heapsort(arr1c1);
        /* HEAP SORT TIMER ENDS */
        long endTime6 = System.nanoTime();

        long timeElapsed6 = endTime6 - startTime6;

        System.out.println("HEAP SORT with array 10=> Running time in seconds: " + timeElapsed6);

        System.out.println(Arrays.toString(arr1c1));

        // ARRAY SIZE 50

        // System.out.println(Arrays.toString(arr2));

        long startTime7 = System.nanoTime();
        /* HEAP SORT TIMER STARTS */
        Heapsort(arr2c1);
        /* HEAP SORT TIME ENDS */
        long endTime7 = System.nanoTime();

        long timeElapsed7 = endTime7 - startTime7;

        System.out.println("HEAP SORT with array 50 => Running time in seconds: " + timeElapsed7);

        // System.out.println(Arrays.toString(arr2));

        // ARRAY SIZE 100

        // System.out.println(Arrays.toString(arr3));

        long startTime8 = System.nanoTime();
        /* HEAP SORT TIMER STARTS */
        Heapsort(arr3c1);
        /* HEAP SORT TIME ENDS */
        long endTime8 = System.nanoTime();

        long timeElapsed8 = endTime8 - startTime8;

        System.out.println("HEAP SORT with array 100 => Running time in seconds: " + timeElapsed8);

        // System.out.println(Arrays.toString(arr3));

        // ARRAY SIZE 500

        // System.out.println(Arrays.toString(arr4));

        long startTime9 = System.nanoTime();
        /* HEAP SORT TIMER STARTS */
        Heapsort(arr4c1);
        /* HEAP SORT TIME ENDS */
        long endTime9 = System.nanoTime();

        long timeElapsed9 = endTime9 - startTime9;

        System.out.println("HEAP SORT with array 500 => Running time in seconds: " + timeElapsed9);

        // System.out.println(Arrays.toString(arr4));

        // ARRAY SIZE 1000

        // System.out.println(Arrays.toString(arr5));

        long startTime10 = System.nanoTime();
        /* HEAP SORT TIMER STARTS */
        Heapsort(arr5c1);
        /* HEAP SORT TIME ENDS */
        long endTime10 = System.nanoTime();

        long timeElapsed10 = endTime10 - startTime10;

        System.out.println("HEAP SORT with array 1000 => Running time in milliseconds: " + timeElapsed10);

        // System.out.println(Arrays.toString(arr5));

        //-------------------------------------------------------------------------------------------------------------------

        // RADIX SORT

        // ARRAY SIZE 10

        System.out.println("RADIX SORT");

        System.out.println(Arrays.toString(arr1c2));

        long startTime11 = System.nanoTime();
        /* RADIX SORT TIMER STARTS */
        Radixsort(arr1c2, arr1c2.length);
        /* RADIX SORT TIME ENDS */
        long endTime11 = System.nanoTime();

        long timeElapsed11 = endTime11 - startTime11;

        System.out.println("RADIX SORT with array 10 => Running time in milliseconds: " + timeElapsed11);

        System.out.println(Arrays.toString(arr1c2));

        // ARRAY SIZE 50

        // System.out.println(Arrays.toString(arr5));

        long startTime12 = System.nanoTime();
        /* RADIX SORT TIMER STARTS */
        Radixsort(arr2c2, arr2c2.length);
        /* RADIX SORT TIME ENDS */
        long endTime12 = System.nanoTime();

        long timeElapsed12 = endTime12 - startTime12;

        System.out.println("RADIX SORT with array 50 => Running time in milliseconds: " + timeElapsed12);

        // System.out.println(Arrays.toString(arr5));

        // ARRAY SIZE 100

        // System.out.println(Arrays.toString(arr5));

        long startTime13 = System.nanoTime();
        /* RADIX SORT TIMER STARTS */
        Radixsort(arr3c2, arr3c2.length);
        /* RADIX SORT TIME ENDS */
        long endTime13 = System.nanoTime();

        long timeElapsed13 = endTime13 - startTime13;

        System.out.println("RADIX SORT with array 100 => Running time in milliseconds: " + timeElapsed13);

        // System.out.println(Arrays.toString(arr5));

        // ARRAY SIZE 500

        // System.out.println(Arrays.toString(arr5));

        long startTime14 = System.nanoTime();
        /* RADIX SORT TIMER STARTS */
        Radixsort(arr4c2, arr4c2.length);
        /* RADIX SORT TIME ENDS */
        long endTime14 = System.nanoTime();

        long timeElapsed14 = endTime14 - startTime14;

        System.out.println("RADIX SORT with array 500 => Running time in milliseconds: " + timeElapsed14);

        // System.out.println(Arrays.toString(arr5));

        // ARRAY SIZE 1000

        // System.out.println(Arrays.toString(arr5));

        long startTime15 = System.nanoTime();
        /* RADIX SORT TIMER STARTS */
        Radixsort(arr5c2, arr5c2.length);
        /* RADIX SORT TIME ENDS */
        long endTime15 = System.nanoTime();

        long timeElapsed15 = endTime15 - startTime15;

        System.out.println("RADIX SORT with array 1000 => Running time in milliseconds: " + timeElapsed15);

        // System.out.println(Arrays.toString(arr5));
    }
}