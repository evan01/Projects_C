package main;/*
 * Created by evanknox on 2015-10-25.
 */

public class BubbleSort {
    public static void main(String args[]){
        int arrray[] = {34,9,8,7,6,8,7,4,3,2,1,4,5,6,7,12,12,126};
        arrray = sortArray(arrray);
        printArray(arrray);
    }

    private static int[] sortArray(int[] arrray) {
        int length = arrray.length-1;

        int left,right,temp;

        while (length > 1){
            for (int i =0; i<length;i++){
                if (arrray[i]>arrray[i+1]){
                    //Swap them
                    temp = arrray[i];
                    arrray[i]= arrray[i+1];
                    arrray[i+1]=temp;
                }
            }
            length--;
        }

        return arrray;
    }


    private static void printArray(int[] arrray) {
        System.out.print("Array: [");
        for (int i=0; i<arrray.length; i++){
            System.out.print(arrray[i]+",");
        }
        System.out.print("]");
    }
}
