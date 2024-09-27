void insertion_sort(int array[], int lenght){
    for(int i = 1; i < lenght; i++) {
        int aux = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > aux) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = aux;
    }
}

