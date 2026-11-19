/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeClientConfiguration.h>
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerRuntime {
namespace Endpoint {
using SageMakerRuntimeClientConfiguration = Aws::SageMakerRuntime::SageMakerRuntimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SageMakerRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SAGEMAKERRUNTIME_API SageMakerRuntimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SageMakerRuntimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SageMakerRuntimeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SageMakerRuntimeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SageMakerRuntimeClientConfiguration& config);
};

/**
 * The type for the SageMakerRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerRuntimeEndpointProviderBase =
    EndpointProviderBase<SageMakerRuntimeClientConfiguration, SageMakerRuntimeBuiltInParameters, SageMakerRuntimeClientContextParameters>;

using SageMakerRuntimeDefaultEpProviderBase =
    BDDEndpointProvider<SageMakerRuntimeClientConfiguration, SageMakerRuntimeBuiltInParameters, SageMakerRuntimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace SageMakerRuntime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SAGEMAKERRUNTIME_EXTERN template class AWS_SAGEMAKERRUNTIME_API Aws::Endpoint::EndpointProviderBase<
    SageMakerRuntime::Endpoint::SageMakerRuntimeClientConfiguration, SageMakerRuntime::Endpoint::SageMakerRuntimeBuiltInParameters,
    SageMakerRuntime::Endpoint::SageMakerRuntimeClientContextParameters>;

AWS_SAGEMAKERRUNTIME_EXTERN template class AWS_SAGEMAKERRUNTIME_API Aws::Endpoint::BDDEndpointProvider<
    SageMakerRuntime::Endpoint::SageMakerRuntimeClientConfiguration, SageMakerRuntime::Endpoint::SageMakerRuntimeBuiltInParameters,
    SageMakerRuntime::Endpoint::SageMakerRuntimeClientContextParameters>;
}  // namespace Endpoint

namespace SageMakerRuntime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERRUNTIME_API SageMakerRuntimeEndpointProvider : public SageMakerRuntimeDefaultEpProviderBase {
 public:
  using SageMakerRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SageMakerRuntimeEndpointProvider();

  ~SageMakerRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SageMakerRuntime
}  // namespace Aws
