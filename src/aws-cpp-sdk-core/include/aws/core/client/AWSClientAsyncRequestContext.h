/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/endpoint/AWSEndpoint.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/AmazonWebServiceRequest.h>

#include <aws/core/utils/DateTime.h>


namespace Aws
{
    namespace Client
    {
        class AwsClientAsyncRequestCtx
        {
        public:
            struct RequestInfo
            {
                Aws::Utils::DateTime ttl;
                long attempt;
                long maxAttempts;

                operator String()
                {
                    Aws::StringStream ss;
                    if (ttl.WasParseSuccessful() && ttl != Aws::Utils::DateTime())
                    {
                        assert(attempt > 1);
                        ss << "ttl=" << ttl.ToGmtString(Aws::Utils::DateFormat::ISO_8601_BASIC) << "; ";
                    }
                    ss << "attempt=" << attempt;
                    if (maxAttempts > 0)
                    {
                        ss << "; max=" << maxAttempts;
                    }
                    return ss.str();
                }
            };

            Aws::String m_invocationId;
            Http::HttpMethod m_method;
            const Aws::AmazonWebServiceRequest* m_pRequest; // optional

            RequestInfo m_requestInfo;
            Aws::String m_requestName;
            std::shared_ptr<Aws::Http::HttpRequest> m_httpRequest;
            Aws::Endpoint::AWSEndpoint m_endpoint;

            Aws::Crt::Optional<AWSError<CoreErrors>> m_lastError;

            size_t m_retryCount;
            Aws::Vector<void*> m_monitoringContexts;

            std::function<void(HttpResponseOutcome)> m_responseHandler;
            std::shared_ptr<Aws::Utils::Threading::Executor> m_pExecutor;

        };
    } // namespace Client
} // namespace Aws