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
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SageMakerTrainingSessionRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SageMakerTrainingSessionRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using SageMakerTrainingSessionRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SageMakerTrainingSessionRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerTrainingSessionRuntimeEndpointProviderBase =
    EndpointProviderBase<SageMakerTrainingSessionRuntimeClientConfiguration, SageMakerTrainingSessionRuntimeBuiltInParameters,
                         SageMakerTrainingSessionRuntimeClientContextParameters>;

using SageMakerTrainingSessionRuntimeDefaultEpProviderBase =
    BDDEndpointProvider<SageMakerTrainingSessionRuntimeClientConfiguration, SageMakerTrainingSessionRuntimeBuiltInParameters,
                        SageMakerTrainingSessionRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SageMakerTrainingSessionRuntimeEndpointProvider
    : public SageMakerTrainingSessionRuntimeDefaultEpProviderBase {
 public:
  using SageMakerTrainingSessionRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SageMakerTrainingSessionRuntimeEndpointProvider();

  ~SageMakerTrainingSessionRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
