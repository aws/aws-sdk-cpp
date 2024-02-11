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

class ScopedLogger final
{
public:
    ScopedLogger(const std::shared_ptr<LogSystemInterface>& logger)
      : m_logger(logger)
    {
        Aws::Utils::Logging::PushLogger(logger);
    }

    ~ScopedLogger()
    {
        Aws::Utils::Logging::PopLogger();
        // GetLogSystem returns a raw pointer, force flush and let all threads possibly having this raw ptr to release it
        m_logger->Flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        m_logger.reset();
    }

private:
    std::shared_ptr<LogSystemInterface> m_logger;
};

class MockCRTLogSystem : public DefaultCRTLogSystem
{
public:
    MockCRTLogSystem(LogLevel logLevel, std::shared_ptr<Aws::StringStream> crtLogs) :
        DefaultCRTLogSystem(logLevel),
        m_localLogs(crtLogs) {}

    ~MockCRTLogSystem()
    {
        // make sure that MockCRTLogSystem::m_localLogs is not freed before MockCRTLogSystem::Log finishes
        m_stopLogging = true;

        // Allow all other threads running Log(...) to return
        std::unique_lock<std::mutex> lock(m_stopMutex);
        m_stopSignal.wait_for(lock,
                              std::chrono::milliseconds(200),
                              [&](){ return m_logsProcessed.load() == 0; });
    }

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
        if(!outputBuff.GetUnderlyingData() || !outputBuff.GetLength()) {
            assert(!"Failed to allocate mock outputBuff!");
            return;
        }
    #ifdef _WIN32
        vsnprintf_s(outputBuff.GetUnderlyingData(), outputBuff.GetLength(), _TRUNCATE, formatStr, args);
    #else
        vsnprintf(outputBuff.GetUnderlyingData(), requiredLength, formatStr, args);
    #endif // WIN32

        Aws::OStringStream logStream;
        logStream << outputBuff.GetUnderlyingData();
        {
            /* Apparently, a "stream object" is not thread safe per the C++ standard.
             *  and MSVS's stringstream conforms to the standard.
             */
            std::unique_lock<std::mutex> lock(m_localLogsMutex);
            *m_localLogs << outputBuff.GetUnderlyingData() << std::endl;
        }
        Logging::GetLogSystem()->LogStream(logLevel, subjectName, logStream);
        m_logsProcessed--;
        if(m_logsProcessed == 0 && m_stopLogging)
        {
            m_stopSignal.notify_all();
        }
    }

private:
    std::shared_ptr<Aws::StringStream> m_localLogs;
    mutable std::mutex m_localLogsMutex;
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
    std::regex(R"(^.*event-loop \[(0x)?[0-9A-Fa-f]+\] id=(0x)?[0-9A-Fa-f]+: default timeout \d+)"),
    std::regex(R"(^.*event-loop \[(0x)?[0-9A-Fa-f]+\] id=(0x)?[0-9A-Fa-f]+: waiting for a maximum of \d+ ms)"),
    std::regex(R"(^id=[0-9A-F]+: waiting for a maximum of \d+ ms)"),
    std::regex(R"(^.*event-loop \[(0x)?[0-9A-Fa-f]+\] id=(0x)?[0-9A-Fa-f]+: .*)"),
    std::regex(R"(^.*event-loop \[(0x)?[0-9A-Fa-f]+\] id=(0x)?[0-9A-Fa-f]+: subscribing to events on fd \d+)"),
    std::regex(R"(^.*event-loop \[(0x)?[0-9A-Fa-f]+\] id=(0x)?[0-9A-Fa-f]+: wake up with 0 events to process.)"),
    std::regex(R"(^.*event-loop \[(0x)?[0-9A-Fa-f]+\] id=(0x)?[0-9A-Fa-f]+: no more scheduled tasks using default timeout.)"),
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
    SCOPED_TRACE(Aws::String("It is ") + Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601) + " o'clock.");
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

class LoggingTestLogFileRace : public Aws::Testing::AwsCppSdkGTestSuite
{
};

void LogOnCRTLogSystemInterfaceWithoutVaArgs(CRTLogSystemInterface* object, LogLevel logLevel, const char* subjectName, const char* formatStr, ...)
{
    va_list args;
    va_start(args, formatStr);
    assert(object);
    object->Log(logLevel, subjectName, formatStr, args);
    va_end(args);
}

TEST_F(LoggingTestLogFileRace, testRaceOnLogFile)
{
    /*
     * Tests a race condition on the default log file (in case of multiple processes / loggers using the same SDK log file).
     */
    static const size_t PARALLEL_COUNT = 32;
    Aws::Vector<std::future<bool>> futures(PARALLEL_COUNT);

    std::atomic<bool> run;
    run = false;

    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        futures[i] = std::async(std::launch::async,
                [i, &run]()-> bool
                {
                    while(true)
                    {
                        if(run.load())
                        {
                            break;
                        }
                    }

                    Aws::UniquePtr<DefaultLogSystem> logSystem =
                            Aws::MakeUnique<DefaultLogSystem>(AllocationTag, LogLevel::Info, "testRaceOnLogFile");
                    Aws::String logMsgTag = "testRaceOnLogFile thread #" + Aws::Utils::StringUtils::to_string(i);
                    logSystem->Log(LogLevel::Info, logMsgTag.c_str(), "Knock knock");
                    logSystem->Log(LogLevel::Info, logMsgTag.c_str(), " - Who's there?");
                    logSystem->Log(LogLevel::Info, logMsgTag.c_str(), " - Race condition!");
                    for(size_t j = 0; j < 100; ++j)
                    {
                        logSystem->Log(LogLevel::Info, logMsgTag.c_str(), "All work and no play makes Jack a dull boy");
                    }

                    return true;
                });
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    run = true;

    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        bool success = futures[i].get();
        ASSERT_TRUE(success);
    }
}

TEST_F(LoggingTestLogFileRace, testMockCrtRaceOnLogFile)
{
    /*
     * Tests a race condition on MockCRTLogSystem, create a logger per each thread.
     * It is a test on a test helper.
     */
    static const size_t PARALLEL_COUNT = 32;
    Aws::Vector<std::future<bool>> futures(PARALLEL_COUNT);

    std::atomic<bool> run;
    run = false;

    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        futures[i] = std::async(std::launch::async,
                                [i, &run]()-> bool
                                {
                                    auto crtLogs = Aws::MakeShared<Aws::StringStream>(AllocationTag);
                                    while(true)
                                    {
                                        if(run.load())
                                        {
                                            break;
                                        }
                                    }

                                    Aws::UniquePtr<MockCRTLogSystem> logSystem =
                                            Aws::MakeUnique<MockCRTLogSystem>(AllocationTag, LogLevel::Info, crtLogs);
                                    Aws::String logMsgTag = "testMockCrtRaceOnLogFile thread #" + Aws::Utils::StringUtils::to_string(i);
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), "Knock knock");
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), " - Who's there?");
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), " - Race condition!");
                                    for(size_t j = 0; j < 100; ++j)
                                    {
                                        LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), "All work and no play makes Jack a dull boy");
                                    }

                                    return true;
                                });
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    run = true;

    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        bool success = futures[i].get();
        ASSERT_TRUE(success);
    }
}

TEST_F(LoggingTestLogFileRace, testMockCrtRaceOnSingleLogger)
{
    /*
     * Tests a race condition on MockCRTLogSystem, create a single logger for all threads.
     * It is a test on a test helper.
     */
    static const size_t PARALLEL_COUNT = 32;
    Aws::Vector<std::future<bool>> futures(PARALLEL_COUNT);

    std::atomic<bool> run;
    run = false;

    auto crtLogs = Aws::MakeShared<Aws::StringStream>(AllocationTag);
    Aws::UniquePtr<MockCRTLogSystem> logSystem =
            Aws::MakeUnique<MockCRTLogSystem>(AllocationTag, LogLevel::Info, crtLogs);

    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        futures[i] = std::async(std::launch::async,
                                [i, &run, &logSystem]()-> bool
                                {
                                    while(true)
                                    {
                                        if(run.load())
                                        {
                                            break;
                                        }
                                    }

                                    Aws::String logMsgTag = "testMockCrtRaceOnLogFile thread #" + Aws::Utils::StringUtils::to_string(i);
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), "Knock knock");
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), " - Who's there?");
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), " - Race condition!");
                                    for(size_t j = 0; j < 100; ++j)
                                    {
                                        LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), "All work and no play makes Jack a dull boy");
                                    }

                                    return true;
                                });
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    run = true;

    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        bool success = futures[i].get();
        ASSERT_TRUE(success);
    }
}

TEST_F(LoggingTestLogFileRace, testCrtLoggerRaceMultipleLoggers)
{
    /*
     * Tests a race condition on the DefaultCRTLogSystem, create CRT logger per each thread.
     * It is a test on an SDK component, not on a test helper.
     */
    static const size_t PARALLEL_COUNT = 32;
    Aws::Vector<std::future<bool>> futures(PARALLEL_COUNT);

    std::atomic<bool> run;
    run = false;

    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        futures[i] = std::async(std::launch::async,
                                [i, &run]()-> bool
                                {
                                    while(true)
                                    {
                                        if(run.load())
                                        {
                                            break;
                                        }
                                    }

                                    Aws::UniquePtr<DefaultCRTLogSystem> logSystem =
                                            Aws::MakeUnique<DefaultCRTLogSystem>(AllocationTag, LogLevel::Info);
                                    Aws::String logMsgTag = "testCrtRaceOnLogFile thread #" + Aws::Utils::StringUtils::to_string(i);
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), "Knock knock");
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), " - Who's there?");
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), " - Race condition!");
                                    for(size_t j = 0; j < 100; ++j)
                                    {
                                        LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), "All work and no play makes Jack a dull boy");
                                    }

                                    return true;
                                });
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    run = true;

    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        bool success = futures[i].get();
        ASSERT_TRUE(success);
    }
}

TEST_F(LoggingTestLogFileRace, testCrtLoggerRaceSingleLogger)
{
    /*
     * Tests a race condition on the DefaultCRTLogSystem, create single CRT logger for all
     * It is a test on an SDK component, not on a test helper.
     */
    static const size_t PARALLEL_COUNT = 32;
    Aws::Vector<std::future<bool>> futures(PARALLEL_COUNT);

    std::atomic<bool> run;
    run = false;

    Aws::UniquePtr<DefaultCRTLogSystem> logSystem =
            Aws::MakeUnique<DefaultCRTLogSystem>(AllocationTag, LogLevel::Info);
    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        futures[i] = std::async(std::launch::async,
                                [i, &run, &logSystem]()-> bool
                                {
                                    while(true)
                                    {
                                        if(run.load())
                                        {
                                            break;
                                        }
                                    }


                                    Aws::String logMsgTag = "testCrtRaceOnLogFile thread #" + Aws::Utils::StringUtils::to_string(i);
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), "Knock knock");
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), " - Who's there?");
                                    LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), " - Race condition!");
                                    for(size_t j = 0; j < 100; ++j)
                                    {
                                        LogOnCRTLogSystemInterfaceWithoutVaArgs(logSystem.get(), LogLevel::Info, logMsgTag.c_str(), "All work and no play makes Jack a dull boy");
                                    }

                                    return true;
                                });
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    run = true;

    for(size_t i = 0; i < PARALLEL_COUNT; ++i)
    {
        bool success = futures[i].get();
        ASSERT_TRUE(success);
    }
}