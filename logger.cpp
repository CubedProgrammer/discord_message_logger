#include<fstream>
#include<iostream>
#include"logger.hpp"

using namespace std;
using namespace dpp;

void logmsg(const message& msg)
{
    cout << (uint64_t)msg.id << " from " << (uint64_t)msg.channel_id << " of " << (uint64_t)msg.guild_id << '\n';
    cout << "Written by " << (uint64_t)msg.author.id << '\n';
    cout << msg.content << '\n' << endl;
}

void updated(const message_update_t& evt)
{
    cout << "Message edited" << endl;
    logmsg(evt.msg);
}

void sent(const message_create_t& evt)
{
    cout << "Message sent" << endl;
    logmsg(evt.msg);
}
