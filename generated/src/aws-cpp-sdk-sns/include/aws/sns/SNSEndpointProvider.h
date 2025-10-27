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
#include <aws/sns/SNSEndpointRules.h>
#include <aws/sns/SNS_EXPORTS.h>

namespace Aws {
namespace SNS {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SNSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SNSClientConfiguration = Aws::Client::GenericClientConfiguration;
using SNSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SNS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SNSEndpointProviderBase = EndpointProviderBase<SNSClientConfiguration, SNSBuiltInParameters, SNSClientContextParameters>;

using SNSDefaultEpProviderBase = DefaultEndpointProvider<SNSClientConfiguration, SNSBuiltInParameters, SNSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SNS_API SNSEndpointProvider : public SNSDefaultEpProviderBase {
 public:
  using SNSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SNSEndpointProvider() : SNSDefaultEpProviderBase(Aws::SNS::SNSEndpointRules::GetRulesBlob(), Aws::SNS::SNSEndpointRules::RulesBlobSize) {}

  ~SNSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SNS
}  // namespace Aws
