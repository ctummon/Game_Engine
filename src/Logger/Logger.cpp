#include "Logger.h"

//Boost logger is a dick and wont compile with mingw, should just use msvc? Stop being a twat Cathal, fukken boost faggit.

/*
#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/sinks/text_file_backend.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>

namespace logging = boost::log;
namespace src = boost::log::sources;
namespace sinks = boost::log::sinks;
namespace keywords = boost::log::keywords;

Logger::Logger()
{
    //ctor
}

Logger::~Logger()
{
    //dtor
}

void InitializeLogger()
{
    logging::add_file_log
    (
     keywords::file_name = "GameEngine_%N.log",
     keywords::rotation_size  = 10 * 1024 * 1024,
     keywords::format =  "[%TimeStamp%]: %Message%"
    );
}

void TestLogger()
{
    InitializeLogger();
    logging::add_common_attributes();

    using namespace logging::trivial;
    src::severity_logger< severity_level > lg;

    BOOST_LOG_SEV(lg, trace) << "A trace severity message";
    BOOST_LOG_SEV(lg, debug) << "A debug severity message";
    BOOST_LOG_SEV(lg, info) << "An informational severity message";
    BOOST_LOG_SEV(lg, warning) << "A warning severity message";
    BOOST_LOG_SEV(lg, error) << "An error severity message";
    BOOST_LOG_SEV(lg, fatal) << "A fatal severity message";
}
*/

