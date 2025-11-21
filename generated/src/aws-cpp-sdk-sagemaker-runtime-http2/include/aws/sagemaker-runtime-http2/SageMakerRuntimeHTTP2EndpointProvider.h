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
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2EndpointRules.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SageMakerRuntimeHTTP2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SageMakerRuntimeHTTP2ClientConfiguration = Aws::Client::GenericClientConfiguration;
using SageMakerRuntimeHTTP2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SageMakerRuntimeHTTP2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerRuntimeHTTP2EndpointProviderBase =
    EndpointProviderBase<SageMakerRuntimeHTTP2ClientConfiguration, SageMakerRuntimeHTTP2BuiltInParameters,
                         SageMakerRuntimeHTTP2ClientContextParameters>;

using SageMakerRuntimeHTTP2DefaultEpProviderBase =
    DefaultEndpointProvider<SageMakerRuntimeHTTP2ClientConfiguration, SageMakerRuntimeHTTP2BuiltInParameters,
                            SageMakerRuntimeHTTP2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERRUNTIMEHTTP2_API SageMakerRuntimeHTTP2EndpointProvider : public SageMakerRuntimeHTTP2DefaultEpProviderBase {
 public:
  using SageMakerRuntimeHTTP2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SageMakerRuntimeHTTP2EndpointProvider()
      : SageMakerRuntimeHTTP2DefaultEpProviderBase(Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2EndpointRules::GetRulesBlob(),
                                                   Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2EndpointRules::RulesBlobSize) {}

  ~SageMakerRuntimeHTTP2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
