<h1 align="center"> <img src= "https://octodex.github.com/images/original.png" width= "40" /> HacktoberFest 2022 <img src= "https://octodex.github.com/images/original.png" width= "40" /> </h1>




<img src= "https://external-preview.redd.it/d_6uprRJpBPS9-1ExJsjCWbbrQrHg8V1DxvTmCsSpH0.jpg?width=640&crop=smart&auto=webp&s=c86d4993194a52f9b1e39ccd6a929d532f380bf7" width= "400"/>

<br> <br>

[![Open Source Love](https://firstcontributions.github.io/open-source-badges/badges/open-source-v1/open-source.svg)](https://github.com/MrKrishnaAgarwal/Hacktoberfest2022)
<img src="https://img.shields.io/badge/HacktoberFest-2022-blueviolet" alt="Hacktober Badge"/>
<img src="https://img.shields.io/static/v1?label=%E2%AD%90&message=If%20Useful&style=style=flat&color=BC4E99" alt="Star Badge"/>
<a href="https://github.com/MrKrishnaAgarwal" ><img src="https://img.shields.io/badge/Contributions-welcome-green.svg?style=flat&logo=github" alt="Contributions" /></a>
<a href="https://github.com/MrKrishnaAgarwal/hacktoberfest2022/pulls"><img src="https://img.shields.io/github/issues-pr/MrKrishnaAgarwal/hacktoberfest2022" alt="Pull Requests Badge"/></a>

<h4> You can make folders of programming languages and also you can contribute in the repo's below.</h4>

<h4> Feel free to contribute to this repo by creating and editing little programs in any programming language and make different folders for the code you want to contribute. </h4>

October is here ! Stand for a chance to win merch from [Hacktoberfest](https://hacktoberfest.com) by making PRs to this repository!

## . ✎ How to participate

╭︰Head on to [Hacktoberfest Official Website](https://hacktoberfest.com) to register.\
︰・Login with your GitHub, then fill out the necessary details.\
︰・Search GitHub for open-source repositories with the tag `hacktoberfest`, and create Pull requests.\
︰・You can contribute anything as long as it complies with the [Guidelines](https://hacktoberfest.com/participation/#pr-mr-details).\
︰・If your PR gets merged, Hacktoberfest staff will analyse it, and upon a successful and valid merge, it will be counted as 1 contribution in your [profile](https://hacktoberfest.com/profile/).\
╰︰Create 4 successful PRs and earn a merch from Hacktoberfest !!!!

```bash
 
```

## . ✎ Contributions to this repo

 I will merge any valid pull request made in this repository, even if it's a minor one(even a hello world works) :)\
Rules & tips:
- No copied/stolen codes.
- Post codes in their respective language directories/folders.
- You can create PRs to this readme too, to make it better.
- Better codes = better chances of being selected.
- No spammy Pull Requests.


```javascript
const { luck } = require("coolPRs");
console.log("All the best !");
let pr = document.getElementById("yourPR");
let contributions = 0;
process.on('newPRs', async(pullRequest) => {
   if(pr.content.isWorthy()){
       await luck().then(async(hacktoberfest) => {
          await pullRequest.accept();
          let accepted = hacktoberfest.analyse(pullRequest); //returns boolean xD
          if(accepted) contributions++;
      });
   }
   if(contributions >= 4) console.log("CONGRATULATIONS🎉 ! YOU HAVE COMPLETED YOUR GOAL !\nHead over to your profile to claim your rewards !");
})
```
### . ✎ Support and contact
For support or queries, Contact me on Discord, tag : `Astrexx.jar#4035`

![](https://discord.c99.nl/widget/theme-3/848724317416325160.png) 
*** 

Cheers,\
Yash
