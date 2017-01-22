module binarySearch 

let rec binarysearch l beg last value =
    if (beg <= last)
    then
        let mid = beg+((last-beg)/2)

        match 