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

        Aws::String GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, long long expirationInSeconds = 0, const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {})
        {
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                uri,
                method,
                {},
                {},
                expirationInSeconds,
                {},
                serviceSpecificParameter
            );
        }

        Aws::String GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds = 0, const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {})
        {
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                uri,
                method,
                {},
                {},
                expirationInSeconds,
                customizedHeaders,
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, long long expirationInSeconds = 0, const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {}) const
        {
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                uri,
                method,
                region ? region : Aws::String{},
                {},
                expirationInSeconds,
                {},
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds = 0, const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {})
        {
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                uri,
                method,
                region ? region : Aws::String{},
                {},
                expirationInSeconds,
                customizedHeaders,
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, long long expirationInSeconds = 0, const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {}) const
        {           
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                uri,
                method,
                region ? region : Aws::String{},
                serviceName ? serviceName : Aws::String{},
                expirationInSeconds,
                {},
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds = 0, const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {})
        {            
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                uri,
                method,
                region ? region : Aws::String{},
                serviceName ? serviceName : Aws::String{},
                expirationInSeconds,
                customizedHeaders,
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const char* signerName, long long expirationInSeconds = 0, const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {}) const
        {
            AWS_UNREFERENCED_PARAM(signerName);
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                uri,
                method,
                region ? region : Aws::String{},
                serviceName ? serviceName : Aws::String{},
                expirationInSeconds,
                {},
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const char* signerName, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds = 0, const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {})
        {
            AWS_UNREFERENCED_PARAM(signerName);
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                uri,
                method,
                region ? region : Aws::String{},
                serviceName ? serviceName : Aws::String{},
                expirationInSeconds,
                customizedHeaders,
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::Endpoint::AWSEndpoint& endpoint,
                                         Aws::Http::HttpMethod method = Aws::Http::HttpMethod::HTTP_POST,
                                         const Aws::Http::HeaderValueCollection& customizedHeaders = {},
                                         uint64_t expirationInSeconds = 0,
                                         const char* signerName = Aws::Auth::SIGV4_SIGNER,
                                         const char* signerRegionOverride = nullptr,
                                         const char* signerServiceNameOverride = nullptr,
                                         const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {})
        {
            AWS_UNREFERENCED_PARAM(signerName);
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                endpoint,
                method,
                signerRegionOverride ? signerRegionOverride : Aws::String{},
                signerServiceNameOverride ? signerServiceNameOverride : Aws::String{},
                expirationInSeconds,
                customizedHeaders,
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method,
                                         const Aws::Http::QueryStringParameterCollection& extraParams = Aws::Http::QueryStringParameterCollection(), long long expirationInSeconds = 0,
                                         const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {})
        {
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                request,
                uri,
                method,
                Aws::String{},
                Aws::String{},
                extraParams,
                expirationInSeconds,
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName,
                                         const char* signerName, const Aws::Http::QueryStringParameterCollection& extraParams = Aws::Http::QueryStringParameterCollection(), long long expirationInSeconds = 0,
                                         const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {}) const
        {
            AWS_UNREFERENCED_PARAM(signerName);
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                    request,
                    uri,
                    method,
                    region ? region : Aws::String{},
                    serviceName ? serviceName : Aws::String{},
                    extraParams,
                    expirationInSeconds,
                    serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName,
                                         const Aws::Http::QueryStringParameterCollection& extraParams = Aws::Http::QueryStringParameterCollection(), long long expirationInSeconds = 0,
                                         const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {}) const
        {
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                request,
                uri,
                method,
                region ? region : Aws::String{},
                serviceName ? serviceName : Aws::String{},
                extraParams,
                expirationInSeconds,
                serviceSpecificParameter);
        }

        Aws::String GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region,
                                         const Aws::Http::QueryStringParameterCollection& extraParams = Aws::Http::QueryStringParameterCollection(), long long expirationInSeconds = 0,
                                         const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameter = {}) const
        {
            return static_cast<const DerivedT*>(this)->GeneratePresignedUrl(
                request,
                uri,
                method,
                region ? region : Aws::String{},
                Aws::String{},
                extraParams,
                expirationInSeconds,
                serviceSpecificParameter);
        }
    };

} // namespace client
} // namespace smithy