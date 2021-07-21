package main

import (
	"fmt"
	"math/rand"
	"time"
)

const n = 100000

func buildArray(arr *[n]int) {
	r := rand.New(rand.NewSource(99))
	r.Seed(time.Now().UnixNano())
	for i := 0; i < n; i++ {
		arr[i] = r.Int()
	}
}

func printArray(arr *[n]int) {
	for i := 0; i < n; i++ {
		fmt.Println(arr[i])
	}
}

func insertionSort(arr *[n]int) {
	for i := 1; i < n; i++ {
		key := arr[i]
		j := i - 1

		for j >= 0 && arr[j] > key {
			arr[j+1] = arr[j]
			j = j - 1
		}
		arr[j+1] = key
	}
}

func main() {

	fmt.Println("Build array")
	var arr [n]int
	buildArray(&arr)
	//printArray(&arr)

	fmt.Println("Sort array")
	insertionSort(&arr)
	//printArray(&arr)

	fmt.Println("Destroy array")
}
