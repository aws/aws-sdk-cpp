/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/config/EndpointResolver.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/config/ConfigAndCredentialsCacheManager.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/logging/LogMacros.h>

static const char* SERVICE_ENDPOINT_ENV_PREFIX = "AWS_ENDPOINT_URL_";
static const char* GLOBAL_ENDPOINT_ENV_VAR = "AWS_ENDPOINT_URL";

namespace Aws
{
    namespace Config
    {
        namespace EndpointResolver
        {
            Aws::String ToEnvSuffix(const Aws::String& serviceId)
            {
                Aws::String result = Utils::StringUtils::ToUpper(serviceId.c_str());
                Utils::StringUtils::Replace(result, " ", "_");
                Utils::StringUtils::Replace(result, "-", "_");
                return result;
            }

            Aws::String EndpointSource(const Aws::String& serviceId, const Aws::String& profileName)
            {
                const Aws::String serviceKey = ToEnvSuffix(serviceId);

                // 1) Check ignore flag from environment variable
                Aws::String ignoreEnv = Aws::Environment::GetEnv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS");
                if (!ignoreEnv.empty() && Utils::StringUtils::ConvertToBool(ignoreEnv.c_str())) {
                    AWS_LOGSTREAM_DEBUG(ENDPOINT_RESOLVER_TAG, "Configured endpoints ignored due to AWS_IGNORE_CONFIGURED_ENDPOINT_URLS=true");
                    return "";
                }

                // 1b) Check ignore flag from profile (early check)
                if (!profileName.empty() && HasCachedConfigProfile(profileName)) {
                    Profile profile = GetCachedConfigProfile(profileName);
                    const Aws::String ignoreVal = profile.GetValue("ignore_configured_endpoint_urls");
                    if (!ignoreVal.empty() && Utils::StringUtils::ConvertToBool(ignoreVal.c_str())) {
                        AWS_LOGSTREAM_DEBUG(ENDPOINT_RESOLVER_TAG, "Configured endpoints ignored due to ignore_configured_endpoint_urls=true in profile: " << profileName);
                        return "";
                    }
                }

                // 2) Service-specific environment variable
                {
                    Aws::String service(SERVICE_ENDPOINT_ENV_PREFIX);
                    service += serviceKey;
                    Aws::String fromEnv = Aws::Environment::GetEnv(service.c_str());
                    if (!fromEnv.empty()) {
                        AWS_LOGSTREAM_DEBUG(ENDPOINT_RESOLVER_TAG, "Resolved configured endpoint from service-specific environment variable " << service << " with URL: " << fromEnv);
                        return fromEnv;
                    }
                }

                // 3) Global environment variable
                {
                    Aws::String fromEnv = Aws::Environment::GetEnv(GLOBAL_ENDPOINT_ENV_VAR);
                    if (!fromEnv.empty()) {
                        AWS_LOGSTREAM_DEBUG(ENDPOINT_RESOLVER_TAG, "Resolved configured endpoint from global environment variable " << GLOBAL_ENDPOINT_ENV_VAR << " with URL: " << fromEnv);
                        return fromEnv;
                    }
                }

                // Skip profile resolution no profile available
                if (profileName.empty() || !HasCachedConfigProfile(profileName)) {
                    AWS_LOGSTREAM_DEBUG(ENDPOINT_RESOLVER_TAG, "No configured endpoint found - no profile available or profile not cached");
                    return "";
                }

                Profile profile = GetCachedConfigProfile(profileName);

                // 4) Service-specific endpoint from shared config profile
                const auto& endpoints = profile.GetServices().GetEndpoints();
                auto it = endpoints.find(serviceKey);
                if (it != endpoints.end() && !it->second.empty()) {
                    AWS_LOGSTREAM_DEBUG(ENDPOINT_RESOLVER_TAG, "Resolved configured endpoint from service-specific profile setting for service " << serviceKey << " in profile " << profileName << " with URL: " << it->second);
                    return it->second;
                }

                // 5) Global profile endpoint
                auto endpoint = profile.GetGlobalEndpointUrl();
                if (!endpoint.empty()) {
                    AWS_LOGSTREAM_DEBUG(ENDPOINT_RESOLVER_TAG, "Resolved configured endpoint from global profile setting in profile " << profileName << " with URL: " << endpoint);
                    return endpoint;
                }

                AWS_LOGSTREAM_DEBUG(ENDPOINT_RESOLVER_TAG, "No configured endpoint found for service: " << serviceId);
                return "";
            }
        }
    }
}