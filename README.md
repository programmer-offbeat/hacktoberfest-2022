# Hacktoberfest 2022 !

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

 I will merge any valid pull request made in this repository, even if it's a minor(even a hello world works) one :)\
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
