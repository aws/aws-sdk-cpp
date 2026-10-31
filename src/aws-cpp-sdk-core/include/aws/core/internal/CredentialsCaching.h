/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>
#include <aws/crt/Optional.h>
#include <chrono>
#include <cstdint>
#include <functional>
#include <memory>
#include <mutex>
#include <random>

namespace Aws
{
    namespace Internal
    {
        // Credential Refresh SEP timing values.
        const std::chrono::minutes CREDENTIALS_MANDATORY_REFRESH_WINDOW{1};
        const std::chrono::minutes CREDENTIALS_SHORT_LIFETIME{20};
        const std::chrono::minutes CREDENTIALS_MEDIUM_LIFETIME{90};
        const std::chrono::minutes CREDENTIALS_SHORT_ADVISORY_WINDOW{5};
        const std::chrono::minutes CREDENTIALS_MEDIUM_ADVISORY_WINDOW{15};
        const std::chrono::minutes CREDENTIALS_LONG_ADVISORY_WINDOW{60};
        const std::chrono::minutes CREDENTIALS_REFRESH_BACKOFF_MIN{5};
        const std::chrono::minutes CREDENTIALS_REFRESH_BACKOFF_MAX{10};
        const std::chrono::seconds CREDENTIALS_ERROR_CACHE_MIN{1};
        const std::chrono::seconds CREDENTIALS_ERROR_CACHE_MAX{5};

        // RefreshResult is the outcome of one credential retrieve, built with Success(), Recoverable(), or NonRecoverable().
        template<typename CredentialsT>
        class RefreshResult
        {
        public:
            enum class Status
            {
                Success,
                Recoverable,
                NonRecoverable
            };

            static RefreshResult Success(CredentialsT credentials, Aws::Utils::DateTime expiration)
            {
                return RefreshResult(Status::Success, std::move(credentials),
                                     Aws::Crt::Optional<Aws::Utils::DateTime>(expiration), {});
            }
            static RefreshResult Recoverable(Aws::String errorMessage = {})
            {
                return RefreshResult(Status::Recoverable, CredentialsT{}, {}, std::move(errorMessage));
            }
            static RefreshResult NonRecoverable(Aws::String errorMessage)
            {
                return RefreshResult(Status::NonRecoverable, CredentialsT{}, {}, std::move(errorMessage));
            }

            Status status;
            CredentialsT credentials;
            Aws::Crt::Optional<Aws::Utils::DateTime> expiration;
            Aws::String errorMessage;

        private:
            RefreshResult(Status status, CredentialsT credentials, Aws::Crt::Optional<Aws::Utils::DateTime> expiration,
                          Aws::String errorMessage)
                : status(status), credentials(std::move(credentials)),
                  expiration(std::move(expiration)), errorMessage(std::move(errorMessage)) {}
        };

        // RefreshFailureStrategy decides how long cached credentials are served after a failed refresh.
        class AWS_CORE_LOCAL RefreshFailureStrategy
        {
        public:
            // BackoffRange bounds the jittered wait before the next refresh attempt.
            struct BackoffRange
            {
                std::chrono::milliseconds min;
                std::chrono::milliseconds max;
            };

            virtual ~RefreshFailureStrategy() = default;

            // Backoff returns the range to back off within while serving cached credentials, or none to serve them only until they expire.
            virtual Aws::Crt::Optional<BackoffRange> Backoff() const = 0;
        };

        // StaticStabilityStrategy keeps serving cached credentials, even expired, and backs off before the next refresh attempt.
        class AWS_CORE_LOCAL StaticStabilityStrategy : public RefreshFailureStrategy
        {
        public:
            Aws::Crt::Optional<BackoffRange> Backoff() const override
            {
                return BackoffRange{CREDENTIALS_REFRESH_BACKOFF_MIN, CREDENTIALS_REFRESH_BACKOFF_MAX};
            }
        };

        // CredentialsCachingState caches credentials and runs the refresh lifecycle for CredentialsCachingProvider.
        template<typename CredentialsT>
        class AWS_CORE_LOCAL CredentialsCachingState
        {
        public:
            using RetrieveFunction = std::function<RefreshResult<CredentialsT>()>;
            using ClockFunction = std::function<Aws::Utils::DateTime()>;
            using JitterFunction = std::function<double()>;
            using IdentifierFunction = std::function<Aws::String(const CredentialsT&)>;

            explicit CredentialsCachingState(RetrieveFunction retrieve,
                                             IdentifierFunction identifier,
                                             std::shared_ptr<const RefreshFailureStrategy> failureStrategy,
                                             ClockFunction clock = &Aws::Utils::DateTime::Now,
                                             JitterFunction jitter = &CredentialsCachingState::DefaultJitter)
                : m_retrieve(std::move(retrieve)), m_identifier(std::move(identifier)), m_failureStrategy(std::move(failureStrategy)),
                  m_clock(std::move(clock)), m_jitter(std::move(jitter))
            {
            }

            // GetCredentials returns cached credentials, refreshing them first when a refresh is due.
            Aws::Utils::Outcome<CredentialsT, Aws::String> GetCredentials()
            {
                const int64_t nowMs = m_clock().Millis();
                CredentialsT cachedCredentials{};
                bool advisory = false;
                {
                    Aws::Utils::Threading::ReaderLockGuard guard(m_stateLock);
                    if (m_entry.credentials)
                    {
                        if (!RefreshNeeded(m_entry, nowMs))
                        {
                            return Aws::Utils::Outcome<CredentialsT, Aws::String>(*m_entry.credentials);
                        }
                        if (RateLimited(m_entry, nowMs))
                        {
                            return Aws::Utils::Outcome<CredentialsT, Aws::String>(*m_entry.credentials);
                        }
                        cachedCredentials = *m_entry.credentials;
                        advisory = !MandatoryRefreshNeeded(m_entry, nowMs);
                    }
                }

                if (advisory)
                {
                    return AdvisoryRefresh(cachedCredentials);
                }
                return WaitForRetrieve();
            }

            // Invalidate expires the cached credentials if they match rejectedIdentifier, keeping them and the backoff.
            void Invalidate(const Aws::String& rejectedIdentifier)
            {
                Aws::Utils::Threading::WriterLockGuard guard(m_stateLock);
                if (!m_entry.credentials)
                {
                    return;
                }
                if (m_identifier(*m_entry.credentials) != rejectedIdentifier)
                {
                    return;
                }
                m_entry.expiration = m_clock();
            }

        private:
            // CacheEntry holds the cached credentials, their refresh timing, and any cached non-recoverable error.
            struct CacheEntry
            {
                Aws::Crt::Optional<CredentialsT> credentials;
                Aws::Utils::DateTime expiration;
                std::chrono::milliseconds advisoryWindow{CREDENTIALS_MEDIUM_ADVISORY_WINDOW};
                int64_t nextRefreshAllowedAtMs{0};

                Aws::String errorMessage;
                int64_t errorExpiresAtMs{0};
            };

            // AdvisoryRefresh runs SingleRetrieve if no refresh is in flight, otherwise returns cachedCredentials.
            Aws::Utils::Outcome<CredentialsT, Aws::String> AdvisoryRefresh(const CredentialsT& cachedCredentials)
            {
                std::unique_lock<std::mutex> lock(m_refreshLock, std::try_to_lock);
                if (!lock.owns_lock())
                {
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(cachedCredentials);
                }
                return SingleRetrieve();
            }

            // WaitForRetrieve waits for any in-flight refresh, then runs SingleRetrieve; used for the initial and mandatory refresh.
            Aws::Utils::Outcome<CredentialsT, Aws::String> WaitForRetrieve()
            {
                std::unique_lock<std::mutex> lock(m_refreshLock);
                return SingleRetrieve();
            }

            // SingleRetrieve asks the source for new credentials and caches the result; must be called with m_refreshLock held.
            Aws::Utils::Outcome<CredentialsT, Aws::String> SingleRetrieve()
            {
                {
                    const int64_t nowMs = m_clock().Millis();
                    Aws::Utils::Threading::ReaderLockGuard guard(m_stateLock);
                    if (m_entry.credentials && !RefreshNeeded(m_entry, nowMs))
                    {
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(*m_entry.credentials);
                    }
                    if (NonRecoverableErrCached(nowMs))
                    {
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_entry.errorMessage);
                    }
                    if (m_entry.credentials && RateLimited(m_entry, nowMs))
                    {
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(*m_entry.credentials);
                    }
                }

                const RefreshResult<CredentialsT> result = m_retrieve();
                const int64_t nowMs = m_clock().Millis();

                Aws::Utils::Threading::WriterLockGuard guard(m_stateLock);
                if (result.status == RefreshResult<CredentialsT>::Status::Success &&
                    result.expiration.has_value() && result.expiration->Millis() > nowMs)
                {
                    CacheEntry entry;
                    entry.credentials = result.credentials;
                    entry.expiration = result.expiration.value();
                    entry.advisoryWindow = AdvisoryWindowFor(std::chrono::milliseconds(result.expiration->Millis() - nowMs));
                    m_entry = std::move(entry);
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(*m_entry.credentials);
                }

                if (result.status == RefreshResult<CredentialsT>::Status::NonRecoverable)
                {
                    m_entry.errorMessage = result.errorMessage;
                    m_entry.errorExpiresAtMs = nowMs + Jitter(CREDENTIALS_ERROR_CACHE_MIN, CREDENTIALS_ERROR_CACHE_MAX).count();
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(result.errorMessage);
                }

                const Aws::Crt::Optional<RefreshFailureStrategy::BackoffRange> backoffRange = m_failureStrategy->Backoff();
                if (m_entry.credentials && backoffRange)
                {
                    const std::chrono::milliseconds backoff = Jitter(backoffRange->min, backoffRange->max);
                    m_entry.nextRefreshAllowedAtMs = nowMs + backoff.count();
                    AWS_LOGSTREAM_WARN("CredentialsCachingState", "Credential refresh failed: "
                        << (result.errorMessage.empty() ? Aws::String("the credential source returned expired credentials") : result.errorMessage)
                        << ". The SDK will continue using cached credentials. A refresh of these credentials will be attempted again after "
                        << std::chrono::duration_cast<std::chrono::seconds>(backoff).count() << " seconds.");
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(*m_entry.credentials);
                }
                if (m_entry.credentials && nowMs < m_entry.expiration.Millis())
                {
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(*m_entry.credentials);
                }
                return Aws::Utils::Outcome<CredentialsT, Aws::String>(
                    result.errorMessage.empty() ? Aws::String("NoCredentialsError") : result.errorMessage);
            }

            // RefreshNeeded returns whether cached is inside its advisory window.
            static bool RefreshNeeded(const CacheEntry& entry, int64_t nowMs)
            {
                return nowMs >= entry.expiration.Millis() - entry.advisoryWindow.count();
            }

            // MandatoryRefreshNeeded returns whether cached is inside its mandatory window.
            static bool MandatoryRefreshNeeded(const CacheEntry& entry, int64_t nowMs)
            {
                return nowMs >= entry.expiration.Millis() - std::chrono::milliseconds(CREDENTIALS_MANDATORY_REFRESH_WINDOW).count();
            }

            // RateLimited returns whether a failed refresh's backoff is still active for entry.
            static bool RateLimited(const CacheEntry& entry, int64_t nowMs)
            {
                return entry.nextRefreshAllowedAtMs != 0 && nowMs < entry.nextRefreshAllowedAtMs;
            }

            // NonRecoverableErrCached returns whether a non-recoverable error is cached and not yet expired.
            bool NonRecoverableErrCached(int64_t nowMs) const
            {
                return nowMs < m_entry.errorExpiresAtMs;
            }

            // AdvisoryWindowFor returns the advisory window for a credential lifetime.
            static std::chrono::milliseconds AdvisoryWindowFor(std::chrono::milliseconds lifetime)
            {
                if (lifetime <= CREDENTIALS_SHORT_LIFETIME)
                {
                    return CREDENTIALS_SHORT_ADVISORY_WINDOW;
                }
                if (lifetime < CREDENTIALS_MEDIUM_LIFETIME)
                {
                    return CREDENTIALS_MEDIUM_ADVISORY_WINDOW;
                }
                return CREDENTIALS_LONG_ADVISORY_WINDOW;
            }

            // Jitter returns a random duration in [lo, hi].
            std::chrono::milliseconds Jitter(std::chrono::milliseconds lo, std::chrono::milliseconds hi) const
            {
                return lo + std::chrono::milliseconds(static_cast<int64_t>(m_jitter() * static_cast<double>((hi - lo).count() + 1)));
            }

            static double DefaultJitter()
            {
                static thread_local std::mt19937 generator{std::random_device{}()};
                std::uniform_real_distribution<double> distribution(0.0, 1.0);
                return distribution(generator);
            }

            RetrieveFunction m_retrieve;
            IdentifierFunction m_identifier;
            std::shared_ptr<const RefreshFailureStrategy> m_failureStrategy;
            ClockFunction m_clock;
            JitterFunction m_jitter;

            mutable Aws::Utils::Threading::ReaderWriterLock m_stateLock;
            std::mutex m_refreshLock;
            CacheEntry m_entry;
        };
    } // namespace Internal
} // namespace Aws
