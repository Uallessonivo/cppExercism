# Instructions
In this exercise, you'll be processing lines from a logged report. Each log line is a string formatted as follows: "[<LEVEL>]: <MESSAGE>".

There are three different log levels:

INFO
WARNING
ERROR

You have three tasks, each of which will take a log line and ask you to do something with it.

Implement the log_line::message method to return a log line's message:

log_line::message("[ERROR]: Invalid operation")
// => "Invalid operation"

Implement the log_line::log_level method to return a log line's log level, which should be returned in uppercase:

log_line::log_level("[ERROR]: Invalid operation")
// => "ERROR"


Implement the log_line::reformat method that reformats the log line, putting the message first and the log level after it in parentheses:

log_line::reformat("[INFO]: Operation completed")
// => "Operation completed (INFO)"
