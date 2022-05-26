# If the form below gets submitted, 
# how can you, in welcome.php, output the value from the "first name" field?
```html



<form action="welcome.php" method="get">
First name: <input type="text" name="fname">
</form>
```
## answer
```html
 <html>

<body>

Welcome <?php echo  $_GET['fname'];
#OR
 Welcome <?php echo $_POST["fname"]; ?>
?>

</body>
</html>

```
