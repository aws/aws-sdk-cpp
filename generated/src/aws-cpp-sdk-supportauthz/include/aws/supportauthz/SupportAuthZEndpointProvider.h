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
#include <aws/supportauthz/SupportAuthZEndpointRules.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

namespace Aws {
namespace SupportAuthZ {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SupportAuthZClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SupportAuthZClientConfiguration = Aws::Client::GenericClientConfiguration;
using SupportAuthZBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SupportAuthZ Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SupportAuthZEndpointProviderBase =
    EndpointProviderBase<SupportAuthZClientConfiguration, SupportAuthZBuiltInParameters, SupportAuthZClientContextParameters>;

using SupportAuthZDefaultEpProviderBase =
    DefaultEndpointProvider<SupportAuthZClientConfiguration, SupportAuthZBuiltInParameters, SupportAuthZClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SUPPORTAUTHZ_API SupportAuthZEndpointProvider : public SupportAuthZDefaultEpProviderBase {
 public:
  using SupportAuthZResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SupportAuthZEndpointProvider()
      : SupportAuthZDefaultEpProviderBase(Aws::SupportAuthZ::SupportAuthZEndpointRules::GetRulesBlob(),
                                          Aws::SupportAuthZ::SupportAuthZEndpointRules::RulesBlobSize) {}

  ~SupportAuthZEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SupportAuthZ
}  // namespace Aws
