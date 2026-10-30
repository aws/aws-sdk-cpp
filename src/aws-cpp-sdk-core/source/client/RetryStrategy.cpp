/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/DefaultRetryStrategy.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/internal/RetryStrategyImpl.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/local/Random.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Utils::Threading;
using namespace Aws::Client;

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
    const char RETRY_STRATEGY_TAG[] = "StandardRetryStrategy";

    const double DEFAULT_TRANSIENT_BACKOFF_BASE_SEC = 0.05;

    class NewRetriesImpl : public StandardRetryStrategy::RetryImpl
    {
    public:
        explicit NewRetriesImpl(double transientBackoffBaseSec) : m_transientBackoffBaseSec(transientBackoffBaseSec) {}

        long CalculateDelay(const AWSError<CoreErrors>& error, long attemptedRetries) const override
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

    private:
        double m_transientBackoffBaseSec;
    };

    Aws::UniquePtr<StandardRetryStrategy::RetryImpl> CreateRetryImpl(double transientBackoffBaseSec)
    {
        return Aws::MakeUnique<NewRetriesImpl>("StandardRetryStrategy", transientBackoffBaseSec);
    }

    std::shared_ptr<RetryQuotaContainer> CreateQuotaContainer()
    {
        return Aws::MakeShared<ThrottleBasedRetryQuotaContainer>("StandardRetryStrategy");
    }

    // Error names the core error mapper classifies as retryable only since Retry Behavior 2.1.
    // Legacy retry mode did not retry them.
    const char* const RETRY_21_ONLY_ERROR_NAMES[] = {"TooManyRequestsException",       "ProvisionedThroughputExceededException",
                                                     "TransactionInProgressException", "RequestLimitExceeded",
                                                     "BandwidthLimitExceeded",         "LimitExceededException",
                                                     "PriorRequestNotComplete",        "EC2ThrottledException",
                                                     "IDPCommunicationError"};

    bool IsRetry21OnlyError(const AWSError<CoreErrors>& error)
    {
        const CoreErrors errorType = error.GetErrorType();
        if (errorType == CoreErrors::THROTTLING || errorType == CoreErrors::NETWORK_CONNECTION)
        {
            const Aws::String& name = error.GetExceptionName();
            for (const char* retry21OnlyName : RETRY_21_ONLY_ERROR_NAMES)
            {
                if (name == retry21OnlyName)
                {
                    return true;
                }
            }
        }
        // Legacy retry mode did not retry a 429 naming an exception the SDK does not know.
        return error.GetResponseCode() == Aws::Http::HttpResponseCode::TOO_MANY_REQUESTS &&
               errorType == CoreErrors::UNKNOWN && !error.GetExceptionName().empty();
    }

    class LegacyRetryStrategy : public DefaultRetryStrategy
    {
    public:
        bool ShouldRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const override
        {
            if (IsRetry21OnlyError(error))
            {
                return false;
            }
            return DefaultRetryStrategy::ShouldRetry(error, attemptedRetries);
        }
    };
} // anonymous namespace

namespace Aws
{
    namespace Client
    {
        namespace Internal
        {
            std::shared_ptr<RetryStrategy> CreateLegacyRetryStrategy()
            {
                return Aws::MakeShared<LegacyRetryStrategy>(RETRY_STRATEGY_TAG);
            }

            bool UsesRetryBehavior21(const RetryStrategy* retryStrategy)
            {
                // DefaultRetryStrategy is the legacy retry behavior, so it keeps the request handling from before Retry Behavior 2.1.
                return retryStrategy && Aws::String("default") != retryStrategy->GetStrategyName();
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

        StandardRetryStrategy::StandardRetryStrategy(long maxAttempts)
            : m_retryQuotaContainer(CreateQuotaContainer()), m_maxAttempts(maxAttempts),
              m_impl(CreateRetryImpl(DEFAULT_TRANSIENT_BACKOFF_BASE_SEC)) {}

        StandardRetryStrategy::StandardRetryStrategy(std::shared_ptr<RetryQuotaContainer> retryQuotaContainer, long maxAttempts)
            : m_retryQuotaContainer(retryQuotaContainer), m_maxAttempts(maxAttempts),
              m_impl(CreateRetryImpl(DEFAULT_TRANSIENT_BACKOFF_BASE_SEC)) {}

        StandardRetryStrategy::StandardRetryStrategy(long maxAttempts, double transientBackoffBaseSec)
            : m_retryQuotaContainer(CreateQuotaContainer()), m_maxAttempts(maxAttempts),
              m_impl(CreateRetryImpl(transientBackoffBaseSec)) {}

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
