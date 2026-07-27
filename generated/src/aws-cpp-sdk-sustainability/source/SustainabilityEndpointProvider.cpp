/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sustainability/SustainabilityEndpointProvider.h>
#include <aws/sustainability/internal/SustainabilityEndpointRules.h>

namespace Aws {
namespace Sustainability {
namespace Endpoint {
SustainabilityEndpointProvider::SustainabilityEndpointProvider()
    : SustainabilityDefaultEpProviderBase(Aws::Sustainability::SustainabilityEndpointRules::GetRulesBlob(),
                                          Aws::Sustainability::SustainabilityEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Sustainability
}  // namespace Aws
