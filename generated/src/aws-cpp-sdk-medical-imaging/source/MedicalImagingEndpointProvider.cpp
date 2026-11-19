/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/MedicalImagingEndpointProvider.h>
#include <aws/medical-imaging/internal/MedicalImagingEndpointRules.h>

namespace Aws {
#ifndef AWS_MEDICALIMAGING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MedicalImaging::Endpoint::MedicalImagingClientConfiguration,
                                                   MedicalImaging::Endpoint::MedicalImagingBuiltInParameters,
                                                   MedicalImaging::Endpoint::MedicalImagingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MedicalImaging::Endpoint::MedicalImagingClientConfiguration,
                                                  MedicalImaging::Endpoint::MedicalImagingBuiltInParameters,
                                                  MedicalImaging::Endpoint::MedicalImagingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MedicalImaging {
namespace Endpoint {
MedicalImagingEndpointProvider::MedicalImagingEndpointProvider()
    : MedicalImagingDefaultEpProviderBase(Aws::MedicalImaging::MedicalImagingEndpointRules::GetRulesBlob(),
                                          Aws::MedicalImaging::MedicalImagingEndpointRules::RulesBlobSize) {}

void MedicalImagingBuiltInParameters::SetFromClientConfiguration(const MedicalImagingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MedicalImagingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MedicalImagingBuiltInParameters::SetFromClientConfiguration(const MedicalImagingClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MedicalImagingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MedicalImagingBuiltInParameters::SetServiceSpecificParameters(const MedicalImagingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MedicalImaging
}  // namespace Aws
