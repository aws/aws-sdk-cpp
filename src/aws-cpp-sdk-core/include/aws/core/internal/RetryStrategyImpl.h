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
        struct QuotaConfig
        {
            int retryCost = 14;
            int throttlingCost = 5;
            int initialTokens = 500;
        };

        class AWS_CORE_LOCAL ThrottleBasedRetryQuotaContainer : public RetryQuotaContainer
        {
        public:
            ThrottleBasedRetryQuotaContainer(const QuotaConfig& config = QuotaConfig{})
                : m_config(config), m_retryQuota(config.initialTokens) {}

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
                int capacityAmount = error.ShouldThrottle() ? m_config.throttlingCost : m_config.retryCost;
                return AcquireRetryQuota(capacityAmount);
            }

            void ReleaseRetryQuota(int capacityAmount) override
            {
                Aws::Utils::Threading::WriterLockGuard guard(m_retryQuotaLock);
                m_retryQuota = (std::min)(m_retryQuota + capacityAmount, m_config.initialTokens);
            }

            void ReleaseRetryQuota(const AWSError<CoreErrors>& error) override
            {
                int capacityAmount = error.ShouldThrottle() ? m_config.throttlingCost : m_config.retryCost;
                ReleaseRetryQuota(capacityAmount);
            }

            int GetRetryQuota() const override
            {
                Aws::Utils::Threading::ReaderLockGuard guard(m_retryQuotaLock);
                return m_retryQuota;
            }

        private:
            QuotaConfig m_config;
            mutable Aws::Utils::Threading::ReaderWriterLock m_retryQuotaLock;
            int m_retryQuota;
        };
    } // namespace Client
} // namespace Aws
