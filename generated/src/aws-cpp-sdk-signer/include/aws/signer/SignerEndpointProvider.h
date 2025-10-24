﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer/SignerEndpointRules.h>
#include <aws/signer/Signer_EXPORTS.h>

namespace Aws {
namespace signer {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SignerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SignerClientConfiguration = Aws::Client::GenericClientConfiguration;
using SignerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the signer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SignerEndpointProviderBase = EndpointProviderBase<SignerClientConfiguration, SignerBuiltInParameters, SignerClientContextParameters>;

using SignerDefaultEpProviderBase =
    DefaultEndpointProvider<SignerClientConfiguration, SignerBuiltInParameters, SignerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SIGNER_API SignerEndpointProvider : public SignerDefaultEpProviderBase {
 public:
  using SignerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SignerEndpointProvider()
      : SignerDefaultEpProviderBase(Aws::signer::SignerEndpointRules::GetRulesBlob(), Aws::signer::SignerEndpointRules::RulesBlobSize) {}

  ~SignerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace signer
}  // namespace Aws
