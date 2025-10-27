/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/config/AWSProfileConfig.h>
#include <aws/core/config/ConfigAndCredentialsCacheManager.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

namespace Aws
{
    namespace Config
    {
        /**
         * Resolver that sources endpoints and sets them on endpoint providers.
         */
        class AWS_CORE_API EndpointResolver
        {
        public:
            /**
             * Sources endpoint and sets it on the endpoint provider.
             * This should be called after InitBuiltInParameters but before ResolveEndpoint.
             * 
             * @param serviceId Service identifier (e.g., "s3", "Elastic Beanstalk")
             * @param profileName Profile name for shared config lookup
             * @param endpointProvider Endpoint provider to configure
             */
            template<typename EndpointProviderT>
            static void EndpointSource(const Aws::String& serviceId,
                                      const Aws::String& profileName,
                                      EndpointProviderT& endpointProvider)
            {
                const Aws::String serviceKey = ToEnvSuffix(serviceId);
                static const char* LOG_TAG = "EndpointResolver";

                // 1) Check ignore flag from environment variable
                Aws::String ignoreEnv = Aws::Environment::GetEnv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS");
                if (!ignoreEnv.empty() && Utils::StringUtils::ConvertToBool(ignoreEnv.c_str())) {
                    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Configured endpoints ignored due to AWS_IGNORE_CONFIGURED_ENDPOINT_URLS=true");
                    return;
                }

                // 1b) Check ignore flag from profile (early check)
                if (!profileName.empty() && HasCachedConfigProfile(profileName)) {
                    Profile profile = GetCachedConfigProfile(profileName);
                    const Aws::String ignoreVal = profile.GetValue("ignore_configured_endpoint_urls");
                    if (!ignoreVal.empty() && Utils::StringUtils::ConvertToBool(ignoreVal.c_str())) {
                        AWS_LOGSTREAM_DEBUG(LOG_TAG, "Configured endpoints ignored due to ignore_configured_endpoint_urls=true in profile: " << profileName);
                        return;
                    }
                }

                // 2) Service-specific environment variable
                {
                    Aws::String service = "AWS_ENDPOINT_URL_";
                    service += serviceKey;
                    Aws::String fromEnv = Aws::Environment::GetEnv(service.c_str());
                    if (!fromEnv.empty()) {
                        AWS_LOGSTREAM_DEBUG(LOG_TAG, "Resolved configured endpoint from service-specific environment variable: " << service);
                        AWS_LOGSTREAM_TRACE(LOG_TAG, "Configured endpoint URL: " << fromEnv);
                        endpointProvider.OverrideEndpoint(fromEnv);
                        return;
                    }
                }

                // 3) Global environment variable
                {
                    Aws::String fromEnv = Aws::Environment::GetEnv("AWS_ENDPOINT_URL");
                    if (!fromEnv.empty()) {
                        AWS_LOGSTREAM_DEBUG(LOG_TAG, "Resolved configured endpoint from global environment variable: AWS_ENDPOINT_URL");
                        AWS_LOGSTREAM_TRACE(LOG_TAG, "Configured endpoint URL: " << fromEnv);
                        endpointProvider.OverrideEndpoint(fromEnv);
                        return;
                    }
                }

                // Skip profile resolution no profile available
                if (profileName.empty() || !HasCachedConfigProfile(profileName)) {
                    AWS_LOGSTREAM_DEBUG(LOG_TAG, "No configured endpoint found - no profile available or profile not cached");
                    return;
                }

                Profile profile = GetCachedConfigProfile(profileName);

                // 4) Service-specific endpoint from shared config profile
                const auto& endpoints = profile.GetServices().GetEndpoints();
                auto it = endpoints.find(serviceKey);
                if (it != endpoints.end() && !it->second.empty()) {
                    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Resolved configured endpoint from service-specific profile setting for service: " << serviceKey << " in profile: " << profileName);
                    AWS_LOGSTREAM_TRACE(LOG_TAG, "Configured endpoint URL: " << it->second);
                    endpointProvider.OverrideEndpoint(it->second);
                    return;
                }

                // 5) Global profile endpoint
                auto endpoint = profile.GetGlobalEndpointUrl();
                if (!endpoint.empty()) {
                    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Resolved configured endpoint from global profile setting in profile: " << profileName);
                    AWS_LOGSTREAM_TRACE(LOG_TAG, "Configured endpoint URL: " << endpoint);
                    endpointProvider.OverrideEndpoint(endpoint);
                    return;
                }

                AWS_LOGSTREAM_DEBUG(LOG_TAG, "No configured endpoint found for service: " << serviceId);
            }

        private:
            /**
             * Convert service ID to environment variable suffix format
             */
            static Aws::String ToEnvSuffix(const Aws::String& serviceId);
        };

    } // namespace Config
} // namespace Aws