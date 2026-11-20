/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SageMakerGatewayRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SageMakerGatewayRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using SageMakerGatewayRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SageMakerGatewayRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerGatewayRuntimeEndpointProviderBase =
    EndpointProviderBase<SageMakerGatewayRuntimeClientConfiguration, SageMakerGatewayRuntimeBuiltInParameters,
                         SageMakerGatewayRuntimeClientContextParameters>;

using SageMakerGatewayRuntimeDefaultEpProviderBase =
    BDDEndpointProvider<SageMakerGatewayRuntimeClientConfiguration, SageMakerGatewayRuntimeBuiltInParameters,
                        SageMakerGatewayRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERGATEWAYRUNTIME_API SageMakerGatewayRuntimeEndpointProvider : public SageMakerGatewayRuntimeDefaultEpProviderBase {
 public:
  using SageMakerGatewayRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SageMakerGatewayRuntimeEndpointProvider();

  ~SageMakerGatewayRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
