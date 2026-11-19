/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/RekognitionEndpointProvider.h>
#include <aws/rekognition/internal/RekognitionEndpointRules.h>

namespace Aws {
#ifndef AWS_REKOGNITION_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Rekognition::Endpoint::RekognitionClientConfiguration,
                                                   Rekognition::Endpoint::RekognitionBuiltInParameters,
                                                   Rekognition::Endpoint::RekognitionClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Rekognition::Endpoint::RekognitionClientConfiguration,
                                                  Rekognition::Endpoint::RekognitionBuiltInParameters,
                                                  Rekognition::Endpoint::RekognitionClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Rekognition {
namespace Endpoint {
RekognitionEndpointProvider::RekognitionEndpointProvider()
    : RekognitionDefaultEpProviderBase(Aws::Rekognition::RekognitionEndpointRules::GetRulesBlob(),
                                       Aws::Rekognition::RekognitionEndpointRules::RulesBlobSize) {}

void RekognitionBuiltInParameters::SetFromClientConfiguration(const RekognitionClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RekognitionClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RekognitionBuiltInParameters::SetFromClientConfiguration(const RekognitionClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RekognitionClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RekognitionBuiltInParameters::SetServiceSpecificParameters(const RekognitionClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Rekognition
}  // namespace Aws
