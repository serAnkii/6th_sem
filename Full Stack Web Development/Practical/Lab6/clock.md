# html code 

``` html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>clock</title>
</head>

<body>
    <p id="clock"></p>
    <button id="b" onclick="set()">start clock</button>
    <button onclick="clearTimeout(stop)">stop</button>
    <script src="inedx.js"></script>

</body>

</html>
```

# js code 

``` js
"use strict"
let element = document.getElementById("clock");
var stop;

function set() {

    element.innerHTML = Date();
    stop = setTimeout(() => 
    {
        set()
    }, 1000);
}

function stops() {
    clearTimeout(stop);
}


```
