/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/logging/LogLevel.h>
#include <aws/core/utils/logging/AWSLogging.h>
#include <aws/core/utils/logging/LogSystemInterface.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

// While macros are usually grotty, using them here lets us have a simple function call interface for logging that
//
//  (1) Can be compiled out completely, so you don't even have to pay the cost to check the log level (which will be a virtual function call and a std::atomic<> read) if you don't want any AWS logging
//  (2) If you use logging and the log statement doesn't pass the conditional log filter level, not only do you not pay the cost of building the log string, you don't pay the cost for allocating or
//      getting any of the values used in building the log string, as they're in a scope (if-statement) that never gets entered.

#ifdef DISABLE_AWS_LOGGING

    #define AWS_LOG(level, tag, ...) 
    #define AWS_LOG_FATAL(tag, ...) 
    #define AWS_LOG_ERROR(tag, ...) 
    #define AWS_LOG_WARN(tag, ...) 
    #define AWS_LOG_INFO(tag, ...) 
    #define AWS_LOG_DEBUG(tag, ...) 
    #define AWS_LOG_TRACE(tag, ...) 
    #define AWS_LOG_FLUSH()

    #define AWS_LOGSTREAM(level, tag, streamExpression) 
    #define AWS_LOGSTREAM_FATAL(tag, streamExpression)
    #define AWS_LOGSTREAM_ERROR(tag, streamExpression)
    #define AWS_LOGSTREAM_WARN(tag, streamExpression)
    #define AWS_LOGSTREAM_INFO(tag, streamExpression)
    #define AWS_LOGSTREAM_DEBUG(tag, streamExpression)
    #define AWS_LOGSTREAM_TRACE(tag, streamExpression)
    #define AWS_LOGSTREAM_FLUSH()

#else

    #define AWS_LOG_FLUSH() \
        { \
            Aws::Utils::Logging::LogSystemInterface* logSystem = Aws::Utils::Logging::GetLogSystem(); \
            if ( logSystem ) \
            { \
                logSystem->Flush(); \
            } \
        }

    #define AWS_LOG(level, tag, ...) \
        { \
            Aws::Utils::Logging::LogSystemInterface* logSystem = Aws::Utils::Logging::GetLogSystem(); \
            if ( logSystem && logSystem->GetLogLevel() >= level ) \
            { \
                logSystem->Log(level, tag, __VA_ARGS__); \
            } \
        }

    #define AWS_SDK_LOG_LEVEL_NONE 0
    #define AWS_SDK_LOG_LEVEL_FATAL 1
    #define AWS_SDK_LOG_LEVEL_ERROR 2
    #define AWS_SDK_LOG_LEVEL_WARN 3
    #define AWS_SDK_LOG_LEVEL_INFO 4
    #define AWS_SDK_LOG_LEVEL_DEBUG 5
    #define AWS_SDK_LOG_LEVEL_TRACE 6

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_FATAL)
        #define AWS_LOG_FATAL(tag, ...) AWS_LOG(Aws::Utils::Logging::LogLevel::Fatal, tag, __VA_ARGS__)
    #else
        #define AWS_LOG_FATAL(tag, ...)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_ERROR)
        #define AWS_LOG_ERROR(tag, ...) AWS_LOG(Aws::Utils::Logging::LogLevel::Error, tag, __VA_ARGS__)
    #else
        #define AWS_LOG_ERROR(tag, ...)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_WARN)
        #define AWS_LOG_WARN(tag, ...) AWS_LOG(Aws::Utils::Logging::LogLevel::Warn, tag, __VA_ARGS__)
    #else
        #define AWS_LOG_WARN(tag, ...)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_INFO)
        #define AWS_LOG_INFO(tag, ...) AWS_LOG(Aws::Utils::Logging::LogLevel::Info, tag, __VA_ARGS__)
    #else
        #define AWS_LOG_INFO(tag, ...)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_DEBUG)
        #define AWS_LOG_DEBUG(tag, ...) AWS_LOG(Aws::Utils::Logging::LogLevel::Debug, tag, __VA_ARGS__)
    #else
        #define AWS_LOG_DEBUG(tag, ...)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_TRACE)
        #define AWS_LOG_TRACE(tag, ...) AWS_LOG(Aws::Utils::Logging::LogLevel::Trace, tag, __VA_ARGS__)
    #else
        #define AWS_LOG_TRACE(tag, ...)
    #endif

    #define AWS_LOGSTREAM(level, tag, streamExpression) \
        { \
            Aws::Utils::Logging::LogSystemInterface* logSystem = Aws::Utils::Logging::GetLogSystem(); \
            if ( logSystem && logSystem->GetLogLevel() >= level ) \
            { \
                Aws::OStringStream logStream; \
                logStream << streamExpression; \
                logSystem->LogStream( level, tag, logStream ); \
            } \
        }

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_FATAL)
        #define AWS_LOGSTREAM_FATAL(tag, streamExpression)  AWS_LOGSTREAM(Aws::Utils::Logging::LogLevel::Fatal, tag, streamExpression)
    #else
        #define AWS_LOGSTREAM_FATAL(tag, streamExpression)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_ERROR)
        #define AWS_LOGSTREAM_ERROR(tag, streamExpression)  AWS_LOGSTREAM(Aws::Utils::Logging::LogLevel::Error, tag, streamExpression)
    #else
        #define AWS_LOGSTREAM_ERROR(tag, streamExpression)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_WARN)
        #define AWS_LOGSTREAM_WARN(tag, streamExpression)  AWS_LOGSTREAM(Aws::Utils::Logging::LogLevel::Warn,  tag, streamExpression)
    #else
        #define AWS_LOGSTREAM_WARN(tag, streamExpression)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_INFO)
        #define AWS_LOGSTREAM_INFO(tag, streamExpression)  AWS_LOGSTREAM(Aws::Utils::Logging::LogLevel::Info,  tag, streamExpression)
    #else
        #define AWS_LOGSTREAM_INFO(tag, streamExpression)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_DEBUG)
        #define AWS_LOGSTREAM_DEBUG(tag, streamExpression)  AWS_LOGSTREAM(Aws::Utils::Logging::LogLevel::Debug, tag, streamExpression)
    #else
        #define AWS_LOGSTREAM_DEBUG(tag, streamExpression)
    #endif

    #if !defined(AWS_STATIC_LOG_LEVEL) || (AWS_STATIC_LOG_LEVEL >= AWS_SDK_LOG_LEVEL_TRACE)
        #define AWS_LOGSTREAM_TRACE(tag, streamExpression)  AWS_LOGSTREAM(Aws::Utils::Logging::LogLevel::Trace, tag, streamExpression)
    #else
        #define AWS_LOGSTREAM_TRACE(tag, streamExpression)
    #endif

    #define AWS_LOGSTREAM_FLUSH()  AWS_LOG_FLUSH()

#endif // DISABLE_AWS_LOGGING
