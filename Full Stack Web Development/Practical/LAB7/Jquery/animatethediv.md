# HTML 

``` html
<html>
  <head>
    <meta charset="UTF-8" />
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>
    <script src="script.js"></script>
    <link rel="stylesheet" type="text/css" href="styles.css" />
  </head>
  <body>
    <div id="parent">
    <div id="child"></div>
    </div>
  </body>
</html>

```
# JavaScript code

```js
$('document').ready(()=>{
  $('#child').animate({
    right:'0'
  })
  $('#child').animate({
    bottom:'0'
  })
  $('#child').animate({
    left:'0'
  })
  $('#child').animate({
    top:'0'
  })
})
```
# CSS 

```css
#parent {
  width: 500px;
  height: 500px;
  border: 2px solid rebeccapurple;
  position: fixed;
}

#child {
  width: 100px;
  height: 100px;
  border: 2px double yellowgreen;
  position: absolute;
}

```
