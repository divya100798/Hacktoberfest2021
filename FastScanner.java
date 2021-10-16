class FastScanner {
    StringTokenizer stringTokenizer =new StringTokenizer("");
    BufferedReader bufferedReader =new BufferedReader(new InputStreamReader(System.in));
    int[] readArray(int n) {
        int[] arr = new int[n];
        int i = 0;
        while (i<n){
            arr[i] = nextInt();
            i++;
        }
        return arr;
    }
    int nextInt () {
        return Integer.parseInt(next());
    }
    double nextDouble(){
        return Double.parseDouble(next());
    }
    float nextFloat(){
        return Float.parseFloat(next());
    }
    public String next() {
        while (!stringTokenizer.hasMoreElements())
            try {
                stringTokenizer =new StringTokenizer(bufferedReader.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        return stringTokenizer.nextToken();
    }
}
