/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthSchemeOption.h>
#include <smithy/identity/signer/AwsSignerBase.h>

#include <aws/crt/Variant.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace smithy {

static const char SIGV4_PREFERENCE[] = "sigv4";
static const char SIGV4A_PREFERENCE[] = "sigv4a";
static const char BEARER_PREFERENCE[] = "bearer";
static const char NO_AUTH_PREFERENCE[] = "noauth";

// Global map from auth scheme name (trimmed ID) to full ID for case insensitive lookup
static const Aws::Array<std::pair<const char*, const char*>, 4> AUTH_SCHEME_NAME_TO_ID = {{
    std::make_pair(SIGV4_PREFERENCE, "aws.auth#sigv4"),
    std::make_pair(SIGV4A_PREFERENCE, "aws.auth#sigv4a"),
    std::make_pair(BEARER_PREFERENCE, "smithy.api#HTTPBearerAuth"),
    std::make_pair(NO_AUTH_PREFERENCE, "smithy.api#noAuth")
}};

/**
* A base interface for code-generated interfaces for passing in the data required for determining the
* authentication scheme. By default, this only includes the operation name.
*/
class DefaultAuthSchemeResolverParameters
{
public:
  Aws::String serviceName;
  Aws::String operation;
  Aws::Crt::Optional<Aws::String> region;
  Aws::Vector<Aws::String> authPreferences;

  Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<Aws::String,
          bool,
          Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy,
          Aws::Auth::AWSSigningAlgorithm,
          Aws::Vector<Aws::String>>> additionalProperties;

};

template<typename ServiceAuthSchemeParametersT = DefaultAuthSchemeResolverParameters,  typename ClientConfigT = Aws::Client::ClientConfiguration>
class AuthSchemeResolverBase
{
public:

  virtual void Init(const ClientConfigT& config) {
    AWS_UNREFERENCED_PARAM(config);
  }

  using ServiceAuthSchemeParameters = ServiceAuthSchemeParametersT;

  virtual ~AuthSchemeResolverBase() = default;
  
  virtual Aws::Vector<AuthSchemeOption> resolveAuthScheme(const ServiceAuthSchemeParameters& identityProperties) {
    auto options = resolveAuthSchemeImpl(identityProperties);
    return filterByPreferences(options, identityProperties.authPreferences);
  }

protected:
  virtual Aws::Vector<AuthSchemeOption> resolveAuthSchemeImpl(const ServiceAuthSchemeParameters& identityProperties) = 0;
  
  virtual Aws::Vector<AuthSchemeOption> filterByPreferences(const Aws::Vector<AuthSchemeOption>& options, 
                                                           const Aws::Vector<Aws::String>& preferences) {
    if (preferences.empty()) return options;
    
    Aws::Vector<AuthSchemeOption> filtered;
    for (const auto& pref : preferences) {
      auto prefSchemeIt = find_if(AUTH_SCHEME_NAME_TO_ID.begin(), AUTH_SCHEME_NAME_TO_ID.end(), [&](const std::pair<const char*, const char*> &pair) { return Aws::Utils::StringUtils::ToLower(pref.c_str()) == pair.first; });
      if (prefSchemeIt == AUTH_SCHEME_NAME_TO_ID.end()) continue;
      for (const auto& option : options) {
        if (strcmp(option.schemeId, prefSchemeIt->second) == 0) {
          filtered.push_back(option);
          break;
        }
      }
    }
    return filtered.empty() ? options : filtered;
  }
};
}