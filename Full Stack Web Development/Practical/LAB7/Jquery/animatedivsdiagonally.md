#code 

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
    <style>
        #outer {
            position: fixed;
            background-color: blue;
            width: 500px;
            height: 500px;
        }
        #inner-left, #inner-right {
            position: absolute;
            background-color: red;
            width: 100px;
            height: 100px;
        }
        #inner-left {
            left: 0;
        }
        #inner-right {
            right: 0;
        }
    </style>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>
    <script>
        $('document').ready(() => {
            f1();
            f2();


            function f1() {
                $('#inner-left').animate({
                    left:'400',
                    bottom:'0',
                    top:'400',
                    right:'0'
                },1000,f3)
            }
            function f2() {
                $('#inner-right').animate({
                    right:'400',
                    bottom:'0',
                    top:'400',
                    left:'0'
                },1000,f4)
            }

            function f3() {
                $('#inner-left').animate({
                    right:'400',
                    top:'0',
                    bottom:'400',
                    left:'0'
                },1000,f2)
            }

            function f4() {
                $('#inner-right').animate({
                    left:'400',
                    top:'0',
                    bottom:'400',
                    right:'0'
                },1000,f1)
            }
        })
    </script>
</head>
<body>
    <div id="outer">
        <div id="inner-left"></div>
        <div id="inner-right"></div>
    </div>
</body>
</html>
```

# output
![Animation](https://user-images.githubusercontent.com/89020930/160110893-b7fd0e8f-ba7c-4f48-8e9e-975bd7f5192e.gif)
