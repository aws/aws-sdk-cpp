/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerClientConfiguration.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Endpoint {
using SageMakerClientConfiguration = Aws::SageMaker::SageMakerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SageMakerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SAGEMAKER_API SageMakerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SageMakerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SageMakerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SageMakerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SageMakerClientConfiguration& config);
};

/**
 * The type for the SageMaker Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerEndpointProviderBase =
    EndpointProviderBase<SageMakerClientConfiguration, SageMakerBuiltInParameters, SageMakerClientContextParameters>;

using SageMakerDefaultEpProviderBase =
    BDDEndpointProvider<SageMakerClientConfiguration, SageMakerBuiltInParameters, SageMakerClientContextParameters>;

}  // namespace Endpoint
}  // namespace SageMaker

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SAGEMAKER_EXTERN template class AWS_SAGEMAKER_API
    Aws::Endpoint::EndpointProviderBase<SageMaker::Endpoint::SageMakerClientConfiguration, SageMaker::Endpoint::SageMakerBuiltInParameters,
                                        SageMaker::Endpoint::SageMakerClientContextParameters>;

AWS_SAGEMAKER_EXTERN template class AWS_SAGEMAKER_API
    Aws::Endpoint::BDDEndpointProvider<SageMaker::Endpoint::SageMakerClientConfiguration, SageMaker::Endpoint::SageMakerBuiltInParameters,
                                       SageMaker::Endpoint::SageMakerClientContextParameters>;
}  // namespace Endpoint

namespace SageMaker {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKER_API SageMakerEndpointProvider : public SageMakerDefaultEpProviderBase {
 public:
  using SageMakerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SageMakerEndpointProvider();

  ~SageMakerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SageMaker
}  // namespace Aws
