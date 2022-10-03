<html>
 <head>
   <title>Proper display</title>
   
	<style>
		.para1{
			padding-top:-60px;
			padding-left: 75px;
			background-color:black;
			color: white;
			font-size: 50px;
		}
		
		.btn-group button {
			background-color: #4CAF50; /* Green background */
			border: 1px solid green; /* Green border */
			color: white; /* White text */
			padding: 10px 24px; /* Some padding */
			cursor: pointer; /* Pointer/hand icon */
			float: left; /* Float the buttons side by side */
		}
		
		.btn-group:after {
  content: "";
  clear: both;
  display: table;
}

.btn-group button:not(:last-child) {
  border-right: none; /* Prevent double borders */
}

/* Add a background color on hover */
.btn-group button:hover {
  background-color: #3e8e41;
}
		
	</style>
	
	
	
  <link rel="stylesheet" href="q.css">
 </head>
 <body>
 
<?php
	include('head.php');
	?>

<?php 
   $activemenu = "home"; 
   include('menu.php');
  ?>

<div class="content">
	<img src="x.jpg" class="responsive";">
  
</div>

<div class="para1">
<br>
	<p><b>WELCOME TO PROCAR LTD.</b></p>
	<div class="btn-group">
  <button>NEW</button>
  <button>COMING SOON</button>
  <button>PRE-OWNED</button>
</div>
</div>
 

 </body>
 
<script src="script.js"></script>

</html>
