/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/SageMakerGeospatialEndpointProvider.h>
#include <aws/sagemaker-geospatial/internal/SageMakerGeospatialEndpointRules.h>

namespace Aws {
#ifndef AWS_SAGEMAKERGEOSPATIAL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SageMakerGeospatial::Endpoint::SageMakerGeospatialClientConfiguration,
                                                   SageMakerGeospatial::Endpoint::SageMakerGeospatialBuiltInParameters,
                                                   SageMakerGeospatial::Endpoint::SageMakerGeospatialClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SageMakerGeospatial::Endpoint::SageMakerGeospatialClientConfiguration,
                                                  SageMakerGeospatial::Endpoint::SageMakerGeospatialBuiltInParameters,
                                                  SageMakerGeospatial::Endpoint::SageMakerGeospatialClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SageMakerGeospatial {
namespace Endpoint {
SageMakerGeospatialEndpointProvider::SageMakerGeospatialEndpointProvider()
    : SageMakerGeospatialDefaultEpProviderBase(Aws::SageMakerGeospatial::SageMakerGeospatialEndpointRules::GetRulesBlob(),
                                               Aws::SageMakerGeospatial::SageMakerGeospatialEndpointRules::RulesBlobSize) {}

void SageMakerGeospatialBuiltInParameters::SetFromClientConfiguration(const SageMakerGeospatialClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SageMakerGeospatialClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SageMakerGeospatialBuiltInParameters::SetFromClientConfiguration(const SageMakerGeospatialClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SageMakerGeospatialClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SageMakerGeospatialBuiltInParameters::SetServiceSpecificParameters(const SageMakerGeospatialClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SageMakerGeospatial
}  // namespace Aws
