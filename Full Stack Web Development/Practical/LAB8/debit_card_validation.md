# code 

- ## html
```html
<html>
  <head>
    <meta charset="UTF-8" />
    <script src="script.js"></script>
    <link rel="stylesheet" type="text/css" href="styles.css" />
  </head>
  <body>
    <div id="ankit">
      <h1>some bank</h1>
      <h3>
        valid <br />
        till
      </h3>
      <form>
        <input
          type="text"
          placeholder="enter your name"
          id="ank"
          pattern="[A-Za-z ]+"
        />

        <input
          type="text"
          placeholder="enter your card number"
          id="ank1"
          pattern="5[3-4][0-9]{2}[-][0-9]{4}[-][0-9]{4}[-][0-9]{4}$"
          maxlength="19"
        />

        <input
          type="text"
          placeholder="enter expiry date"
          id="ank2"
          pattern="[0-9]{2}[-][0-9]{2}$"
        />

        <input
          type="password"
          placeholder="enter cvv"
          id="ank3"
          pattern="[0-9]{3}$"
        />

        <input type="submit" id="anki4" />
      </form>
    </div>
  </body>
</html>

```
- ## CSS
```css
body {
  margin: 0%;
  padding: 0%;
  display: flex;
  align-items: center;
  justify-content: center;
}

#ankit {
  position: fixed;
  height: 30vh;
  width: 50vw;
  border: 2px solid rgb(136, 12, 12);
  border-radius: 20px;
  background-color: rgb(194, 6, 6);
}

h1 {
  /* border: 2px solid; */
  /* display: block; */
  margin-top: 0%;
  position: absolute;
  right: 0;
  color: gold;
  filter: blur(1px);
}

#ank {
  /* border: 2px solid; */
  /* display: block; */
  /* margin-top: 0%; */
  position: absolute;
  margin-left: 2%;
  border-bottom-left-radius: 10px;
  bottom: 0;
  color: gold;
  /* filter: blur(1px); */
}

#ank1 {
  /* border: 2px solid; */
  /* display: block; */
  margin-top: 0%;
  position: absolute;
  margin-left: 2%;
  border-bottom-left-radius: 10px;
  bottom: 50%;
  font-size: large;
  text-align: center;
  width: 80%;

  /* filter: blur(1px); */
}

#ank2 {
  /* border: 2px solid; */
  /* display: block; */
  margin-top: 0%;
  position: absolute;
  margin-left: 2%;
  border-bottom-left-radius: 10px;
  bottom: 30%;
  width: 40%;

  right: 0;
  /* filter: blur(1px); */
  text-align: center;
}

#ank3 {
  /* border: 2px solid; */
  /* display: block; */
  margin-top: 0%;
  position: absolute;
  margin-left: 2%;
  border-bottom-left-radius: 10px;
  bottom: 30%;
  width: 20%;

  /* filter: blur(1px); */
  text-align: center;
}

h3 {
  /* border: 2px solid; */
  /* display: block; */
  margin-top: 0%;
  position: absolute;
  right: 0;
  color: whitesmoke;
  bottom: 20%;
  z-index: 100;
  right: 40%;
  font-size: smaller;
}


#anki4{
  position: absolute;
  bottom: 02;
  right: 0;
  
  border-bottom-right-radius: 20px;
}
```
- ## OUTPUT
 <img src="https://user-images.githubusercontent.com/89020930/161199052-f0d120a4-3cea-4ed7-a81a-0b4f53e699b6.PNG" >
 <img src="https://user-images.githubusercontent.com/89020930/161199198-32810cca-5a9b-410e-8933-9ab46e78e58c.PNG" >



