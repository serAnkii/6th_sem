# include a file named "footer.php"

## `<?php include 'footer.php';?>`

# Assume we have a file named "webdict.txt", write the correct syntax to open and read the file content.

## `echo readfile("webdict.txt")`

# Open a file, and write the correct syntax to output one character at the time, until end-of-file.

```php

$myfile = fopen("webdict.txt", "r");


while(!feof($myfile)) {
  echo fgetc($myfile);
}

```

# Create a cookie named "username".


```php
 setcokkie("username", "John", time() + (86400 * 30), "/");
```

# Create a session variable named "favcolor"
```php
 session_start();

$_SESSION["favcolor"] = "green";
# output the session varable
echo $_SESSION['favcolor']
```
