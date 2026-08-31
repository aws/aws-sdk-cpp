/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/Chrono.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/crt/Optional.h>
#include <atomic>
#include <chrono>

namespace Aws
{
    namespace Internal
    {
        // AttemptSkew is owned by the client, not here.

        static const std::chrono::milliseconds CLOCK_SKEW_DETECTION_THRESHOLD = std::chrono::minutes(4);
        static const std::chrono::milliseconds CLOCK_SKEW_MAX_TRUSTED_REQUEST_DURATION = std::chrono::minutes(15);
        static const char CLOCK_SKEW_AGE_HEADER[] = "age";

        struct ClockSkewMeasurement
        {
            Aws::Crt::Optional<Aws::Utils::DateTime> serverTime; // empty when the response carries no usable Date header
            Aws::Utils::DateTime timeRequestSent;
            Aws::Utils::DateTime timeResponseReceived;
            bool servedFromCache;

            ClockSkewMeasurement(const Aws::Crt::Optional<Aws::Utils::DateTime>& serverTime,
                                 const Aws::Utils::DateTime& timeRequestSent,
                                 const Aws::Utils::DateTime& timeResponseReceived,
                                 bool servedFromCache)
                : serverTime(serverTime),
                  timeRequestSent(timeRequestSent),
                  timeResponseReceived(timeResponseReceived),
                  servedFromCache(servedFromCache) {}
        };

        inline ClockSkewMeasurement MakeClockSkewMeasurement(const Aws::Http::HeaderValueCollection& headers,
                                                             const Aws::Utils::DateTime& timeRequestSent,
                                                             const Aws::Utils::DateTime& timeResponseReceived)
        {
            const auto dateIt = headers.find(Aws::Utils::StringUtils::ToLower(Aws::Http::DATE_HEADER));
            Aws::Crt::Optional<Aws::Utils::DateTime> serverTime;
            if (dateIt != headers.end())
            {
                const Aws::Utils::DateTime parsed(dateIt->second.c_str(), Aws::Utils::DateFormat::AutoDetect);
                if (parsed.WasParseSuccessful())
                {
                    serverTime = parsed;
                }
            }
            const bool servedFromCache = headers.find(CLOCK_SKEW_AGE_HEADER) != headers.end();
            return ClockSkewMeasurement(serverTime, timeRequestSent, timeResponseReceived, servedFromCache);
        }

        inline Aws::Crt::Optional<std::chrono::milliseconds> ComputeClockSkewCandidate(const ClockSkewMeasurement& measurement)
        {
            if (!measurement.serverTime.has_value() || measurement.servedFromCache)
            {
                return Aws::Crt::Optional<std::chrono::milliseconds>{};
            }

            const int64_t sentMs = measurement.timeRequestSent.Millis();
            const int64_t receivedMs = measurement.timeResponseReceived.Millis();
            const int64_t serverMs = measurement.serverTime.value().Millis();

            const std::chrono::milliseconds elapsed{receivedMs - sentMs};
            if (elapsed > CLOCK_SKEW_MAX_TRUSTED_REQUEST_DURATION)
            {
                return Aws::Crt::Optional<std::chrono::milliseconds>{};
            }

            // Server Date is assumed to be from the round-trip midpoint (NTP offset, RFC 5905 s8).
            const int64_t midpointMs = sentMs + (receivedMs - sentMs) / 2;
            return Aws::Crt::Optional<std::chrono::milliseconds>(std::chrono::milliseconds{serverMs - midpointMs});
        }

        // Clock-skew error codes. Matched by CoreErrors enum where one exists; AuthFailure (EC2) has no
        // CoreErrors enum, so it is matched by name -- the same enum+name shape as IsThrottlingResponse.
        inline bool IsClockSkewError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& error)
        {
            switch (error.GetErrorType())
            {
                case Aws::Client::CoreErrors::INVALID_SIGNATURE:
                case Aws::Client::CoreErrors::SIGNATURE_DOES_NOT_MATCH:
                case Aws::Client::CoreErrors::REQUEST_TIME_TOO_SKEWED:
                case Aws::Client::CoreErrors::ACCESS_DENIED:
                    return true;
                default:
                    return error.GetExceptionName() == "AuthFailure";
            }
        }

        struct ClockSkewAdjustment
        {
            bool skewExceedsThreshold = false; // caller ANDs this with the error-code check before retrying
            std::chrono::milliseconds skew{0};
        };

        class AWS_CORE_LOCAL ClientSkew
        {
        public:
            explicit ClientSkew(std::chrono::milliseconds initial) : m_skew(initial) {}

            std::chrono::milliseconds Load() const { return m_skew.load(); }

            // Runs on every response; a surviving candidate is stored, so a stale value self-heals.
            Aws::Crt::Optional<std::chrono::milliseconds> RecordResponse(const ClockSkewMeasurement& measurement)
            {
                Aws::Crt::Optional<std::chrono::milliseconds> candidate = ComputeClockSkewCandidate(measurement);
                if (candidate.has_value())
                {
                    m_skew.store(candidate.value());
                }
                return candidate;
            }

            ClockSkewAdjustment EvaluateFailure(const ClockSkewMeasurement& measurement, std::chrono::milliseconds attemptSkew)
            {
                const Aws::Crt::Optional<std::chrono::milliseconds> candidate = RecordResponse(measurement);
                ClockSkewAdjustment adjustment;
                adjustment.skew = m_skew.load();
                // Retryable when the applied skew is off from the observed skew by more than the threshold.
                if (candidate.has_value())
                {
                    const std::chrono::milliseconds absDelta = Aws::chrono::abs(attemptSkew - candidate.value());
                    adjustment.skewExceedsThreshold = absDelta > CLOCK_SKEW_DETECTION_THRESHOLD;
                }
                return adjustment;
            }

        private:
            std::atomic<std::chrono::milliseconds> m_skew;
        };
    } // namespace Internal
} // namespace Aws
