/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/config/AWSConfigFileProfileConfigLoader.h>
#include <memory>

namespace Aws
{
namespace Client
{

enum class EndpointSource
{
    ServiceEnvVar,
    GlobalEnvVar,
    ServiceSharedConfig,
    GlobalSharedConfig
};

struct ResolvedEndpoint
{
    Aws::String url;
    EndpointSource source;
};

enum class ConfiguredEndpointsPolicy
{
    UseConfigured,
    IgnoreConfigured
};

class AWS_CORE_API ConfiguredEndpointResolver
{
public:
    struct Options
    {
        ConfiguredEndpointsPolicy policy;
        Aws::String profileName;
        
        Options() : policy(ConfiguredEndpointsPolicy::UseConfigured) {}
    };

    ConfiguredEndpointResolver(std::shared_ptr<Aws::Config::AWSConfigFileProfileConfigLoader> loader,
                               Options opts = {})
        : m_loader(std::move(loader)), m_opts(std::move(opts)) {}

    ResolvedEndpoint ResolveForService(const Aws::String& serviceId) const;

private:
    Aws::String ToEnvSuffix(const Aws::String& serviceId) const;
    Aws::String ToServicesKey(const Aws::String& serviceId) const;

    std::shared_ptr<Aws::Config::AWSConfigFileProfileConfigLoader> m_loader;
    Options m_opts;
};

} // namespace Client
} // namespace Aws