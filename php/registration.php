<html>
    <head></head>
    <body>
        <form action="registration.php" method="post">
        <h2>Registration form</h2>
        Roll no<br>
        <input type="number" name="roll"><br>
        Name<br>
        <input type="text" name="name"><br>
        Address<br>
        <input type="text" name="addr"><br>
        Phone number<br>
        <input type="number" name="phn"><br>
        Username<br>
        <input type="text" name="uname"><br>
        Password<br>
        <input type="password" name="pass"><br>
        Re-Type password<br>
        <input type="password" name="repass"><br>
        <input type="submit" name="submit">
        <input type="reset">
        </form>
        <?php
        include("example.php");
            if(isset($_POST['submit'])){
                $name=$_POST['name'];
                $roll=$_POST['roll'];
                $addr=$_POST['addr'];
                $phn=$_POST['phn'];
                $uname=$_POST['uname'];
                $pass=$_POST['pass'];
                $repass=$_POST['repass'];
                $sql="INSERT into login values('$roll','$name','$addr','$phn','$uname','$pass')";
                if(mysqli_query($conn,$sql)){
                    echo "<script>alert('Updated!');</script>";
                }
            }
        ?>
    </body>
</html>
