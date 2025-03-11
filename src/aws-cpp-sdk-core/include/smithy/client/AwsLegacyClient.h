/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/endpoint/AWSEndpoint.h>

namespace smithy {
namespace client
{   
    /*
        This Class exists only to provide a way to access the legacy client APIs
    */
    template<const char* ServiceNameT,
            typename ResponseT, 
            typename DerivedT>
    class AwsLegacyClientT 
    {
    protected:
        ResponseT MakeRequest(const Aws::Http::URI& uri,
            const Aws::AmazonWebServiceRequest& request,
            Aws::Http::HttpMethod method = Aws::Http::HttpMethod::HTTP_POST,
            const char* signerName = Aws::Auth::SIGV4_SIGNER,
            const char* signerRegionOverride = nullptr,
            const char* signerServiceNameOverride = nullptr) const
        {
            AWS_UNREFERENCED_PARAM(uri);
            AWS_UNREFERENCED_PARAM(signerName);
            AWS_UNREFERENCED_PARAM(signerRegionOverride);
            AWS_UNREFERENCED_PARAM(signerServiceNameOverride);
            AWS_LOGSTREAM_WARN(ServiceNameT, "Using Deprecated API. Please use appropriate client constructor");
            auto endpointCallback = [](const Aws::Endpoint::AWSEndpoint& ) {
            };
            return static_cast<const DerivedT*>(this)->MakeRequestDeserialize(&request,
                ServiceNameT,
                method,
                std::move(endpointCallback));
        }

        ResponseT MakeRequest(const Aws::Http::URI& uri,
            Aws::Http::HttpMethod method = Aws::Http::HttpMethod::HTTP_POST,
            const char* signerName = Aws::Auth::SIGV4_SIGNER,
            const char* requestName = "",
            const char* signerRegionOverride = nullptr,
            const char* signerServiceNameOverride = nullptr) const
        {
            AWS_UNREFERENCED_PARAM(uri);
            AWS_UNREFERENCED_PARAM(signerName);
            AWS_UNREFERENCED_PARAM(signerRegionOverride);
            AWS_UNREFERENCED_PARAM(signerServiceNameOverride);
            AWS_LOGSTREAM_WARN(ServiceNameT, "Using Deprecated API. Please use appropriate client constructor");
            auto endpointCallback = [](const Aws::Endpoint::AWSEndpoint& ) {
            };
            return static_cast<const DerivedT*>(this)->MakeRequestDeserialize(nullptr,
                requestName,
                method,
                std::move(endpointCallback));
        }

        ResponseT MakeRequest(const Aws::AmazonWebServiceRequest& request,
            const Aws::Endpoint::AWSEndpoint& endpoint,
            Aws::Http::HttpMethod method = Aws::Http::HttpMethod::HTTP_POST,
            const char* signerName = Aws::Auth::SIGV4_SIGNER,
            const char* signerRegionOverride = nullptr,
            const char* signerServiceNameOverride = nullptr) const
        {
            AWS_UNREFERENCED_PARAM(endpoint);
            AWS_UNREFERENCED_PARAM(signerName);
            AWS_UNREFERENCED_PARAM(signerRegionOverride);
            AWS_UNREFERENCED_PARAM(signerServiceNameOverride);
            AWS_LOGSTREAM_WARN(ServiceNameT, "Using Deprecated API. Please use appropriate client constructor");
            auto endpointCallback = [](const Aws::Endpoint::AWSEndpoint& ) {
            };
            return static_cast<const DerivedT*>(this)->MakeRequestDeserialize(&request,
                ServiceNameT,
                method,
                std::move(endpointCallback));
        }

        ResponseT MakeRequest(const Aws::Endpoint::AWSEndpoint& endpoint,
            const char* requestName = "",
            Aws::Http::HttpMethod method = Aws::Http::HttpMethod::HTTP_POST,
            const char* signerName = Aws::Auth::SIGV4_SIGNER,
            const char* signerRegionOverride = nullptr,
            const char* signerServiceNameOverride = nullptr) const
        {
            AWS_UNREFERENCED_PARAM(endpoint);
            AWS_UNREFERENCED_PARAM(signerName);
            AWS_UNREFERENCED_PARAM(signerRegionOverride);
            AWS_UNREFERENCED_PARAM(signerServiceNameOverride);
            AWS_LOGSTREAM_WARN(ServiceNameT, "Using Deprecated API. Please use appropriate client constructor");
            auto endpointCallback = [](const Aws::Endpoint::AWSEndpoint& ) {
            };
            return static_cast<const DerivedT*>(this)->MakeRequestDeserialize(nullptr,
                requestName,
                method,
                std::move(endpointCallback));
        }

        AwsLegacyClientT() = default;
    };

} // namespace client
} // namespace smithy