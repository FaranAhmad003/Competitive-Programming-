const reverseArr = (arr) => {
    let sum;
    let mincounter=0,maxcounter=0;
    const min=Math.min(...arr);
    const max=Math.max(...arr);
    if (arr.length === 0) return 0;
    if (arr.length === 1) console.log(arr[0] * 2);
    if (areAllNumbersSame(arr) === true) {console.log(arr[0] * arr.length);}
    if(areAllNumbersSame(arr) === false)
    { 
        arr.forEach((element) => {
            if(min===element)
            {
                mincounter++;
            }
            if(max===element)
            {
                maxcounter++;
            }
        });
        sum = min*mincounter+maxcounter*max;  
        console.log(sum);
    }
    if(arr.some(isNaN))
    {
        return 0;
    }
}

function areAllNumbersSame(arr) {
    if (arr.length === 0) {
        return true; // Empty array is considered to have all the same numbers
    }

    const firstNumber = arr[0];

    for (let i = 1; i < arr.length; i++) {
        if (arr[i] !== firstNumber) {
            return false; // Found a different number, not all numbers are the same
        }
    }

    return true; // All numbers are the same
}

const myArray = [1,2,1,2,3];
reverseArr(myArray);
