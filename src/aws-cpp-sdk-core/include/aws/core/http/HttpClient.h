/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <memory>
#include <atomic>
#include <functional>
#include <mutex>
#include <condition_variable>

#include <aws/core/utils/UnreferencedParam.h>

namespace Aws
{
    namespace Utils
    {
        namespace RateLimits
        {
            class RateLimiterInterface;
        } // namespace RateLimits
        namespace Threading
        {
            class Executor;
        }
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
             * Takes an http request, makes it, and returns the newly allocated HttpResponse.
             */
            virtual std::shared_ptr<HttpResponse> MakeSyncRequest(const std::shared_ptr<HttpRequest>& request,
                Aws::Utils::RateLimits::RateLimiterInterface* readLimiter = nullptr,
                Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter = nullptr) const
            {
                return MakeRequest(request, readLimiter, writeLimiter);
            }


            using HttpAsyncOnDoneHandler = std::function<void(std::shared_ptr<HttpResponse>)>;
            //typedef std::function<void(std::shared_ptr<HttpResponse>)> HttpAsyncOnDoneHandler;

            virtual void MakeAsyncRequest(const std::shared_ptr<HttpRequest>& request,
                                          std::shared_ptr<Aws::Utils::Threading::Executor> pExecutor,
                                          HttpAsyncOnDoneHandler onDoneHandler,
                                          Aws::Utils::RateLimits::RateLimiterInterface* readLimiter = nullptr,
                                          Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter = nullptr) const
            {
                // TODO: fixme, provide backward compatibility
              AWS_UNREFERENCED_PARAM(request);
              AWS_UNREFERENCED_PARAM(pExecutor);
              AWS_UNREFERENCED_PARAM(onDoneHandler);
              AWS_UNREFERENCED_PARAM(readLimiter);
              AWS_UNREFERENCED_PARAM(writeLimiter);
            }

            /**
             * If yes, the http client supports transfer-encoding:chunked.
             */
            virtual bool SupportsChunkedTransferEncoding() const { return true; }

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

        protected:
            bool m_bad;

        private:

            std::atomic< bool > m_disableRequestProcessing;
            std::mutex m_requestProcessingSignalLock;
            std::condition_variable m_requestProcessingSignal;
        };

    } // namespace Http
} // namespace Aws


