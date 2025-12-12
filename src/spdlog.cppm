// Copyright(c) 2015-present, Gabi Melman & spdlog contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

module;

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <spdlog/sinks/daily_file_sink.h>

export module spdlog;

export namespace spdlog {
    using spdlog::logger;
    using spdlog::sink_ptr;

    using spdlog::trace;
    using spdlog::debug;
    using spdlog::info;
    using spdlog::warn;
    using spdlog::error;
    using spdlog::critical;
    using spdlog::log;

    using spdlog::get;
    using spdlog::drop;
    using spdlog::drop_all;
    using spdlog::register_logger;
    using spdlog::initialize_logger;
    using spdlog::set_default_logger;
    using spdlog::default_logger;
    using spdlog::default_logger_raw;

    using spdlog::set_level;
    using spdlog::get_level;
    using spdlog::set_pattern;
    using spdlog::set_formatter;
    using spdlog::flush_on;
    using spdlog::flush_every;
    using spdlog::set_error_handler;

    using spdlog::stdout_color_mt;
    using spdlog::stdout_color_st;
    using spdlog::stderr_color_mt;
    using spdlog::stderr_color_st;
    using spdlog::basic_logger_mt;
    using spdlog::basic_logger_st;
    using spdlog::rotating_logger_mt;
    using spdlog::rotating_logger_st;
    using spdlog::daily_logger_mt;
    using spdlog::daily_logger_st;

    namespace level {
        using level::level_enum;
        using level::trace;
        using level::debug;
        using level::info;
        using level::warn;
        using level::err;
        using level::critical;
        using level::off;
        using level::n_levels;
        using level::to_string_view;
        using level::to_short_c_str;
    }

    namespace sinks {
        using sinks::sink;
        using sinks::stdout_color_sink_mt;
        using sinks::stdout_color_sink_st;
        using sinks::stderr_color_sink_mt;
        using sinks::stderr_color_sink_st;
        using sinks::basic_file_sink_mt;
        using sinks::basic_file_sink_st;
        using sinks::rotating_file_sink_mt;
        using sinks::rotating_file_sink_st;
        using sinks::daily_file_sink_mt;
        using sinks::daily_file_sink_st;
    }
}

