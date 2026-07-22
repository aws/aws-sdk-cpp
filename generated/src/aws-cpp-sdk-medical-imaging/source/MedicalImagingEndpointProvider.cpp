/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/MedicalImagingEndpointProvider.h>
#include <aws/medical-imaging/internal/MedicalImagingEndpointRules.h>

namespace Aws {
namespace MedicalImaging {
namespace Endpoint {
MedicalImagingEndpointProvider::MedicalImagingEndpointProvider()
    : MedicalImagingDefaultEpProviderBase(Aws::MedicalImaging::MedicalImagingEndpointRules::GetRulesBlob(),
                                          Aws::MedicalImaging::MedicalImagingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MedicalImaging
}  // namespace Aws
