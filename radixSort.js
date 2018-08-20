function radixSort(arr = []) {
  if (!arr.length) {
    return console.error('Array is empty');
  }
  //1. Create buckets for each digit 0...9
  let buckets = [];
  for (let i = 0; i < 10; i++) {
    buckets.push(new Array());
  }
  // Get the maximum number from the Array
  let max = Math.max(...arr);
  // Calculate the number of digits in  maximum number;
  let digits = max.toString().length;
  try {
    for (i = 0, f = 1; i < digits; f *= 10, i++) {
      for (let j = 0; j < arr.length; j++) {
        buckets[(Math.floor(arr[j] / f)) % 10].push(arr[j]);
      }
      for (j = 0, k = 0; j < 10; j++) {
        while (buckets[j].length) {
          arr[k++] = buckets[j].shift();
        }
      }
    }
  } catch (e) {
    console.error('One or more elements in array are not integer');
    return;
  }
  return arr;
}
