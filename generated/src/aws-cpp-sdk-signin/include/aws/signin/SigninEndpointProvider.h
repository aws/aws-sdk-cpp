/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signin/SigninEndpointRules.h>
#include <aws/signin/Signin_EXPORTS.h>

namespace Aws {
namespace Signin {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SigninClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SigninClientConfiguration = Aws::Client::GenericClientConfiguration;
using SigninBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Signin Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SigninEndpointProviderBase = EndpointProviderBase<SigninClientConfiguration, SigninBuiltInParameters, SigninClientContextParameters>;

using SigninDefaultEpProviderBase =
    DefaultEndpointProvider<SigninClientConfiguration, SigninBuiltInParameters, SigninClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SIGNIN_API SigninEndpointProvider : public SigninDefaultEpProviderBase {
 public:
  using SigninResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SigninEndpointProvider()
      : SigninDefaultEpProviderBase(Aws::Signin::SigninEndpointRules::GetRulesBlob(), Aws::Signin::SigninEndpointRules::RulesBlobSize) {}

  ~SigninEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Signin
}  // namespace Aws
