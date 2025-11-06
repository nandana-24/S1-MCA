<?php
    include("example.php");
    echo "<form action='login.php' method='post'>";
    echo "<h3>Login</h3>";
    echo "Username:"."<br>";
    echo "<input type='text' name='user'>"."<br>";
    echo "Password"."<br>";
    echo "<input type='password' name='pass'>"."<br><br>";
    echo "<input type='submit' name='login' value='Login'>";
    echo "<input type='reset'>";
    
    if(isset($_POST['login'])){
        $uname=$_POST['user'];
        $passs=$_POST['pass'];
        $sql="SELECT * from login1 where uname='$uname' and password='$passs'";
        $res=mysqli_query($conn,$sql);
        if(mysqli_num_rows($res)>0){
            echo "<script>window.location.href='admin.php';</script>";
        }
        else{
            echo "<script>alert('Invalid credentials');</script>";
        }
    }
    echo "</form>";
?>