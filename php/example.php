<?php
    $server="localhost";
    $username="root";
    $database="student";
    $conn=mysqli_connect($server,$username,"",$database);
    if(!$conn){
        die("Connection failed: ".mysqli_connect_error());
    }
    echo "<script>alert('Connected successfully')</script>";
?>