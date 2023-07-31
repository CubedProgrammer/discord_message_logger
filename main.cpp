#include<iostream>
#include<vector>
#include<dpp/dpp.h>
#include"logger.hpp"

using namespace std;
using namespace dpp;

int main_pp(vector<string>&args)
{
    string bot_token = getenv("TOKEN");
    cluster loggerbot(bot_token, intents::i_all_intents);
    loggerbot.on_message_create(sent);
    loggerbot.on_message_update(updated);
    loggerbot.start(true);
    cout << "discord_message_logger" << endl;
    cin.get();
    return 0;
}
int main(int argl,char**argv)
{
    vector<string>args(argv + 1, argv + argl);
    return main_pp(args);
}
