/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/RekognitionEndpointProvider.h>
#include <aws/rekognition/internal/RekognitionEndpointRules.h>

namespace Aws {
namespace Rekognition {
namespace Endpoint {
RekognitionEndpointProvider::RekognitionEndpointProvider()
    : RekognitionDefaultEpProviderBase(Aws::Rekognition::RekognitionEndpointRules::GetRulesBlob(),
                                       Aws::Rekognition::RekognitionEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Rekognition
}  // namespace Aws
