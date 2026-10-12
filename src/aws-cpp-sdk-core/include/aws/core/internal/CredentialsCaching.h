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
        // CREDENTIAL_MANDATORY_WINDOW is how long before expiry a refresh blocks the caller.
        constexpr std::chrono::milliseconds CREDENTIAL_MANDATORY_WINDOW = std::chrono::minutes(1);
        // CREDENTIAL_ADVISORY_WINDOW_SHORT, _MEDIUM, and _LONG apply to lifetimes up to 20 min, under 90 min, and longer.
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_WINDOW_SHORT = std::chrono::minutes(5);
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_WINDOW_MEDIUM = std::chrono::minutes(15);
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_WINDOW_LONG = std::chrono::minutes(60);
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_LIFETIME_LOW = std::chrono::minutes(20);
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_LIFETIME_HIGH = std::chrono::minutes(90);

        // CREDENTIALS_REFRESH_BACKOFF_MIN and _MAX bound the jittered wait after a failed refresh.
        constexpr std::chrono::milliseconds CREDENTIALS_REFRESH_BACKOFF_MIN = std::chrono::minutes(5);
        constexpr std::chrono::milliseconds CREDENTIALS_REFRESH_BACKOFF_MAX = std::chrono::minutes(10);

        // CREDENTIAL_NONRECOVERABLE_CACHE_MIN and _MAX bound how long a non-recoverable error is cached.
        constexpr std::chrono::milliseconds CREDENTIAL_NONRECOVERABLE_CACHE_MIN = std::chrono::seconds(1);
        constexpr std::chrono::milliseconds CREDENTIAL_NONRECOVERABLE_CACHE_MAX = std::chrono::seconds(5);

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

            // ResolveObservation records what one GetCredentials() call did.
            struct ResolveObservation
            {
                bool sourceContacted{false};
                bool rateLimited{false};
                bool returnedNewCredentials{false};
                bool nonRecoverable{false};
                std::chrono::milliseconds advisoryWindow{0};
            };

            explicit CredentialsCachingState(RetrieveFunction retrieve,
                                             IdentifierFunction identifier,
                                             ClockFunction clock = &Aws::Utils::DateTime::Now,
                                             JitterFunction jitter = &CredentialsCachingState::DefaultJitter)
                : m_retrieve(std::move(retrieve)), m_identifier(std::move(identifier)),
                  m_clock(std::move(clock)), m_jitter(std::move(jitter))
            {
            }

            // GetCredentials returns cached credentials, refreshing them first when a refresh is due.
            Aws::Utils::Outcome<CredentialsT, Aws::String> GetCredentials(ResolveObservation* observation = nullptr)
            {
                ResolveObservation local;
                ResolveObservation& obs = observation ? *observation : local;
                obs = ResolveObservation{};

                const Aws::Utils::DateTime now = m_clock();
                const int64_t nowMs = now.Millis();

                Phase state;
                bool rateLimited;
                bool nonRecoverableCached;
                Aws::String cachedError;
                CredentialsT cachedCredentials{};
                {
                    Aws::Utils::Threading::ReaderLockGuard guard(m_stateLock);
                    state = m_cached ? ClassifyPhase(true, now, m_cached->expiration, m_cached->advisoryWindow)
                                     : Phase::NoCredentials;
                    rateLimited = IsRateLimitedLocked(nowMs);
                    nonRecoverableCached = NonRecoverableCachedLocked(nowMs);
                    if (nonRecoverableCached) { cachedError = m_cachedErrorMessage; }
                    if (m_cached)
                    {
                        cachedCredentials = m_cached->credentials;
                        obs.advisoryWindow = m_cached->advisoryWindow;
                    }
                }

                const bool needsRefresh = state == Phase::Advisory || state == Phase::Mandatory || state == Phase::Expired;
                obs.rateLimited = needsRefresh && rateLimited;

                if (nonRecoverableCached)
                {
                    obs.nonRecoverable = true;
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(cachedError);
                }

                switch (DecideAction(state, rateLimited))
                {
                case Action::ReturnCached:
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(cachedCredentials);
                case Action::RefreshNonBlocking:
                {
                    std::unique_lock<std::mutex> lock(m_refreshLock, std::try_to_lock);
                    if (!lock.owns_lock())
                    {
                        Aws::Utils::Threading::ReaderLockGuard guard(m_stateLock);
                        if (m_cached)
                        {
                            obs.advisoryWindow = m_cached->advisoryWindow;
                            return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                        }
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(cachedCredentials);
                    }
                    return RefreshUnderLock(obs);
                }
                case Action::RetrieveBlocking:
                default:
                {
                    std::unique_lock<std::mutex> lock(m_refreshLock);
                    return RefreshUnderLock(obs);
                }
                }
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
            // Phase is where the cached credentials sit relative to their refresh windows.
            enum class Phase
            {
                NoCredentials,
                Valid,
                Advisory,
                Mandatory,
                Expired
            };

            // Action is what a GetCredentials() call does for a given phase and backoff state.
            enum class Action
            {
                ReturnCached,
                RefreshNonBlocking,
                RetrieveBlocking
            };

            // ComputeAdvisoryWindow returns the advisory window for a credential lifetime.
            static std::chrono::milliseconds ComputeAdvisoryWindow(std::chrono::milliseconds lifetime)
            {
                if (lifetime <= CREDENTIAL_ADVISORY_LIFETIME_LOW)
                {
                    return CREDENTIAL_ADVISORY_WINDOW_SHORT;
                }
                if (lifetime < CREDENTIAL_ADVISORY_LIFETIME_HIGH)
                {
                    return CREDENTIAL_ADVISORY_WINDOW_MEDIUM;
                }
                return CREDENTIAL_ADVISORY_WINDOW_LONG;
            }

            // ClassifyPhase returns the phase at now, treating an advisory window shorter than the mandatory one as mandatory.
            static Phase ClassifyPhase(bool hasCredentials,
                                       const Aws::Utils::DateTime& now,
                                       const Aws::Utils::DateTime& expiration,
                                       std::chrono::milliseconds advisoryWindow)
            {
                if (!hasCredentials)
                {
                    return Phase::NoCredentials;
                }

                const int64_t nowMs = now.Millis();
                const int64_t expirationMs = expiration.Millis();
                if (nowMs >= expirationMs)
                {
                    return Phase::Expired;
                }

                if (advisoryWindow < CREDENTIAL_MANDATORY_WINDOW)
                {
                    advisoryWindow = CREDENTIAL_MANDATORY_WINDOW;
                }
                const int64_t mandatoryAtMs = expirationMs - CREDENTIAL_MANDATORY_WINDOW.count();
                const int64_t advisoryAtMs = expirationMs - advisoryWindow.count();

                if (nowMs >= mandatoryAtMs)
                {
                    return Phase::Mandatory;
                }
                if (nowMs >= advisoryAtMs)
                {
                    return Phase::Advisory;
                }
                return Phase::Valid;
            }

            // DecideAction picks the action for a phase, skipping the refresh while the backoff is active.
            static Action DecideAction(Phase state, bool refreshRateLimited)
            {
                if (state == Phase::NoCredentials)
                {
                    return Action::RetrieveBlocking;
                }
                if (state == Phase::Valid)
                {
                    return Action::ReturnCached;
                }
                if (refreshRateLimited)
                {
                    return Action::ReturnCached;
                }
                if (state == Phase::Advisory)
                {
                    return Action::RefreshNonBlocking;
                }
                return Action::RetrieveBlocking;
            }

            // ScaleJitter maps jitter01 in [0, 1) onto [lo, hi), returning lo when hi <= lo.
            static std::chrono::milliseconds ScaleJitter(std::chrono::milliseconds lo,
                                                         std::chrono::milliseconds hi,
                                                         double jitter01)
            {
                if (hi <= lo) { return lo; }
                if (jitter01 < 0.0) { jitter01 = 0.0; }
                if (jitter01 > 1.0) { jitter01 = 1.0; }
                const int64_t span = hi.count() - lo.count();
                return lo + std::chrono::milliseconds(static_cast<int64_t>(jitter01 * static_cast<double>(span)));
            }

            // ComputeRefreshBackoff returns the jittered wait after a failed refresh.
            static std::chrono::milliseconds ComputeRefreshBackoff(double jitter01)
            {
                return ScaleJitter(CREDENTIALS_REFRESH_BACKOFF_MIN, CREDENTIALS_REFRESH_BACKOFF_MAX, jitter01);
            }

            // ComputeNonRecoverableCacheDuration returns how long a non-recoverable error stays cached.
            static std::chrono::milliseconds ComputeNonRecoverableCacheDuration(double jitter01)
            {
                return ScaleJitter(CREDENTIAL_NONRECOVERABLE_CACHE_MIN, CREDENTIAL_NONRECOVERABLE_CACHE_MAX, jitter01);
            }

            static double DefaultJitter()
            {
                static thread_local std::mt19937 generator{std::random_device{}()};
                std::uniform_real_distribution<double> distribution(0.0, 1.0);
                return distribution(generator);
            }

            bool IsRateLimitedLocked(int64_t nowMs) const
            {
                return m_nextRefreshAllowedAtMs != 0 && nowMs < m_nextRefreshAllowedAtMs;
            }

            bool NonRecoverableCachedLocked(int64_t nowMs) const
            {
                return m_hasCachedError && nowMs < m_cachedErrorExpiresAtMs;
            }

            // RefreshUnderLock runs one refresh attempt and must be called with m_refreshLock held.
            Aws::Utils::Outcome<CredentialsT, Aws::String> RefreshUnderLock(ResolveObservation& obs)
            {
                {
                    const Aws::Utils::DateTime now = m_clock();
                    const int64_t nowMs = now.Millis();
                    Aws::Utils::Threading::ReaderLockGuard guard(m_stateLock);
                    if (NonRecoverableCachedLocked(nowMs))
                    {
                        obs.nonRecoverable = true;
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cachedErrorMessage);
                    }
                    if (m_cached)
                    {
                        const Phase state = ClassifyPhase(true, now, m_cached->expiration, m_cached->advisoryWindow);
                        if (state == Phase::Valid)
                        {
                            obs.advisoryWindow = m_cached->advisoryWindow;
                            return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                        }
                        if (IsRateLimitedLocked(nowMs))
                        {
                            obs.rateLimited = true;
                            obs.advisoryWindow = m_cached->advisoryWindow;
                            return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                        }
                    }
                }

                const RefreshResult<CredentialsT> result = m_retrieve();
                obs.sourceContacted = true;
                const int64_t nowMs = m_clock().Millis();

                Aws::Utils::Threading::WriterLockGuard guard(m_stateLock);
                if (result.status == RefreshResult<CredentialsT>::Status::Success &&
                    result.expiration.has_value() && result.expiration->Millis() > nowMs)
                {
                    CachedCredentials entry;
                    entry.credentials = result.credentials;
                    entry.expiration = result.expiration.value();
                    entry.advisoryWindow = ComputeAdvisoryWindow(std::chrono::milliseconds(result.expiration->Millis() - nowMs));
                    m_cached = std::move(entry);
                    m_nextRefreshAllowedAtMs = 0;
                    m_hasCachedError = false;
                    m_cachedErrorExpiresAtMs = 0;
                    m_cachedErrorMessage.clear();
                    obs.returnedNewCredentials = true;
                    obs.advisoryWindow = m_cached->advisoryWindow;
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                }

                if (result.status == RefreshResult<CredentialsT>::Status::NonRecoverable)
                {
                    m_hasCachedError = true;
                    m_cachedErrorMessage = result.errorMessage;
                    m_cachedErrorExpiresAtMs = nowMs + ComputeNonRecoverableCacheDuration(m_jitter()).count();
                    obs.nonRecoverable = true;
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(result.errorMessage);
                }

                m_nextRefreshAllowedAtMs = nowMs + ComputeRefreshBackoff(m_jitter()).count();
                if (m_cached)
                {
                    obs.advisoryWindow = m_cached->advisoryWindow;
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                }
                return Aws::Utils::Outcome<CredentialsT, Aws::String>(
                    result.errorMessage.empty() ? Aws::String("NoCredentialsError") : result.errorMessage);
            }

            RetrieveFunction m_retrieve;
            IdentifierFunction m_identifier;
            ClockFunction m_clock;
            JitterFunction m_jitter;

            // CachedCredentials holds the cached credentials and their refresh timing.
            struct CachedCredentials
            {
                CredentialsT credentials;
                Aws::Utils::DateTime expiration;
                std::chrono::milliseconds advisoryWindow{CREDENTIAL_ADVISORY_WINDOW_MEDIUM};
            };

            mutable Aws::Utils::Threading::ReaderWriterLock m_stateLock;
            std::mutex m_refreshLock;

            Aws::Crt::Optional<CachedCredentials> m_cached;
            int64_t m_nextRefreshAllowedAtMs{0};
            bool m_hasCachedError{false};
            Aws::String m_cachedErrorMessage;
            int64_t m_cachedErrorExpiresAtMs{0};
        };
    } // namespace Internal
} // namespace Aws
