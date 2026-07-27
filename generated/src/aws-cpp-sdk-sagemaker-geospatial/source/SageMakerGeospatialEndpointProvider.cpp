/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/SageMakerGeospatialEndpointProvider.h>
#include <aws/sagemaker-geospatial/internal/SageMakerGeospatialEndpointRules.h>

namespace Aws {
namespace SageMakerGeospatial {
namespace Endpoint {
SageMakerGeospatialEndpointProvider::SageMakerGeospatialEndpointProvider()
    : SageMakerGeospatialDefaultEpProviderBase(Aws::SageMakerGeospatial::SageMakerGeospatialEndpointRules::GetRulesBlob(),
                                               Aws::SageMakerGeospatial::SageMakerGeospatialEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SageMakerGeospatial
}  // namespace Aws
