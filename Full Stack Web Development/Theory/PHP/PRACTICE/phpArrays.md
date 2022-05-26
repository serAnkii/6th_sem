# number of items in an array

```php
<?php
 $fruits = array("Apple", "Banana", "Orange");

echo count($fruits);

?>
```
# associative arrays

```php
<?php
 $age = array("Peter"=>"35", "Ben"=>"37", "Joe"=>"43");
 
 $age = array("Peter"=>"35", "Ben"=>"37", "Joe"=>"43");

echo "Ben is " . $age['Ben'] . " years old.";
?>
```

# looping in associative arrays

```php
<?php
foreach ($age as $x => $y) {

    echo "Key=" . $x . ", Value=" . $y ;
}
?>
```

# sorting of an array

```php
<?php
 $colors = array("red", "green", "blue", "yellow"); 
sort($colors) ;
rsort($colors) ; # for sorting the elements in reverse order
# associative array sorting acc to the values 
 $age = array("Peter"=>"35", "Ben"=>"37", "Joe"=>"43");
asort($age);
?>
```
