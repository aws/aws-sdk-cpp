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
#include <aws/signer-data/SignerDataEndpointRules.h>
#include <aws/signer-data/SignerData_EXPORTS.h>

namespace Aws {
namespace SignerData {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SignerDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SignerDataClientConfiguration = Aws::Client::GenericClientConfiguration;
using SignerDataBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SignerData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SignerDataEndpointProviderBase =
    EndpointProviderBase<SignerDataClientConfiguration, SignerDataBuiltInParameters, SignerDataClientContextParameters>;

using SignerDataDefaultEpProviderBase =
    DefaultEndpointProvider<SignerDataClientConfiguration, SignerDataBuiltInParameters, SignerDataClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SIGNERDATA_API SignerDataEndpointProvider : public SignerDataDefaultEpProviderBase {
 public:
  using SignerDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SignerDataEndpointProvider()
      : SignerDataDefaultEpProviderBase(Aws::SignerData::SignerDataEndpointRules::GetRulesBlob(),
                                        Aws::SignerData::SignerDataEndpointRules::RulesBlobSize) {}

  ~SignerDataEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SignerData
}  // namespace Aws
