package Java.Range_Queries;

class SegmentTree {

  int st[];

  // constructer
  SegmentTree(int arr[], int n) {
    // height of tree
    int x = (int) (Math.ceil(Math.log(n) / Math.log(2)));
    // size of segment tree
    int max_size = 2 * (int) Math.pow(2, x) - 1;
    st = new int[max_size];
    constructUtil(arr, 0, n - 1, 0);
  }

  int constructUtil(int arr[], int ss, int se, int si) {
    if (ss == se) {
      st[si] = arr[ss];
      return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =
      constructUtil(arr, ss, mid, si * 2 + 1) +
      constructUtil(arr, mid + 1, se, si * 2 + 2);
    return st[si];
  }

  int getMid(int s, int e) {
    return s + (e - s) / 2;
  }

  int getSum(int n, int qs, int qe) {
    if (qs < 0 || qe > n - 1 || qs > qe) return -1;

    return getSumUtil(0, n - 1, qs, qe, 0);
  }

  // st --> Pointer to segment tree
  // si --> Index of current node in the segment tree. Initially
  // 0 is passed as root is always at index 0
  // ss & se --> Starting and ending indexes of the segment represented
  // by current node, i.e., st[si]
  // qs & qe --> Starting and ending indexes of query range */

  int getSumUtil(int ss, int se, int qs, int qe, int si) {
    if (qs <= ss && qe >= se) { // segment tree lies under the query ir (qs - ss - se - qe)
      return st[si];
    }

    // out of bound
    if (se < qs || ss > qe) return 0;

    int mid = getMid(ss, se);
    return (
      getSumUtil(ss, mid, qs, qe, 2 * si + 1) +
      getSumUtil(mid + 1, se, qs, qe, 2 * si + 2)
    );
  }

  // i is the index to update
  void updatevalue(int arr[], int n, int i, int new_value) {
    if (i < 0 || i > n - 1) return;
    int diff = new_value - arr[i];
    updateValueUtil(0, n - 1, i, diff, 0);
  }

  void updateValueUtil(int ss, int se, int i, int diff, int si) {
    if (i < ss || i > se) {
      return;
    }
    st[si] += diff;
    if (se != ss) {
      int mid = getMid(ss, se);
      updateValueUtil(ss, mid, i, diff, 2 * si + 1);
      updateValueUtil(mid + 1, se, i, diff, 2 * si + 2);
    }
  }

  // driver code
  public static void main(String[] args) {
    int arr[] = { 1, 3, 5, 7, 9, 11 };
    int n = arr.length;
    SegmentTree tree = new SegmentTree(arr, n);
    System.out.println(tree.getSum(n, 1, 3));
    tree.updatevalue(arr, n, 1, 50);
    System.out.println(tree.getSum(n, 1, 3));
  }
}
