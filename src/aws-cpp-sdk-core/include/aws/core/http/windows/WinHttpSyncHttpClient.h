/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/http/HttpClient.h>
#include <aws/core/http/Version.h>
#include <aws/core/http/windows/WinSyncHttpClient.h>

namespace Aws
{
    namespace Client
    {
        struct ClientConfiguration;
    } // namespace Client

    namespace Http
    {

        class WinHttpConnectionPoolMgr;

        /**
         * WinHttp implementation of an http client
         */
        class AWS_CORE_API WinHttpSyncHttpClient : public WinSyncHttpClient
        {
        public:
            using Base = WinSyncHttpClient;

            /**
             * Initializes the client with relevant parameters from clientConfig.
             */
            WinHttpSyncHttpClient(const Aws::Client::ClientConfiguration& clientConfig);
            ~WinHttpSyncHttpClient();

            /**
             * Log tag for use in base class.
             */
            const char* GetLogTag() const override { return "WinHttpSyncHttpClient"; }

        private:
            // WinHttp specific implementations
            void* OpenRequest(const std::shared_ptr<HttpRequest>& request, void* connection, const Aws::StringStream& ss) const override;
            void DoAddHeaders(void* httpRequest, Aws::String& headerStr) const override;
            uint64_t DoWriteData(void* httpRequest, char* streamBuffer, uint64_t bytesRead, bool isChunked) const override;
            uint64_t FinalizeWriteData(void* hHttpRequest) const override;
            bool DoReceiveResponse(void* httpRequest) const override;
            bool DoQueryHeaders(void* httpRequest, std::shared_ptr<Aws::Http::HttpResponse>& response, Aws::StringStream& ss, uint64_t& read) const override;
            bool DoSendRequest(void* httpRequest) const override;
            bool DoQueryDataAvailable(void* hHttpRequest, uint64_t& available) const override;
            bool DoReadData(void* hHttpRequest, char* body, uint64_t size, uint64_t& read) const override;
            void* GetClientModule() const override;

            const char* GetActualHttpVersionUsed(void* hHttpRequest) const override;

            bool m_usingProxy = false;
            bool m_verifySSL = true;
            Aws::Http::Version m_version = Aws::Http::Version::HTTP_VERSION_2TLS;
            Aws::WString m_proxyUserName;
            Aws::WString m_proxyPassword;
        };

    } // namespace Http
} // namespace Aws

