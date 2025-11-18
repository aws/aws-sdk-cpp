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
#include <aws/mwaa-serverless/MWAAServerlessEndpointRules.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

namespace Aws {
namespace MWAAServerless {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MWAAServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MWAAServerlessClientConfiguration = Aws::Client::GenericClientConfiguration;
using MWAAServerlessBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MWAAServerless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MWAAServerlessEndpointProviderBase =
    EndpointProviderBase<MWAAServerlessClientConfiguration, MWAAServerlessBuiltInParameters, MWAAServerlessClientContextParameters>;

using MWAAServerlessDefaultEpProviderBase =
    DefaultEndpointProvider<MWAAServerlessClientConfiguration, MWAAServerlessBuiltInParameters, MWAAServerlessClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MWAASERVERLESS_API MWAAServerlessEndpointProvider : public MWAAServerlessDefaultEpProviderBase {
 public:
  using MWAAServerlessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MWAAServerlessEndpointProvider()
      : MWAAServerlessDefaultEpProviderBase(Aws::MWAAServerless::MWAAServerlessEndpointRules::GetRulesBlob(),
                                            Aws::MWAAServerless::MWAAServerlessEndpointRules::RulesBlobSize) {}

  ~MWAAServerlessEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MWAAServerless
}  // namespace Aws
