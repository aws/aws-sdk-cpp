/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeClientConfiguration.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>

namespace Aws {
namespace AugmentedAIRuntime {
namespace Endpoint {
using AugmentedAIRuntimeClientConfiguration = Aws::AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AugmentedAIRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AUGMENTEDAIRUNTIME_API AugmentedAIRuntimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AugmentedAIRuntimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AugmentedAIRuntimeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AugmentedAIRuntimeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AugmentedAIRuntimeClientConfiguration& config);
};

/**
 * The type for the AugmentedAIRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AugmentedAIRuntimeEndpointProviderBase =
    EndpointProviderBase<AugmentedAIRuntimeClientConfiguration, AugmentedAIRuntimeBuiltInParameters,
                         AugmentedAIRuntimeClientContextParameters>;

using AugmentedAIRuntimeDefaultEpProviderBase =
    BDDEndpointProvider<AugmentedAIRuntimeClientConfiguration, AugmentedAIRuntimeBuiltInParameters,
                        AugmentedAIRuntimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace AugmentedAIRuntime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AUGMENTEDAIRUNTIME_EXTERN template class AWS_AUGMENTEDAIRUNTIME_API Aws::Endpoint::EndpointProviderBase<
    AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeClientConfiguration, AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeBuiltInParameters,
    AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeClientContextParameters>;

AWS_AUGMENTEDAIRUNTIME_EXTERN template class AWS_AUGMENTEDAIRUNTIME_API Aws::Endpoint::BDDEndpointProvider<
    AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeClientConfiguration, AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeBuiltInParameters,
    AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeClientContextParameters>;
}  // namespace Endpoint

namespace AugmentedAIRuntime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_AUGMENTEDAIRUNTIME_API AugmentedAIRuntimeEndpointProvider : public AugmentedAIRuntimeDefaultEpProviderBase {
 public:
  using AugmentedAIRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AugmentedAIRuntimeEndpointProvider();

  ~AugmentedAIRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AugmentedAIRuntime
}  // namespace Aws
