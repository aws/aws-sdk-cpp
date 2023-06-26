/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */



#include <aws/testing/AwsCppSdkGTestSuite.h>

#include <aws/core/utils/logging/DefaultLogSystem.h>
#include <aws/core/utils/logging/DefaultCRTLogSystem.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/CRTLogging.h>
#include <aws/core/utils/logging/CRTLogSystem.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/StringUtils.h>

#include <cstdarg>
#include <thread>
// Using regex in unit tests. However, regex are not used in the SDK for compatibility/performance reasons
#include <regex>

using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

static const char* AllocationTag = "LoggingTests";

class ScopedLogger
{
    public:
        ScopedLogger(const std::shared_ptr<LogSystemInterface>& logger)
        {
            Aws::Utils::Logging::PushLogger(logger);
        }

        ~ScopedLogger()
        {
            Aws::Utils::Logging::PopLogger();
        }

};

class MockCRTLogSystem : public DefaultCRTLogSystem
{
public:
    MockCRTLogSystem(LogLevel logLevel, std::shared_ptr<Aws::StringStream> crtLogs) :
        DefaultCRTLogSystem(logLevel),
        m_localLogs(crtLogs) {}

    void Log(LogLevel logLevel, const char* subjectName, const char* formatStr, va_list args) override
    {
        if (m_stopLogging)
        {
            return;
        }
        m_logsProcessed++;
        va_list tmp_args;
        va_copy(tmp_args, args);
    #ifdef _WIN32
        const int requiredLength = _vscprintf(formatStr, tmp_args) + 1;
    #else
        const int requiredLength = vsnprintf(nullptr, 0, formatStr, tmp_args) + 1;
    #endif
        va_end(tmp_args);

        Array<char> outputBuff(requiredLength);
    #ifdef _WIN32
        vsnprintf_s(outputBuff.GetUnderlyingData(), requiredLength, _TRUNCATE, formatStr, args);
    #else
        vsnprintf(outputBuff.GetUnderlyingData(), requiredLength, formatStr, args);
    #endif // WIN32

        Aws::OStringStream logStream;
        logStream << outputBuff.GetUnderlyingData();
        *m_localLogs << outputBuff.GetUnderlyingData() << std::endl;
        Logging::GetLogSystem()->LogStream(logLevel, subjectName, logStream);
        m_logsProcessed--;
        if(m_logsProcessed == 0 && m_stopLogging)
        {
            m_stopSignal.notify_all();
        }
    }

private:
    std::shared_ptr<Aws::StringStream> m_localLogs;
};

class ScopedCRTLogger
{
    public:
        ScopedCRTLogger(const std::shared_ptr<CRTLogSystemInterface>& crtLogger)
        {
            Aws::Utils::Logging::ShutdownCRTLogging();
            Aws::Utils::Logging::InitializeCRTLogging(crtLogger);
        }

        ~ScopedCRTLogger()
        {
            Aws::Utils::Logging::ShutdownCRTLogging();
            Aws::Utils::Logging::InitializeCRTLogging(Aws::MakeShared<Aws::Utils::Logging::DefaultCRTLogSystem>(AllocationTag, Aws::Utils::Logging::LogLevel::Trace));
        }
};

void LogAllPossibilities(const char* tag)
{
    AWS_LOG_FATAL(tag, "test fatal level");
    AWS_LOG_FATAL(tag, "test %s format level", "fatal");
    AWS_LOGSTREAM_FATAL(tag, "test " << "fatal " << "stream level" );
    AWS_LOG_ERROR(tag, "test error level");
    AWS_LOG_ERROR(tag, "test %s format level", "error");
    AWS_LOGSTREAM_ERROR(tag, "test " << "error " << "stream level" );
    AWS_LOG_WARN(tag, "test warn level");
    AWS_LOG_WARN(tag, "test %s format level", "warn");
    AWS_LOGSTREAM_WARN(tag, "test " << "warn " << "stream level" );
    AWS_LOG_INFO(tag, "test info level");
    AWS_LOG_INFO(tag, "test %s format level", "info");
    AWS_LOGSTREAM_INFO(tag, "test " << "info " << "stream level" );
    AWS_LOG_DEBUG(tag, "test debug level");
    AWS_LOG_DEBUG(tag, "test %s format level", "debug");
    AWS_LOGSTREAM_DEBUG(tag, "test " << "debug " << "stream level" );
    AWS_LOG_TRACE(tag, "test trace level");
    AWS_LOG_TRACE(tag, "test %s format level", "trace");
    AWS_LOGSTREAM_TRACE(tag, "test " << "trace " << "stream level" );

    AWS_LOG_FLUSH();
    AWS_LOGSTREAM_FLUSH();
}

// CRT will log additional bunch of log lines on its own, ignore them in this test.
static const std::vector< std::regex > LOG_LINES_TO_IGNORE =
{
    std::regex(R"(^.*id=[0-9A-F]+: main loop started)"),
    std::regex(R"(^.*id=[0-9A-F]+: default timeout 100000)"),
    std::regex(R"(^.*event-loop \[\d+\] id=(0x)?[0-9A-Fa-f]+: default timeout \d+)"),
    std::regex(R"(^.*event-loop \[\d+\] id=(0x)?[0-9A-Fa-f]+: waiting for a maximum of \d+ ms)"),
    std::regex(R"(^id=[0-9A-F]+: waiting for a maximum of \d+ ms)"),
    std::regex(R"(^.*event-loop \[\d+\] id=(0x)?[0-9A-Fa-f]+: .*)"),
    std::regex(R"(^.*event-loop \[\d+\] id=(0x)?[0-9A-Fa-f]+: subscribing to events on fd \d+)"),
    std::regex(R"(^.*event-loop \[\d+\] id=(0x)?[0-9A-Fa-f]+: wake up with 0 events to process.)"),
    std::regex(R"(^.*event-loop \[\d+\] id=(0x)?[0-9A-Fa-f]+: no more scheduled tasks using default timeout.)"),
    std::regex(R"(^.*event-loop \[\d+\] id=(0x)?[0-9A-Fa-f]+: .*)"),
    std::regex(R"(^id=(0x)?[0-9A-Fa-f]+: .*)"),
};

void FilterAdditionalSDKLogs(Aws::Vector<Aws::String>& logs)
{
    auto newLogsEnd = std::remove_if(logs.begin(), logs.end(),
                                     [](const Aws::String& entry)
                                     {
                                         const auto foundIt = std::find_if(LOG_LINES_TO_IGNORE.begin(), LOG_LINES_TO_IGNORE.end(),
                                                                           [&entry](const std::regex& regExp)
                                                                           {
                                                                               std::cmatch match;
                                                                               return std::regex_match(entry.c_str(), match, regExp);
                                                                           }
                                         );
                                         return foundIt != LOG_LINES_TO_IGNORE.end();
                                     }
    );

    logs.erase(newLogsEnd, logs.end());
}

void VerifyAllLogsAtOrBelow(LogLevel logLevel, const Aws::String& tag, const Aws::Vector<Aws::String>& loggedStatements)
{
    static const uint32_t STATEMENTS_PER_LEVEL = 3;
    uint32_t expectedLogLevels = static_cast<uint32_t>(logLevel);
    uint32_t expectedStatementCount = expectedLogLevels * STATEMENTS_PER_LEVEL;
    ASSERT_EQ(expectedStatementCount, loggedStatements.size()) << "Logged statements were:\n" <<
                                                               [&loggedStatements]() -> Aws::String
                                                               {
                                                                   Aws::String s;
                                                                   for (const auto& log : loggedStatements) s += log + Aws::String("\n");;
                                                                   return s;
                                                               }();

    for(uint32_t i = 0; i < expectedLogLevels; ++i)
    {
        LogLevel currentLevel = static_cast<LogLevel>(i + 1);
        Aws::String levelTag = "[" + GetLogLevelName(currentLevel) + "]";

        for(uint32_t j = 0; j < STATEMENTS_PER_LEVEL; ++j)
        {
            uint32_t statementIndex = i * STATEMENTS_PER_LEVEL + j;
            ASSERT_TRUE(loggedStatements[statementIndex].find(levelTag) != Aws::String::npos);
            ASSERT_TRUE(loggedStatements[statementIndex].find(tag) != Aws::String::npos);
        }

        Aws::String logText1 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL].find(logText1) != Aws::String::npos);

        Aws::String logText2 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " format level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL + 1].find(logText2) != Aws::String::npos);

        Aws::String logText3 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " stream level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL + 2].find(logText3) != Aws::String::npos);
    }
}

void DoLogTest(LogLevel logLevel, const char *testTag)
{
    auto ss = Aws::MakeShared<Aws::StringStream>(AllocationTag);

    {
        ScopedLogger loggingScope(Aws::MakeShared<DefaultLogSystem>(AllocationTag, logLevel, ss));

        LogAllPossibilities(testTag);
    }

    Aws::Vector<Aws::String> loggedStatements = StringUtils::SplitOnLine(ss->str());
    FilterAdditionalSDKLogs(loggedStatements);
    VerifyAllLogsAtOrBelow(logLevel, testTag, loggedStatements);
}

class LoggingTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LoggingTest, testFatalLogLevel)
{
    DoLogTest(LogLevel::Fatal, "LoggingTest_testFatalLogLevel");
}

TEST_F(LoggingTest, testErrorLogLevel)
{
    DoLogTest(LogLevel::Error, "LoggingTest_testErrorLogLevel");
}

TEST_F(LoggingTest, testWarnLogLevel)
{
    DoLogTest(LogLevel::Warn, "LoggingTest_testWarnLogLevel");
}

TEST_F(LoggingTest, testInfoLogLevel)
{
    DoLogTest(LogLevel::Info, "LoggingTest_testInfoLogLevel");
}

TEST_F(LoggingTest, testDebugLogLevel)
{
    DoLogTest(LogLevel::Debug, "LoggingTest_testDebugLogLevel");
}

TEST_F(LoggingTest, testTraceLogLevel)
{
    DoLogTest(LogLevel::Trace, "LoggingTest_testTraceLogLevel");
}

void CRTLogAllPossibilities()
{
    AWS_LOGF_FATAL(AWS_LS_COMMON_GENERAL, "test fatal level");
    AWS_LOGF_FATAL(AWS_LS_COMMON_GENERAL, "test %s format level", "fatal");
    AWS_LOGF_ERROR(AWS_LS_COMMON_GENERAL, "test error level");
    AWS_LOGF_ERROR(AWS_LS_COMMON_GENERAL, "test %s format level", "error");
    AWS_LOGF_WARN(AWS_LS_COMMON_GENERAL, "test warn level");
    AWS_LOGF_WARN(AWS_LS_COMMON_GENERAL, "test %s format level", "warn");
    AWS_LOGF_INFO(AWS_LS_COMMON_GENERAL, "test info level");
    AWS_LOGF_INFO(AWS_LS_COMMON_GENERAL, "test %s format level", "info");
    AWS_LOGF_DEBUG(AWS_LS_COMMON_GENERAL, "test debug level");
    AWS_LOGF_DEBUG(AWS_LS_COMMON_GENERAL, "test %s format level", "debug");
    AWS_LOGF_TRACE(AWS_LS_COMMON_GENERAL, "test trace level");
    AWS_LOGF_TRACE(AWS_LS_COMMON_GENERAL, "test %s format level", "trace");

    AWS_LOG_FLUSH();
    AWS_LOGSTREAM_FLUSH();
}

void VerifyAllCRTLogsAtOrBelow(LogLevel logLevel, const Aws::Vector<Aws::String>& loggedStatements, const Aws::Vector<Aws::String>& crtLoggedStatements)
{
    static const uint32_t STATEMENTS_PER_LEVEL = 2;
    uint32_t expectedLogLevels = static_cast<uint32_t>(logLevel);
    uint32_t expectedStatementCount = expectedLogLevels * STATEMENTS_PER_LEVEL;
    ASSERT_EQ(expectedStatementCount, loggedStatements.size()) << "Logged statements were:\n" <<
                                                               [&loggedStatements]() -> Aws::String
                                                               {
                                                                   Aws::String s;
                                                                   for (const auto& log : loggedStatements) s += log + Aws::String("\n");;
                                                                   return s;
                                                               }();

    ASSERT_EQ(expectedStatementCount, crtLoggedStatements.size()) << "CRT Logged statements were:\n" <<
                                                                  [&crtLoggedStatements]() -> Aws::String
                                                                  {
                                                                      Aws::String s;
                                                                      for (const auto& log : crtLoggedStatements) s += log + Aws::String("\n");;
                                                                      return s;
                                                                  }();

    for(uint32_t i = 0; i < expectedLogLevels; ++i)
    {
        LogLevel currentLevel = static_cast<LogLevel>(i + 1);
        Aws::String levelTag = "[" + GetLogLevelName(currentLevel) + "]";

        for(uint32_t j = 0; j < STATEMENTS_PER_LEVEL; ++j)
        {
            uint32_t statementIndex = i * STATEMENTS_PER_LEVEL + j;
            ASSERT_TRUE(loggedStatements[statementIndex].find(levelTag) != Aws::String::npos);
            ASSERT_TRUE(loggedStatements[statementIndex].find("aws-c-common") != Aws::String::npos);
        }

        Aws::String logText1 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL].find(logText1) != Aws::String::npos);
        ASSERT_TRUE(crtLoggedStatements[i * STATEMENTS_PER_LEVEL].find(logText1) != Aws::String::npos);

        Aws::String logText2 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " format level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL + 1].find(logText2) != Aws::String::npos);
        ASSERT_TRUE(crtLoggedStatements[i * STATEMENTS_PER_LEVEL + 1].find(logText2) != Aws::String::npos);
    }
}

void DoCRTLogTest(LogLevel logLevel)
{
    SCOPED_TRACE(Aws::String("DoCRTLogTest logLevel: ") + GetLogLevelName(logLevel));
    auto logs = Aws::MakeShared<Aws::StringStream>(AllocationTag);
    auto crtLogs = Aws::MakeShared<Aws::StringStream>(AllocationTag);


    {
        // regular SDK logger must not Push/Pop logger implementation
        ScopedLogger loggingScope(Aws::MakeShared<DefaultLogSystem>(AllocationTag, logLevel, logs));
        {
            ScopedCRTLogger crtLoggingScope(Aws::MakeShared<MockCRTLogSystem>(AllocationTag, logLevel, crtLogs));
            CRTLogAllPossibilities();
        }
    }

    Aws::Vector<Aws::String> loggedStatements = StringUtils::SplitOnLine(logs->str());
    Aws::Vector<Aws::String> crtLoggedStatements = StringUtils::SplitOnLine(crtLogs->str());
    FilterAdditionalSDKLogs(loggedStatements);
    FilterAdditionalSDKLogs(crtLoggedStatements);
    VerifyAllCRTLogsAtOrBelow(logLevel, loggedStatements, crtLoggedStatements);
}

class CRTLoggingTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CRTLoggingTest, testFatalLogLevel)
{
    DoCRTLogTest(LogLevel::Fatal);
}

TEST_F(CRTLoggingTest, testWarnLogLevel)
{
    DoCRTLogTest(LogLevel::Warn);
}

TEST_F(CRTLoggingTest, testInfoLogLevel)
{
    DoCRTLogTest(LogLevel::Info);
}

TEST_F(CRTLoggingTest, testDebugLogLevel)
{
    DoCRTLogTest(LogLevel::Debug);
}

TEST_F(CRTLoggingTest, testTraceLogLevel)
{
    DoCRTLogTest(LogLevel::Trace);
}
