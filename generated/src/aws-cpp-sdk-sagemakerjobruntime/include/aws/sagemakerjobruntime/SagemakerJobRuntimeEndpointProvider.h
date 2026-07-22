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
#include <aws/sagemakerjobruntime/SagemakerJobRuntime_EXPORTS.h>

namespace Aws {
namespace SagemakerJobRuntime {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SagemakerJobRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SagemakerJobRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using SagemakerJobRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SagemakerJobRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SagemakerJobRuntimeEndpointProviderBase =
    EndpointProviderBase<SagemakerJobRuntimeClientConfiguration, SagemakerJobRuntimeBuiltInParameters,
                         SagemakerJobRuntimeClientContextParameters>;

using SagemakerJobRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<SagemakerJobRuntimeClientConfiguration, SagemakerJobRuntimeBuiltInParameters,
                            SagemakerJobRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERJOBRUNTIME_API SagemakerJobRuntimeEndpointProvider : public SagemakerJobRuntimeDefaultEpProviderBase {
 public:
  using SagemakerJobRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SagemakerJobRuntimeEndpointProvider();

  ~SagemakerJobRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SagemakerJobRuntime
}  // namespace Aws
