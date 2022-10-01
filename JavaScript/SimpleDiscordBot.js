console.log("       ➥ Loading the bot.");
const { Client } = require('discord.js');

const client2 = new Client({
    intents: 32767
})

const client = new Client({
  fetchAllMembers: false,
  restTimeOffset: 0,
  failIfNotExists: false,
  shards: "auto",
  allowedMentions: {
  parse: [],
  repliedUser: false,
  },
  partials: ['MESSAGE', 'CHANNEL', 'REACTION', 'GUILD_MEMBER', 'USER'],
  intents: 32767,
});


console.log("       ➥ Getting ready\n")
client.on('ready', async() => {
    client.user.setActivity("Bot has logged in as "+client.user.tag);
});

client.login("TOKEN HERE")
