/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/internal/RetryStrategyImpl.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/local/Random.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Utils::Threading;
using namespace Aws::Client;

namespace {
    const char RETRY_STRATEGY_TAG[] = "StandardRetryStrategy";

    std::shared_ptr<RetryQuotaContainer> QuotaContainerOrDefault(std::shared_ptr<RetryQuotaContainer> retryQuotaContainer)
    {
        return retryQuotaContainer ? retryQuotaContainer : Aws::MakeShared<ThrottleBasedRetryQuotaContainer>(RETRY_STRATEGY_TAG);
    }

    StandardRetryStrategyOptions MakeOptions(long maxAttempts, std::shared_ptr<RetryQuotaContainer> retryQuotaContainer)
    {
        StandardRetryStrategyOptions options;
        options.maxAttempts = maxAttempts;
        options.retryQuotaContainer = std::move(retryQuotaContainer);
        return options;
    }

    StandardRetryStrategyOptions MakeOptions(long maxAttempts, double transientBackoffBaseSec)
    {
        StandardRetryStrategyOptions options;
        options.maxAttempts = maxAttempts;
        options.transientBackoffBaseSec = transientBackoffBaseSec;
        return options;
    }
} // anonymous namespace

namespace Aws
{
    namespace Client
    {
        namespace Internal
        {
            bool IsLegacyRetryStrategy(const RetryStrategy* retryStrategy)
            {
                return retryStrategy && Aws::String("default") == retryStrategy->GetStrategyName();
            }
        } // namespace Internal
    } // namespace Client
} // namespace Aws

namespace Aws
{
    namespace Client
    {
        static const int INITIAL_RETRY_TOKENS = 500;
        static const int RETRY_COST = 5;
        static const int TIMEOUT_RETRY_COST = 10;

        StandardRetryStrategy::StandardRetryStrategy(const StandardRetryStrategyOptions& options)
            : m_retryQuotaContainer(QuotaContainerOrDefault(options.retryQuotaContainer)), m_maxAttempts(options.maxAttempts),
              m_transientBackoffBaseSec(options.transientBackoffBaseSec) {}

        StandardRetryStrategy::StandardRetryStrategy(long maxAttempts)
            : StandardRetryStrategy(MakeOptions(maxAttempts, nullptr)) {}

        StandardRetryStrategy::StandardRetryStrategy(std::shared_ptr<RetryQuotaContainer> retryQuotaContainer, long maxAttempts)
            : StandardRetryStrategy(MakeOptions(maxAttempts, std::move(retryQuotaContainer))) {}

        StandardRetryStrategy::StandardRetryStrategy(long maxAttempts, double transientBackoffBaseSec)
            : StandardRetryStrategy(MakeOptions(maxAttempts, transientBackoffBaseSec)) {}

        StandardRetryStrategy::~StandardRetryStrategy() = default;

        void StandardRetryStrategy::RequestBookkeeping(const HttpResponseOutcome& httpResponseOutcome)
        {
            if (httpResponseOutcome.IsSuccess())
            {
                m_retryQuotaContainer->ReleaseRetryQuota(NO_RETRY_INCREMENT);
            }
        }

        void StandardRetryStrategy::RequestBookkeeping(const HttpResponseOutcome& httpResponseOutcome, const AWSError<CoreErrors>& lastError)
        {
            if (httpResponseOutcome.IsSuccess())
            {
                m_retryQuotaContainer->ReleaseRetryQuota(lastError);
            }
        }

        bool StandardRetryStrategy::ShouldRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const
        {
            if (!error.ShouldRetry())
                return false;

            if (attemptedRetries + 1 >= m_maxAttempts)
                return false;

            return m_retryQuotaContainer->AcquireRetryQuota(error);
        }

        long StandardRetryStrategy::CalculateDelayBeforeNextRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const
        {
            double x = error.ShouldThrottle() ? 1.0 : m_transientBackoffBaseSec;
            double exponentialPart = x * static_cast<double>(1L << (std::min)(attemptedRetries, 30L));
            double cappedPart = (std::min)(exponentialPart, 20.0);

            double b = static_cast<double>(Aws::Utils::GetRandomValue() % 10000) / 10000.0;
            double t_i = b * cappedPart;

            const auto& headers = error.GetResponseHeaders();
            auto it = headers.find("x-amz-retry-after");
            if (it != headers.end())
            {
                long long headerMs = Aws::Utils::StringUtils::ConvertToInt64(it->second.c_str());
                if (headerMs >= 0)
                {
                    double headerSec = static_cast<double>(headerMs) / 1000.0;
                    double clamped = (std::max)(t_i, (std::min)(headerSec, 5.0 + t_i));
                    return static_cast<long>(clamped * 1000.0);
                }
                AWS_LOGSTREAM_DEBUG(RETRY_STRATEGY_TAG, "Ignoring invalid x-amz-retry-after value: " << it->second);
            }

            return static_cast<long>(t_i * 1000.0);
        }

        DefaultRetryQuotaContainer::DefaultRetryQuotaContainer() : m_retryQuota(INITIAL_RETRY_TOKENS)
        {}

        bool DefaultRetryQuotaContainer::AcquireRetryQuota(int capacityAmount)
        {
            WriterLockGuard guard(m_retryQuotaLock);

            if (capacityAmount > m_retryQuota)
            {
                return false;
            }
            else
            {
                m_retryQuota -= capacityAmount;
                return true;
            }
        }

        bool DefaultRetryQuotaContainer::AcquireRetryQuota(const AWSError<CoreErrors>& error)
        {
            int capacityAmount = error.GetErrorType() == CoreErrors::REQUEST_TIMEOUT ? TIMEOUT_RETRY_COST : RETRY_COST;
            return AcquireRetryQuota(capacityAmount);
        }

        void DefaultRetryQuotaContainer::ReleaseRetryQuota(int capacityAmount)
        {
            WriterLockGuard guard(m_retryQuotaLock);
            m_retryQuota = (std::min)(m_retryQuota + capacityAmount, INITIAL_RETRY_TOKENS);
        }

        void DefaultRetryQuotaContainer::ReleaseRetryQuota(const AWSError<CoreErrors>& error)
        {
            int capacityAmount = error.GetErrorType() == CoreErrors::REQUEST_TIMEOUT ? TIMEOUT_RETRY_COST : RETRY_COST;
            ReleaseRetryQuota(capacityAmount);
        }
    }
}
