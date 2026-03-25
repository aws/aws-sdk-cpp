/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/http/HttpConnection.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/AWSError.h>

#include <atomic>
#include <condition_variable>
#include <memory>
#include <mutex>

namespace Aws
{
    namespace Utils
    {
        namespace RateLimits
        {
            class RateLimiterInterface;
        } // namespace RateLimits
    } // namespace Utils

    namespace Http
    {
        class HttpRequest;
        class HttpResponse;

        /**
          * Abstract HttpClient. All it does is make HttpRequests and return their response.
          */
        class AWS_CORE_API HttpClient
        {
        public:
            HttpClient();
            virtual ~HttpClient() {}

            /**
             * Takes an http request, makes it, and returns the newly allocated HttpResponse.
             */
            virtual std::shared_ptr<HttpResponse> MakeRequest(const std::shared_ptr<HttpRequest>& request,
                Aws::Utils::RateLimits::RateLimiterInterface* readLimiter = nullptr,
                Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter = nullptr) const = 0;

            /**
             * If yes, the http client supports transfer-encoding:chunked.
             */
            virtual bool SupportsChunkedTransferEncoding() const { return true; }

            /**
             * Returns true if this is a default AWS SDK HTTP client implementation.
             */
            virtual bool IsDefaultAwsHttpClient() const { return false; }

            /**
             * Stops all requests in progress and prevents any others from initiating.
             */
            void DisableRequestProcessing();
            /**
             * Enables/ReEnables request processing.
             */
            void EnableRequestProcessing();
            /**
             * Returns true if request processing is enabled.
             */
            bool IsRequestProcessingEnabled() const;
            /**
             * Sleeps current thread for sleepTime.
             */
            void RetryRequestSleep(std::chrono::milliseconds sleepTime);

            bool ContinueRequest(const Aws::Http::HttpRequest&) const;

            explicit operator bool() const
            {
               return !m_bad;
            }

            using AcquireConnectionOutcome = Aws::Utils::Outcome<std::shared_ptr<Aws::Http::Connection>,
              Aws::Client::AWSError<Aws::Client::CoreErrors>>;
            virtual AcquireConnectionOutcome AcquireConnection(const std::shared_ptr<HttpRequest>& request) {
              AWS_UNREFERENCED_PARAM(request);
              return Aws::Client::AWSError<Aws::Client::CoreErrors>{Aws::Client::CoreErrors::NOT_IMPLEMENTED,
                "NotImplemented",
                "creating a connection is not supported on this http client",
                false};
            }

        protected:
            bool m_bad;

        private:

            std::atomic< bool > m_disableRequestProcessing;
            std::mutex m_requestProcessingSignalLock;
            std::condition_variable m_requestProcessingSignal;
        };

    } // namespace Http
} // namespace Aws


