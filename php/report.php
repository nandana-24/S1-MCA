<table>
    <form action="card.php" method="post">
    <tr>
        <th height=50>Name :</th>
        <td><input type="text" name="name"></td>
    </tr>
    <tr>
        <th height=50>Age :</th>
        <td><input type="text" name="age"></td>
    </tr>
    <tr>
        <th height=50>Roll No :</th>
        <td><input type="text" name="roll"></td>
    </tr>
    <tr>
        <th height=50>Gender :</th>
        <td><input type="radio" name="abc" value="Male">Male
    <input type="radio" name="abc" value="Female">Female</td>
    </tr>
    <tr>
        <th height=50>Mark 1 :</th>
        <td><input type="number" id="m1" name="M1"></td>
    </tr>
    <tr>
        <th height=50>Mark 2 :</th>
        <td><input type="number" id="m2" name="M2"></td>
    </tr>
    <tr>
        <th height=50>Mark 3 :</th>
        <td><input type="number" id="m3" name="M3"></td>
    </tr>
     <tr>
        <th height=50><button onclick="totalll()" style="margin-left: 70px;">Calculate Total</button></th>
    </tr>
    <tr>
        <th height=50>Total Marks :</th>
        <td><input type="text" id="ctotal" name="total"></td>
    </tr>
     <tr>
        <th height=50><input type="submit" ><input type="reset"></th>
    </tr>
  
    <script>
    function totalll(){
        event.preventDefault();
        let m1=parseInt(document.getElementById("m1").value);
        let m2=parseInt(document.getElementById("m2").value);
        let m3=parseInt(document.getElementById("m3").value);
        let total=m1+m2+m3;
        document.getElementById("ctotal").value=total;
        
    }
    </script>
</form>
</table>
