<form action="card.php" method="post">
    Name : <input type="text" name="name"><br><br>
    Age : <input type="number" name="age"><br><br>
    Roll No : <input type="number" name="roll"><br><br>
    Gender : <input type="radio" name="abc" value="Male">Male
    <input type="radio" name="abc" value="Female">Female<br><br>
    Mark 1 : <input type="number" id="m1" name="M1"><br><br>
    Mark 2 : <input type="number" id="m2" name="M2"><br><br>
    Mark 3 : <input type="number" id="m3" name="M3"><br><br>
    <button onclick="totalll()">Calculate Total</button><br><br>
    Total : <input type="text" id="ctotal" name="total"><br><br>
    <input type="submit">
    <input type="reset">
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