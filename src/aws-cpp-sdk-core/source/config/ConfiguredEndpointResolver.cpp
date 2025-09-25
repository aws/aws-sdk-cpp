/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/config/ConfiguredEndpointResolver.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/config/AWSConfigFileProfileConfigLoader.h>
#include <aws/core/config/ConfigAndCredentialsCacheManager.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/StringUtils.h>

using Aws::Crt::Optional;
using Aws::Utils::StringUtils;

namespace {
constexpr char ENDPOINT_RESOLVER_LOG_TAG[] = "ConfiguredEndpointResolver";

// Transform "service ID" → env suffix: spaces → '_', uppercase
Aws::String ToEnvSuffix(const Aws::String& serviceId) {
    Aws::String s = serviceId;
    for (auto& c : s) { 
        if (c == ' ') c = '_'; 
        else c = static_cast<char>(std::toupper(static_cast<unsigned char>(c))); 
    }
    return s;
}

// Transform "service ID" → services-subsection key: spaces → '_', lowercase
Aws::String ToServicesKey(const Aws::String& serviceId) {
    Aws::String s = serviceId;
    for (auto& c : s) { 
        if (c == ' ') c = '_'; 
        else c = static_cast<char>(std::tolower(static_cast<unsigned char>(c))); 
    }
    return s;
}

// returns trimmed non-empty env value or empty
Aws::String GetEnv(const char* key) {
    auto v = Aws::Environment::GetEnv(key);
    return Aws::Utils::StringUtils::Trim(v.c_str());
}
} // anon

namespace Aws {
namespace Config {

static bool ResolveIgnoreFlagFromEnv() {
    const auto v = GetEnv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS");
    return !v.empty() && (v == "1" || StringUtils::ToLower(v.c_str()) == "true");
}

// Shared-config opt-out
static bool ResolveIgnoreFlagFromProfile(const Aws::String& profileName) {
    auto configFilePath = Aws::Auth::GetConfigProfileFilename();
    Aws::Config::AWSConfigFileProfileConfigLoader loader(configFilePath, true);
    loader.Load();
    const auto profiles = loader.GetProfiles();
    
    Aws::String actualProfileName = profileName.empty() ? Aws::Auth::GetConfigProfileName() : profileName;
    auto profileIt = profiles.find(actualProfileName);
    if (profileIt == profiles.end()) return false;
    
    const auto val = profileIt->second.GetValue("ignore_configured_endpoint_urls");
    if (val.empty()) return false;
    auto low = StringUtils::ToLower(val.c_str());
    return (low == "true" || low == "1");
}

// Global profile endpoint_url
static Aws::String ResolveGlobalProfileEndpoint(const Aws::String& profileName) {
    auto configFilePath = Aws::Auth::GetConfigProfileFilename();
    Aws::Config::AWSConfigFileProfileConfigLoader loader(configFilePath, true);
    loader.Load();
    const auto profiles = loader.GetProfiles();
    
    Aws::String actualProfileName = profileName.empty() ? Aws::Auth::GetConfigProfileName() : profileName;
    auto profileIt = profiles.find(actualProfileName);
    if (profileIt == profiles.end()) return {};
    
    return StringUtils::Trim(profileIt->second.GetValue("endpoint_url").c_str());
}

// Find `[services X]` mapping and then the service sub-section with `endpoint_url`
static Aws::String ResolveServiceProfileEndpoint(const Aws::String& profileName, const Aws::String& servicesKey) {
    auto configFilePath = Aws::Auth::GetConfigProfileFilename();
    Aws::Config::AWSConfigFileProfileConfigLoader loader(configFilePath, true);
    loader.Load();
    const auto profiles = loader.GetProfiles();
    
    Aws::String actualProfileName = profileName.empty() ? Aws::Auth::GetConfigProfileName() : profileName;
    auto profileIt = profiles.find(actualProfileName);
    if (profileIt == profiles.end()) return {};

    const auto servicesSectionName = StringUtils::Trim(profileIt->second.GetValue("services").c_str());
    if (servicesSectionName.empty()) return {};

    const auto& servicesSections = loader.GetServicesSections();
    auto svcSectionIt = servicesSections.find(servicesSectionName);
    if (svcSectionIt == servicesSections.end()) {
        AWS_LOGSTREAM_WARN(ENDPOINT_RESOLVER_LOG_TAG, "Profile references [services " << servicesSectionName << "] which does not exist.");
        return {};
    }
    
    const auto& perService = svcSectionIt->second;
    auto serviceIt = perService.find(servicesKey);
    if (serviceIt == perService.end()) return {};
    
    const auto& serviceKV = serviceIt->second;
    auto endpointIt = serviceKV.find("endpoint_url");
    if (endpointIt == serviceKV.end()) return {};
    
    return StringUtils::Trim(endpointIt->second.c_str());
}

Aws::Crt::Optional<ResolvedEndpoint> ConfiguredEndpointResolver::ResolveForService(
    const Aws::String& serviceId,
    const Aws::String& profileName,
    bool ignoreConfiguredEndpointsFromCode)
{
    // 0) honoring opt-out chain (client → env → profile)
    bool ignore = ignoreConfiguredEndpointsFromCode || ResolveIgnoreFlagFromEnv() || ResolveIgnoreFlagFromProfile(profileName);
    if (ignore) return {};

    // Resolution order per SEP:
    // 2. Service-specific env var
    const auto envService = "AWS_ENDPOINT_URL_" + ToEnvSuffix(serviceId);
    auto v = GetEnv(envService.c_str());
    if (!v.empty()) {
        AWS_LOGSTREAM_TRACE(ENDPOINT_RESOLVER_LOG_TAG, "Using configured endpoint URL from service env var");
        return ResolvedEndpoint{v, EndpointSource::ServiceEnvVar};
    }

    // 3. Global env var
    v = GetEnv("AWS_ENDPOINT_URL");
    if (!v.empty()) {
        AWS_LOGSTREAM_TRACE(ENDPOINT_RESOLVER_LOG_TAG, "Using configured endpoint URL from global env var");
        return ResolvedEndpoint{v, EndpointSource::GlobalEnvVar};
    }

    // 4. Service-specific from [services ...] section
    v = ResolveServiceProfileEndpoint(profileName, ToServicesKey(serviceId));
    if (!v.empty()) {
        AWS_LOGSTREAM_TRACE(ENDPOINT_RESOLVER_LOG_TAG, "Using configured endpoint URL from service shared config");
        return ResolvedEndpoint{v, EndpointSource::ServiceSharedConfig};
    }

    // 5. Global profile endpoint_url
    v = ResolveGlobalProfileEndpoint(profileName);
    if (!v.empty()) {
        AWS_LOGSTREAM_TRACE(ENDPOINT_RESOLVER_LOG_TAG, "Using configured endpoint URL from global shared config");
        return ResolvedEndpoint{v, EndpointSource::GlobalSharedConfig};
    }

    // 6. Fall through: let default endpoint rules handle it
    return {};
}

} // namespace Config
} // namespace Aws