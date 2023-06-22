/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/logging/CRTLogging.h>
#include <aws/core/utils/logging/CRTLogSystem.h>
#include <aws/core/utils/logging/LogLevel.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>
#include <aws/common/logging.h>

#include <memory>
#include <mutex>
#include <assert.h>
#include <cstdarg>

using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

namespace Aws
{
namespace Utils
{
namespace Logging {

static std::shared_ptr<CRTLogSystemInterface> CRTLogSystem(nullptr);
static Aws::Utils::Threading::ReaderWriterLock CRTLogSystemLock;

static bool s_CRTLogsRedirectionIsSet(false);
static aws_logger s_sdkCrtLogger;
static aws_logger s_previousCrtLogger;

static int s_aws_logger_redirect_log(
        struct aws_logger *logger,
        enum aws_log_level log_level,
        aws_log_subject_t subject,
        const char *format, ...)
{
    AWS_UNREFERENCED_PARAM(logger);
    Aws::Utils::Threading::ReaderLockGuard guard(CRTLogSystemLock);
    if (CRTLogSystem)
    {
        assert(logger->p_impl == &s_sdkCrtLogger);
        Aws::Utils::Logging::LogLevel logLevel = static_cast<LogLevel>(log_level);
        const char* subjectName = aws_log_subject_name(subject);
        va_list args;
        va_start(args, format);
        CRTLogSystem->Log(logLevel, subjectName, format, args);
        va_end(args);
        return AWS_OP_SUCCESS;
    }
    else if (s_CRTLogsRedirectionIsSet)
    {
        // SDK CRT logger is terminated, fallback to an original/previous CRT logger
        assert(s_previousCrtLogger.vtable->log);
        va_list args;
        va_start(args, format);
        auto ret = s_previousCrtLogger.vtable->log(&s_previousCrtLogger, log_level, subject, format, args);
        va_end(args);
        return ret;
    }
    assert(!"Unreachable state: this method is called without redirection set");
    return AWS_OP_ERR;
}

static enum aws_log_level s_aws_logger_redirect_get_log_level(struct aws_logger *logger, aws_log_subject_t subject)
{
    AWS_UNREFERENCED_PARAM(logger);
    Aws::Utils::Threading::ReaderLockGuard guard(CRTLogSystemLock);
    if (CRTLogSystem)
    {
        assert(logger->p_impl == &s_sdkCrtLogger);
        return (aws_log_level) (CRTLogSystem->GetLogLevel());
    }
    else if (s_CRTLogsRedirectionIsSet)
    {
        assert(s_previousCrtLogger.vtable->get_log_level);
        return s_previousCrtLogger.vtable->get_log_level(&s_previousCrtLogger, subject);
    }
    assert(!"Unreachable state: this method is called without redirection set");
    return AWS_LL_NONE;
}

static void s_aws_logger_redirect_clean_up(struct aws_logger *logger)
{
    AWS_UNREFERENCED_PARAM(logger);
    Aws::Utils::Threading::ReaderLockGuard guard(CRTLogSystemLock);
    if (CRTLogSystem)
    {
        assert(logger->p_impl == &s_sdkCrtLogger);
        return CRTLogSystem->CleanUp();
    }
    else if (s_CRTLogsRedirectionIsSet)
    {
        assert(s_previousCrtLogger.vtable->clean_up);
        return s_previousCrtLogger.vtable->clean_up(&s_previousCrtLogger);
    }
    assert(!"Unreachable state: this method is called without redirection set");
}

static int s_aws_logger_redirect_set_log_level(struct aws_logger *logger, enum aws_log_level log_level)
{
    AWS_UNREFERENCED_PARAM(logger);
    Aws::Utils::Threading::ReaderLockGuard guard(CRTLogSystemLock);
    if (CRTLogSystem)
    {
        assert(logger->p_impl == &s_sdkCrtLogger);
        CRTLogSystem->SetLogLevel(static_cast<LogLevel>(log_level));
        return AWS_OP_SUCCESS;
    }
    else if (s_CRTLogsRedirectionIsSet)
    {
        assert(s_previousCrtLogger.vtable->set_log_level);
        return s_previousCrtLogger.vtable->set_log_level(&s_previousCrtLogger, log_level);
    }
    assert(!"Unreachable state: this method is called without redirection set");
    return AWS_OP_ERR;
}

static struct aws_logger_vtable s_aws_logger_redirect_vtable = {
        s_aws_logger_redirect_log, // .log
        s_aws_logger_redirect_get_log_level, // .get_log_level
        s_aws_logger_redirect_clean_up, // .clean_up
        s_aws_logger_redirect_set_log_level // set_log_level
};


/**
 * Installs SDK wrapper over CRT logger.
 * This wrapper will redirect all CRT logger calls to the set SDK "CRTLogSystem"
 *   (or back to an original CRT logger if SDK API is terminated).
 * This method is not thread-safe (as the most other global Init/Shutdown APIs of the SDK).
 */
void SetUpCrtLogsRedirection()
{
    if (!s_CRTLogsRedirectionIsSet)
    {
        static std::once_flag flag;
        std::call_once(flag, [&]()
        {
            s_sdkCrtLogger.vtable = &s_aws_logger_redirect_vtable;
            s_sdkCrtLogger.allocator = Aws::get_aws_allocator();
            s_sdkCrtLogger.p_impl = &s_sdkCrtLogger;

            auto pPrevLogger = aws_logger_get();
            if (pPrevLogger) {
                s_previousCrtLogger = *pPrevLogger;
            }
            aws_logger_set(&s_sdkCrtLogger);
            s_CRTLogsRedirectionIsSet = true;
        });
    }
}

void InitializeCRTLogging(const std::shared_ptr<CRTLogSystemInterface>& inputCrtLogSystem) {
    Aws::Utils::Threading::WriterLockGuard g(CRTLogSystemLock);
    SetUpCrtLogsRedirection();
    CRTLogSystem = inputCrtLogSystem;
}

void ShutdownCRTLogging() {
    Aws::Utils::Threading::WriterLockGuard g(CRTLogSystemLock);
    CRTLogSystem.reset();
}

} // namespace Logging
} // namespace Utils
} // namespace Aws
