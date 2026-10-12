/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>
#include <aws/crt/Optional.h>
#include <chrono>
#include <cstdint>
#include <functional>
#include <mutex>
#include <random>

namespace Aws
{
    namespace Internal
    {
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
                                             ClockFunction clock = &Aws::Utils::DateTime::Now,
                                             JitterFunction jitter = &CredentialsCachingState::DefaultJitter)
                : m_retrieve(std::move(retrieve)), m_identifier(std::move(identifier)),
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
                    if (m_cached)
                    {
                        if (!m_cached->RefreshNeeded(nowMs))
                        {
                            return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                        }
                        if (m_cached->RateLimited(nowMs))
                        {
                            return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                        }
                        cachedCredentials = m_cached->credentials;
                        advisory = !m_cached->MandatoryRefreshNeeded(nowMs);
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
                if (!m_cached)
                {
                    return;
                }
                if (m_identifier(m_cached->credentials) != rejectedIdentifier)
                {
                    return;
                }
                m_cached->expiration = m_clock();
            }

        private:
            // CachedCredentials holds the cached credentials and their refresh timing.
            struct CachedCredentials
            {
                CredentialsT credentials;
                Aws::Utils::DateTime expiration;
                std::chrono::milliseconds advisoryWindow{std::chrono::minutes(15)};
                int64_t nextRefreshAllowedAtMs{0};

                bool RefreshNeeded(int64_t nowMs) const
                {
                    return nowMs >= expiration.Millis() - advisoryWindow.count();
                }

                bool MandatoryRefreshNeeded(int64_t nowMs) const
                {
                    return nowMs >= expiration.Millis() - std::chrono::milliseconds(std::chrono::minutes(1)).count();
                }

                bool RateLimited(int64_t nowMs) const
                {
                    return nextRefreshAllowedAtMs != 0 && nowMs < nextRefreshAllowedAtMs;
                }
            };

            // CachedError holds a non-recoverable error and when it stops being served.
            struct CachedError
            {
                Aws::String message;
                int64_t expiresAtMs{0};
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
                    if (m_cached && !m_cached->RefreshNeeded(nowMs))
                    {
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                    }
                    if (NonRecoverableErrCached(nowMs))
                    {
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cachedError->message);
                    }
                    if (m_cached && m_cached->RateLimited(nowMs))
                    {
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                    }
                }

                const RefreshResult<CredentialsT> result = m_retrieve();
                const int64_t nowMs = m_clock().Millis();

                Aws::Utils::Threading::WriterLockGuard guard(m_stateLock);
                if (result.status == RefreshResult<CredentialsT>::Status::Success &&
                    result.expiration.has_value() && result.expiration->Millis() > nowMs)
                {
                    CachedCredentials entry;
                    entry.credentials = result.credentials;
                    entry.expiration = result.expiration.value();
                    entry.advisoryWindow = AdvisoryWindowFor(std::chrono::milliseconds(result.expiration->Millis() - nowMs));
                    m_cached = std::move(entry);
                    m_cachedError.reset();
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                }

                if (result.status == RefreshResult<CredentialsT>::Status::NonRecoverable)
                {
                    CachedError error;
                    error.message = result.errorMessage;
                    error.expiresAtMs = nowMs + Jitter(std::chrono::seconds(1), std::chrono::seconds(5)).count();
                    m_cachedError = std::move(error);
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(result.errorMessage);
                }

                if (m_cached)
                {
                    m_cached->nextRefreshAllowedAtMs = nowMs + Jitter(std::chrono::minutes(5), std::chrono::minutes(10)).count();
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                }
                return Aws::Utils::Outcome<CredentialsT, Aws::String>(
                    result.errorMessage.empty() ? Aws::String("NoCredentialsError") : result.errorMessage);
            }

            // NonRecoverableErrCached returns whether a non-recoverable error is cached and not yet expired.
            bool NonRecoverableErrCached(int64_t nowMs) const
            {
                return m_cachedError && nowMs < m_cachedError->expiresAtMs;
            }

            // AdvisoryWindowFor returns the advisory window for a credential lifetime.
            static std::chrono::milliseconds AdvisoryWindowFor(std::chrono::milliseconds lifetime)
            {
                if (lifetime <= std::chrono::minutes(20))
                {
                    return std::chrono::minutes(5);
                }
                if (lifetime < std::chrono::minutes(90))
                {
                    return std::chrono::minutes(15);
                }
                return std::chrono::minutes(60);
            }

            // Jitter returns a random duration in [lo, hi).
            std::chrono::milliseconds Jitter(std::chrono::milliseconds lo, std::chrono::milliseconds hi) const
            {
                return lo + std::chrono::milliseconds(static_cast<int64_t>(m_jitter() * static_cast<double>((hi - lo).count())));
            }

            static double DefaultJitter()
            {
                static thread_local std::mt19937 generator{std::random_device{}()};
                std::uniform_real_distribution<double> distribution(0.0, 1.0);
                return distribution(generator);
            }

            RetrieveFunction m_retrieve;
            IdentifierFunction m_identifier;
            ClockFunction m_clock;
            JitterFunction m_jitter;

            mutable Aws::Utils::Threading::ReaderWriterLock m_stateLock;
            std::mutex m_refreshLock;

            Aws::Crt::Optional<CachedCredentials> m_cached;
            Aws::Crt::Optional<CachedError> m_cachedError;
        };
    } // namespace Internal
} // namespace Aws
