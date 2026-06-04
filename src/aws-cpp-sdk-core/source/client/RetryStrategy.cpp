/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/internal/RetryStrategyImpl.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/local/Random.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Utils::Threading;
using namespace Aws::Client;

static const char RETRY_STRATEGY_TAG[] = "StandardRetryStrategy";
static const int INITIAL_RETRY_TOKENS = 500;
static const int RETRY_COST = 5;
static const int TIMEOUT_RETRY_COST = 10;

namespace Aws
{
    namespace Client
    {
        class StandardRetryStrategy::RetryImpl
        {
        public:
            virtual ~RetryImpl() = default;
            virtual long CalculateDelay(const AWSError<CoreErrors>& error, long attemptedRetries) const = 0;
        };
    }
}

namespace {
    bool IsNewRetriesEnabled()
    {
        return Aws::Utils::StringUtils::ToLower(Aws::Environment::GetEnv("AWS_NEW_RETRIES_2026").c_str()) == "true";
    }

    class LegacyRetryImpl : public StandardRetryStrategy::RetryImpl
    {
    public:
        long CalculateDelay(const AWSError<CoreErrors>& error, long attemptedRetries) const override
        {
            AWS_UNREFERENCED_PARAM(error);
            // Maximum left shift factor is capped by ceil(log2(max_delay)), to avoid wrap-around and overflow into negative values:
            return std::min(static_cast<int>(Aws::Utils::GetRandomValue() % 1000) * (1 << std::min(attemptedRetries, 15L)), 20000);
        }
    };

    class NewRetriesImpl : public StandardRetryStrategy::RetryImpl
    {
    public:
        long CalculateDelay(const AWSError<CoreErrors>& error, long attemptedRetries) const override
        {
            double x = error.ShouldThrottle() ? 1.0 : 0.05;
            double exponentialPart = x * static_cast<double>(1L << (std::min)(attemptedRetries, 30L));
            double cappedPart = (std::min)(exponentialPart, 20.0);

            double b = static_cast<double>(Aws::Utils::GetRandomValue() % 10000) / 10000.0;
            double t_i = b * cappedPart;

            const auto& headers = error.GetResponseHeaders();
            auto it = headers.find("x-amz-retry-after");
            if (it != headers.end())
            {
                long long headerMs = Aws::Utils::StringUtils::ConvertToInt64(it->second.c_str());
                if (headerMs < 0)
                {
                    AWS_LOGSTREAM_DEBUG(RETRY_STRATEGY_TAG, "Ignoring invalid x-amz-retry-after value: " << it->second);
                }
                double headerSec = static_cast<double>(headerMs) / 1000.0;
                double clamped = (std::max)(t_i, (std::min)(headerSec, 5.0 + t_i));
                return static_cast<long>(clamped * 1000.0);
            }

            return static_cast<long>(t_i * 1000.0);
        }
    };

    Aws::UniquePtr<StandardRetryStrategy::RetryImpl> CreateRetryImpl()
    {
        if (IsNewRetriesEnabled())
        {
            return Aws::MakeUnique<NewRetriesImpl>("StandardRetryStrategy");
        }
        return Aws::MakeUnique<LegacyRetryImpl>("StandardRetryStrategy");
    }

    std::shared_ptr<RetryQuotaContainer> CreateQuotaContainer()
    {
        if (IsNewRetriesEnabled())
        {
            return Aws::MakeShared<ThrottleBasedRetryQuotaContainer>("StandardRetryStrategy");
        }
        return Aws::MakeShared<DefaultRetryQuotaContainer>("StandardRetryStrategy");
    }
} // anonymous namespace

namespace Aws
{
    namespace Client
    {
        StandardRetryStrategy::StandardRetryStrategy(long maxAttempts)
            : m_retryQuotaContainer(CreateQuotaContainer()), m_maxAttempts(maxAttempts),
              m_impl(CreateRetryImpl()) {}

        StandardRetryStrategy::StandardRetryStrategy(std::shared_ptr<RetryQuotaContainer> retryQuotaContainer, long maxAttempts)
            : m_retryQuotaContainer(retryQuotaContainer), m_maxAttempts(maxAttempts),
              m_impl(CreateRetryImpl()) {}

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
            return m_impl->CalculateDelay(error, attemptedRetries);
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
