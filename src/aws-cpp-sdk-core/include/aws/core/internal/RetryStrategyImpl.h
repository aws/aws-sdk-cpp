/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>

namespace Aws
{
    namespace Client
    {
        static const int THROTTLE_BASED_RETRY_COST = 14;
        static const int THROTTLE_BASED_THROTTLING_COST = 5;
        static const int THROTTLE_BASED_INITIAL_TOKENS = 500;

        class AWS_CORE_LOCAL ThrottleBasedRetryQuotaContainer : public RetryQuotaContainer
        {
        public:
            ThrottleBasedRetryQuotaContainer(int retryCost = THROTTLE_BASED_RETRY_COST, int throttlingRetryCost = THROTTLE_BASED_THROTTLING_COST)
                : m_retryQuota(THROTTLE_BASED_INITIAL_TOKENS), m_retryCost(retryCost), m_throttlingRetryCost(throttlingRetryCost) {}

            virtual ~ThrottleBasedRetryQuotaContainer() = default;

            bool AcquireRetryQuota(int capacityAmount) override
            {
                Aws::Utils::Threading::WriterLockGuard guard(m_retryQuotaLock);
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

            bool AcquireRetryQuota(const AWSError<CoreErrors>& error) override
            {
                int capacityAmount = error.ShouldThrottle() ? m_throttlingRetryCost : m_retryCost;
                return AcquireRetryQuota(capacityAmount);
            }

            void ReleaseRetryQuota(int capacityAmount) override
            {
                Aws::Utils::Threading::WriterLockGuard guard(m_retryQuotaLock);
                m_retryQuota = (std::min)(m_retryQuota + capacityAmount, THROTTLE_BASED_INITIAL_TOKENS);
            }

            void ReleaseRetryQuota(const AWSError<CoreErrors>& error) override
            {
                int capacityAmount = error.ShouldThrottle() ? m_throttlingRetryCost : m_retryCost;
                ReleaseRetryQuota(capacityAmount);
            }

            int GetRetryQuota() const override { return m_retryQuota; }

        private:
            mutable Aws::Utils::Threading::ReaderWriterLock m_retryQuotaLock;
            int m_retryQuota;
            int m_retryCost;
            int m_throttlingRetryCost;
        };
    } // namespace Client
} // namespace Aws
