#ifndef logger_HPP_INCLUDED
#define logger_HPP_INCLUDED
#include<dpp/dpp.h>

void logmsg(const dpp::message& msg);
void updated(const dpp::message_update_t& evt);
void sent(const dpp::message_create_t& evt);

#endif
