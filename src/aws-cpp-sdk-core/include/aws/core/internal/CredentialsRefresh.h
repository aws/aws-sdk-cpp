/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/CredentialsRefreshResult.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
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
        // Refresh windows. Advisory scales with lifetime; mandatory is fixed at 1 min before expiry.
        constexpr std::chrono::milliseconds CREDENTIAL_MANDATORY_WINDOW = std::chrono::minutes(1);
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_WINDOW_SHORT = std::chrono::minutes(5);   // lifetime <= 20 min
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_WINDOW_MEDIUM = std::chrono::minutes(15); // 20 min < lifetime < 90 min
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_WINDOW_LONG = std::chrono::minutes(60);   // lifetime >= 90 min
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_LIFETIME_LOW = std::chrono::minutes(20);
        constexpr std::chrono::milliseconds CREDENTIAL_ADVISORY_LIFETIME_HIGH = std::chrono::minutes(90);

        // Backoff after a failed refresh: jittered 5-10 min before retrying the source.
        constexpr std::chrono::milliseconds CREDENTIALS_REFRESH_BACKOFF_MIN = std::chrono::minutes(5);
        constexpr std::chrono::milliseconds CREDENTIALS_REFRESH_BACKOFF_MAX = std::chrono::minutes(10);

        // Non-recoverable errors: briefly cache the failure (1-5 s) so a retry loop can't hammer the source.
        constexpr std::chrono::milliseconds CREDENTIAL_NONRECOVERABLE_CACHE_MIN = std::chrono::seconds(1);
        constexpr std::chrono::milliseconds CREDENTIAL_NONRECOVERABLE_CACHE_MAX = std::chrono::seconds(5);

        enum class CredentialsRefreshPhase
        {
            NoCredentials, // nothing cached yet; the first caller fetches while others block
            Valid,         // fresh; return cached, no refresh
            Advisory,      // soft window; refresh is due, but concurrent callers keep serving cached creds
            Mandatory,     // hard window; block the caller for a refresh
            Expired        // past expiration; treated like Mandatory
        };

        // Advisory window for a given credential lifetime.
        inline std::chrono::milliseconds ComputeAdvisoryWindow(std::chrono::milliseconds lifetime)
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

        // Classify the phase at `now`. Advisory is clamped >= mandatory so the mandatory boundary never
        // precedes the advisory one.
        inline CredentialsRefreshPhase ClassifyRefreshPhase(bool hasCredentials,
                                                       const Aws::Utils::DateTime& now,
                                                       const Aws::Utils::DateTime& expiration,
                                                       std::chrono::milliseconds advisoryWindow)
        {
            if (!hasCredentials)
            {
                return CredentialsRefreshPhase::NoCredentials;
            }

            const int64_t nowMs = now.Millis();
            const int64_t expirationMs = expiration.Millis();
            if (nowMs >= expirationMs)
            {
                return CredentialsRefreshPhase::Expired;
            }

            if (advisoryWindow < CREDENTIAL_MANDATORY_WINDOW)
            {
                advisoryWindow = CREDENTIAL_MANDATORY_WINDOW;
            }
            const int64_t mandatoryAtMs = expirationMs - CREDENTIAL_MANDATORY_WINDOW.count();
            const int64_t advisoryAtMs = expirationMs - advisoryWindow.count();

            if (nowMs >= mandatoryAtMs)
            {
                return CredentialsRefreshPhase::Mandatory;
            }
            if (nowMs >= advisoryAtMs)
            {
                return CredentialsRefreshPhase::Advisory;
            }
            return CredentialsRefreshPhase::Valid;
        }

        // Top-level action for a GetCredentials() call, given the phase and whether a failed refresh is
        // still within its backoff window.
        enum class RefreshAction
        {
            ReturnCached,       // Valid, or a needs-refresh state that is currently rate-limited
            RefreshNonBlocking, // Advisory: refresh without blocking; if one is in flight, serve cache
            FetchBlocking       // NoCredentials (initial fetch) or Mandatory/Expired: block the caller
        };

        inline RefreshAction DecideRefreshAction(CredentialsRefreshPhase state, bool refreshRateLimited)
        {
            // Initial fetch always attempts, regardless of backoff: there is nothing cached to serve yet.
            if (state == CredentialsRefreshPhase::NoCredentials)
            {
                return RefreshAction::FetchBlocking;
            }
            if (state == CredentialsRefreshPhase::Valid)
            {
                return RefreshAction::ReturnCached;
            }
            // A refresh is due; honor the backoff so a failing source is contacted at most once per window.
            if (refreshRateLimited)
            {
                return RefreshAction::ReturnCached;
            }
            if (state == CredentialsRefreshPhase::Advisory)
            {
                return RefreshAction::RefreshNonBlocking;
            }
            return RefreshAction::FetchBlocking; // Mandatory or Expired
        }

        // Scale a uniform sample jitter01 in [0, 1) onto [lo, hi) (never reaches hi exactly).
        inline std::chrono::milliseconds ScaleJitter(std::chrono::milliseconds lo,
                                                     std::chrono::milliseconds hi,
                                                     double jitter01)
        {
            if (jitter01 < 0.0) { jitter01 = 0.0; }
            if (jitter01 > 1.0) { jitter01 = 1.0; }
            const int64_t span = hi.count() - lo.count();
            return lo + std::chrono::milliseconds(static_cast<int64_t>(jitter01 * static_cast<double>(span)));
        }

        // Backoff after a failed refresh: uniform 5-10 min.
        inline std::chrono::milliseconds ComputeRefreshBackoff(double jitter01)
        {
            return ScaleJitter(CREDENTIALS_REFRESH_BACKOFF_MIN, CREDENTIALS_REFRESH_BACKOFF_MAX, jitter01);
        }

        // Short cache of a non-recoverable error: uniform 1-5 s.
        inline std::chrono::milliseconds ComputeNonRecoverableCacheDuration(double jitter01)
        {
            return ScaleJitter(CREDENTIAL_NONRECOVERABLE_CACHE_MIN, CREDENTIAL_NONRECOVERABLE_CACHE_MAX, jitter01);
        }

        // Feature gate (dark ship): off unless AWS_NEW_CREDENTIAL_REFRESH_2026 is "true".
        inline bool IsNewCredentialsRefreshEnabled()
        {
            return Aws::Utils::StringUtils::ToLower(
                Aws::Environment::GetEnv("AWS_NEW_CREDENTIAL_REFRESH_2026").c_str()) == "true";
        }

        // Internal state-holder for the refresh lifecycle, owned by AWSCredentialsProvider. One refresh in
        // flight at a time; a failed refresh never discards cached credentials.
        template<typename CredentialsT>
        class AWS_CORE_LOCAL CredentialsRefreshState
        {
        public:
            using FetchFunction = std::function<Aws::Auth::RefreshResult<CredentialsT>()>;
            using ClockFunction = std::function<Aws::Utils::DateTime()>;
            using JitterFunction = std::function<double()>; // uniform sample in [0, 1)

            // Per-call observation of the resolution flow.
            struct ResolveObservation
            {
                bool sourceContacted{false};        // the credential source was contacted on this call
                bool rateLimited{false};            // the refresh backoff was in effect at the start of the call
                bool returnedNewCredentials{false}; // the returned credentials were freshly fetched this call
                bool nonRecoverable{false};         // the raised error was non-recoverable
                std::chrono::milliseconds advisoryWindow{0}; // advisory window in effect for the returned creds
            };

            explicit CredentialsRefreshState(FetchFunction fetch,
                                            ClockFunction clock = &Aws::Utils::DateTime::Now,
                                            JitterFunction jitter = &CredentialsRefreshState::DefaultJitter)
                : m_fetch(std::move(fetch)), m_clock(std::move(clock)), m_jitter(std::move(jitter))
            {
            }

            // Resolve credentials through the refresh lifecycle. Returns cached (serving last-good on a
            // failed refresh), or an error when nothing is cached or the error is non-recoverable.
            Aws::Utils::Outcome<CredentialsT, Aws::String> GetCredentials(ResolveObservation* observation = nullptr)
            {
                ResolveObservation local;
                ResolveObservation& obs = observation ? *observation : local;
                obs = ResolveObservation{};

                const Aws::Utils::DateTime now = m_clock();
                const int64_t nowMs = now.Millis();

                CredentialsRefreshPhase state;
                bool rateLimited;
                bool nonRecoverableCached;
                Aws::String cachedError;
                CredentialsT cachedCredentials{};
                {
                    Aws::Utils::Threading::ReaderLockGuard guard(m_stateLock);
                    state = m_cached
                        ? ClassifyRefreshPhase(true, now, m_cached->expiration, m_cached->advisoryWindow)
                        : CredentialsRefreshPhase::NoCredentials;
                    rateLimited = IsRateLimitedLocked(nowMs);
                    nonRecoverableCached = NonRecoverableCachedLocked(nowMs);
                    if (nonRecoverableCached) { cachedError = m_cachedErrorMessage; } // copy only when it's returned
                    if (m_cached)
                    {
                        cachedCredentials = m_cached->credentials;
                        obs.advisoryWindow = m_cached->advisoryWindow;
                    }
                }

                // rateLimited only matters once a refresh is due; report it as such.
                const bool needsRefresh = state == CredentialsRefreshPhase::Advisory ||
                                          state == CredentialsRefreshPhase::Mandatory ||
                                          state == CredentialsRefreshPhase::Expired;
                obs.rateLimited = needsRefresh && rateLimited;

                // A cached non-recoverable error is still live: re-raise it without contacting the source.
                if (nonRecoverableCached)
                {
                    obs.nonRecoverable = true;
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(cachedError);
                }

                switch (DecideRefreshAction(state, rateLimited))
                {
                case RefreshAction::ReturnCached:
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(cachedCredentials);
                case RefreshAction::RefreshNonBlocking:
                {
                    // Advisory: do not block. If another caller is already refreshing, serve the cache.
                    std::unique_lock<std::mutex> gate(m_refreshGate, std::try_to_lock);
                    if (!gate.owns_lock())
                    {
                        Aws::Utils::Threading::ReaderLockGuard guard(m_stateLock);
                        if (m_cached)
                        {
                            obs.advisoryWindow = m_cached->advisoryWindow;
                            return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                        }
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(cachedCredentials);
                    }
                    return RefreshUnderGate(obs);
                }
                case RefreshAction::FetchBlocking:
                default:
                {
                    // Initial fetch or mandatory/expired: one caller performs the refresh, others wait.
                    std::unique_lock<std::mutex> gate(m_refreshGate);
                    return RefreshUnderGate(obs);
                }
                }
            }

            // Mark cached credentials for refresh after a service rejected them. Sets the cached expiration
            // to now so the next GetCredentials() takes the mandatory path; never discards credentials.
            void Invalidate()
            {
                // Unconditional (state lock only, not gated on m_refreshGate) so an invalidation is never lost.
                Aws::Utils::Threading::WriterLockGuard guard(m_stateLock);
                if (m_cached)
                {
                    m_cached->expiration = m_clock(); // route the next GetCredentials() through the mandatory path
                }
            }

        private:
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

            // One refresh attempt; must hold m_refreshGate. The fetch runs without the state lock so
            // concurrent readers keep getting the cached credentials.
            Aws::Utils::Outcome<CredentialsT, Aws::String> RefreshUnderGate(ResolveObservation& obs)
            {
                {
                    // Re-check: another caller may have refreshed (or set the backoff) while we waited.
                    const Aws::Utils::DateTime now = m_clock();
                    const int64_t nowMs = now.Millis();
                    Aws::Utils::Threading::ReaderLockGuard guard(m_stateLock);
                    // Honor a cached non-recoverable error even with nothing cached (it doesn't populate m_cached).
                    if (NonRecoverableCachedLocked(nowMs))
                    {
                        obs.nonRecoverable = true;
                        return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cachedErrorMessage);
                    }
                    if (m_cached)
                    {
                        const CredentialsRefreshPhase state = ClassifyRefreshPhase(true, now, m_cached->expiration, m_cached->advisoryWindow);
                        if (state == CredentialsRefreshPhase::Valid)
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

                const Aws::Auth::RefreshResult<CredentialsT> result = m_fetch();
                obs.sourceContacted = true;
                const int64_t nowMs = m_clock().Millis();

                Aws::Utils::Threading::WriterLockGuard guard(m_stateLock);
                if (result.status == Aws::Auth::RefreshResult<CredentialsT>::Status::Success &&
                    result.expiration.has_value() && result.expiration->Millis() > nowMs)
                {
                    CachedCredentials fresh;
                    fresh.credentials = result.credentials;
                    fresh.expiration = result.expiration.value();
                    fresh.advisoryWindow = ComputeAdvisoryWindow(std::chrono::milliseconds(result.expiration->Millis() - nowMs));
                    m_cached = std::move(fresh);
                    m_nextRefreshAllowedAtMs = 0;
                    m_hasCachedError = false;
                    m_cachedErrorExpiresAtMs = 0;
                    m_cachedErrorMessage.clear();
                    obs.returnedNewCredentials = true;
                    obs.advisoryWindow = m_cached->advisoryWindow;
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                }

                if (result.status == Aws::Auth::RefreshResult<CredentialsT>::Status::NonRecoverable)
                {
                    // Raise immediately, but briefly cache the error so a retry loop can't hammer the source.
                    m_hasCachedError = true;
                    m_cachedErrorMessage = result.errorMessage;
                    m_cachedErrorExpiresAtMs = nowMs + ComputeNonRecoverableCacheDuration(m_jitter()).count();
                    obs.nonRecoverable = true;
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(result.errorMessage);
                }

                // Recoverable failure (or a success already expired): back off and serve last-good if any.
                m_nextRefreshAllowedAtMs = nowMs + ComputeRefreshBackoff(m_jitter()).count();
                if (m_cached)
                {
                    obs.advisoryWindow = m_cached->advisoryWindow;
                    return Aws::Utils::Outcome<CredentialsT, Aws::String>(m_cached->credentials);
                }
                return Aws::Utils::Outcome<CredentialsT, Aws::String>(
                    result.errorMessage.empty() ? Aws::String("NoCredentialsError") : result.errorMessage);
            }

            FetchFunction m_fetch;
            ClockFunction m_clock;
            JitterFunction m_jitter;

            // Cached credentials plus their derived timing. Held in an Optional so empty == no credentials.
            struct CachedCredentials
            {
                CredentialsT credentials;
                Aws::Utils::DateTime expiration;
                std::chrono::milliseconds advisoryWindow{CREDENTIAL_ADVISORY_WINDOW_MEDIUM};
            };

            mutable Aws::Utils::Threading::ReaderWriterLock m_stateLock; // guards the cached fields below
            std::mutex m_refreshGate;                                    // one refresh in flight at a time

            Aws::Crt::Optional<CachedCredentials> m_cached;          // empty == no credentials cached yet
            int64_t m_nextRefreshAllowedAtMs{0};   // 0 = not rate-limited
            bool m_hasCachedError{false};
            Aws::String m_cachedErrorMessage;
            int64_t m_cachedErrorExpiresAtMs{0};
        };
    } // namespace Internal
} // namespace Aws
