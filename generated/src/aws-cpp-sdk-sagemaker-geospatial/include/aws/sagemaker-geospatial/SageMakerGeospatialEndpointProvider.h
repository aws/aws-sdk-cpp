/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialClientConfiguration.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>

namespace Aws {
namespace SageMakerGeospatial {
namespace Endpoint {
using SageMakerGeospatialClientConfiguration = Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SageMakerGeospatialClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SAGEMAKERGEOSPATIAL_API SageMakerGeospatialBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SageMakerGeospatialBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SageMakerGeospatialClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SageMakerGeospatialClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SageMakerGeospatialClientConfiguration& config);
};

/**
 * The type for the SageMakerGeospatial Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerGeospatialEndpointProviderBase =
    EndpointProviderBase<SageMakerGeospatialClientConfiguration, SageMakerGeospatialBuiltInParameters,
                         SageMakerGeospatialClientContextParameters>;

using SageMakerGeospatialDefaultEpProviderBase =
    BDDEndpointProvider<SageMakerGeospatialClientConfiguration, SageMakerGeospatialBuiltInParameters,
                        SageMakerGeospatialClientContextParameters>;

}  // namespace Endpoint
}  // namespace SageMakerGeospatial

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SAGEMAKERGEOSPATIAL_EXTERN template class AWS_SAGEMAKERGEOSPATIAL_API
    Aws::Endpoint::EndpointProviderBase<SageMakerGeospatial::Endpoint::SageMakerGeospatialClientConfiguration,
                                        SageMakerGeospatial::Endpoint::SageMakerGeospatialBuiltInParameters,
                                        SageMakerGeospatial::Endpoint::SageMakerGeospatialClientContextParameters>;

AWS_SAGEMAKERGEOSPATIAL_EXTERN template class AWS_SAGEMAKERGEOSPATIAL_API
    Aws::Endpoint::BDDEndpointProvider<SageMakerGeospatial::Endpoint::SageMakerGeospatialClientConfiguration,
                                       SageMakerGeospatial::Endpoint::SageMakerGeospatialBuiltInParameters,
                                       SageMakerGeospatial::Endpoint::SageMakerGeospatialClientContextParameters>;
}  // namespace Endpoint

namespace SageMakerGeospatial {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERGEOSPATIAL_API SageMakerGeospatialEndpointProvider : public SageMakerGeospatialDefaultEpProviderBase {
 public:
  using SageMakerGeospatialResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SageMakerGeospatialEndpointProvider();

  ~SageMakerGeospatialEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SageMakerGeospatial
}  // namespace Aws
