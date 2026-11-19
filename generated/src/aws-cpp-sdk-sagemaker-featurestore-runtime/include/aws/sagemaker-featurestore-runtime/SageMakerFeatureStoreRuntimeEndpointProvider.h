/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClientConfiguration.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {
namespace Endpoint {
using SageMakerFeatureStoreRuntimeClientConfiguration = Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SageMakerFeatureStoreRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SAGEMAKERFEATURESTORERUNTIME_API SageMakerFeatureStoreRuntimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SageMakerFeatureStoreRuntimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SageMakerFeatureStoreRuntimeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SageMakerFeatureStoreRuntimeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SageMakerFeatureStoreRuntimeClientConfiguration& config);
};

/**
 * The type for the SageMakerFeatureStoreRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerFeatureStoreRuntimeEndpointProviderBase =
    EndpointProviderBase<SageMakerFeatureStoreRuntimeClientConfiguration, SageMakerFeatureStoreRuntimeBuiltInParameters,
                         SageMakerFeatureStoreRuntimeClientContextParameters>;

using SageMakerFeatureStoreRuntimeDefaultEpProviderBase =
    BDDEndpointProvider<SageMakerFeatureStoreRuntimeClientConfiguration, SageMakerFeatureStoreRuntimeBuiltInParameters,
                        SageMakerFeatureStoreRuntimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace SageMakerFeatureStoreRuntime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SAGEMAKERFEATURESTORERUNTIME_EXTERN template class AWS_SAGEMAKERFEATURESTORERUNTIME_API
    Aws::Endpoint::EndpointProviderBase<SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeClientConfiguration,
                                        SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeBuiltInParameters,
                                        SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeClientContextParameters>;

AWS_SAGEMAKERFEATURESTORERUNTIME_EXTERN template class AWS_SAGEMAKERFEATURESTORERUNTIME_API
    Aws::Endpoint::BDDEndpointProvider<SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeClientConfiguration,
                                       SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeBuiltInParameters,
                                       SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeClientContextParameters>;
}  // namespace Endpoint

namespace SageMakerFeatureStoreRuntime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERFEATURESTORERUNTIME_API SageMakerFeatureStoreRuntimeEndpointProvider
    : public SageMakerFeatureStoreRuntimeDefaultEpProviderBase {
 public:
  using SageMakerFeatureStoreRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SageMakerFeatureStoreRuntimeEndpointProvider();

  ~SageMakerFeatureStoreRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
