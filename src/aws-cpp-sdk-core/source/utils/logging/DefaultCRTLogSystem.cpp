/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/logging/DefaultCRTLogSystem.h>
#include <aws/core/utils/logging/AWSLogging.h>
#include <aws/core/utils/logging/LogSystemInterface.h>
#include <aws/core/utils/Array.h>
#include <aws/common/common.h>
#include <cstdarg>
#include <chrono>
#include <thread>
#include <mutex>

using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

namespace Aws
{
    namespace Utils
    {
        namespace Logging
        {
            DefaultCRTLogSystem::DefaultCRTLogSystem(LogLevel logLevel) :
                m_logLevel(logLevel),
                m_stopLogging(false),
                m_logsProcessed(0)
            {
            }

            DefaultCRTLogSystem::~DefaultCRTLogSystem()
            {
                m_stopLogging = true;

                // Allow all other threads running Log(...) to return
                std::unique_lock<std::mutex> lock(m_stopMutex);
                m_stopSignal.wait_for(lock,
                                      std::chrono::milliseconds(200),
                                      [&](){ return m_logsProcessed.load() == 0; });
            }

            void DefaultCRTLogSystem::Log(LogLevel logLevel, const char* subjectName, const char* formatStr, va_list args)
            {
                if(m_stopLogging)
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

                Aws::OStringStream logStream;
                if (requiredLength > 1)
                {
                    Array<char> outputBuff(requiredLength);
#ifdef _WIN32
                    vsnprintf_s(outputBuff.GetUnderlyingData(), requiredLength, _TRUNCATE, formatStr, args);
#else
                    vsnprintf(outputBuff.GetUnderlyingData(), requiredLength, formatStr, args);
#endif // _WIN32
                    logStream << outputBuff.GetUnderlyingData();
                }
                Logging::GetLogSystem()->LogStream(logLevel, subjectName, logStream);
                m_logsProcessed--;
                if(m_logsProcessed == 0 && m_stopLogging)
                {
                    std::unique_lock<std::mutex> lock(m_stopMutex);
                    m_stopSignal.notify_all();
                }
            }
        }
    }
}

