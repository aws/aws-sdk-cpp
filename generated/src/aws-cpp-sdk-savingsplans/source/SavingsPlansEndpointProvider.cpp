/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/SavingsPlansEndpointProvider.h>
#include <aws/savingsplans/internal/SavingsPlansEndpointRules.h>

namespace Aws {
namespace SavingsPlans {
namespace Endpoint {
SavingsPlansEndpointProvider::SavingsPlansEndpointProvider()
    : SavingsPlansDefaultEpProviderBase(Aws::SavingsPlans::SavingsPlansEndpointRules::GetRulesBlob(),
                                        Aws::SavingsPlans::SavingsPlansEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SavingsPlans
}  // namespace Aws
