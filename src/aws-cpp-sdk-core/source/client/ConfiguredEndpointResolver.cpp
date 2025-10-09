/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/ConfiguredEndpointResolver.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/StringUtils.h>
#include <algorithm>

using namespace Aws::Client;
using namespace Aws::Config;
using namespace Aws::Utils;

Aws::String ConfiguredEndpointResolver::ToEnvSuffix(const Aws::String& serviceId) const
{
    Aws::String suffix = serviceId;
    std::replace(suffix.begin(), suffix.end(), '-', '_');
    suffix = StringUtils::ToUpper(suffix.c_str());
    return suffix;
}

Aws::String ConfiguredEndpointResolver::ToServicesKey(const Aws::String& serviceId) const
{
    Aws::String key = serviceId;
    std::replace(key.begin(), key.end(), '_', '-');
    key = StringUtils::ToLower(key.c_str());
    return key;
}

ResolvedEndpoint
ConfiguredEndpointResolver::ResolveForService(const Aws::String& serviceId) const
{
    if (m_opts.policy == ConfiguredEndpointsPolicy::IgnoreConfigured)
        return {};

    // 1. Service-specific env var
    const Aws::String envServiceKey = "AWS_ENDPOINT_URL_" + ToEnvSuffix(serviceId);
    Aws::String envService = Environment::GetEnv(envServiceKey.c_str());
    if (!envService.empty())
        return ResolvedEndpoint{envService, EndpointSource::ServiceEnvVar};

    // 2. Global env var
    Aws::String envGlobal = Environment::GetEnv("AWS_ENDPOINT_URL");
    if (!envGlobal.empty())
        return ResolvedEndpoint{envGlobal, EndpointSource::GlobalEnvVar};

    // 3. Shared config (not implemented yet - will be done in step 2)
    // TODO: Add shared config parsing support in FSM

    // return empty braces {} when no endpoint is found (which will create a default-constructed ResolvedEndpoint with empty URL)
    return {};
}