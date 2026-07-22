/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/PersonalizeEndpointProvider.h>
#include <aws/personalize/internal/PersonalizeEndpointRules.h>

namespace Aws {
namespace Personalize {
namespace Endpoint {
PersonalizeEndpointProvider::PersonalizeEndpointProvider()
    : PersonalizeDefaultEpProviderBase(Aws::Personalize::PersonalizeEndpointRules::GetRulesBlob(),
                                       Aws::Personalize::PersonalizeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Personalize
}  // namespace Aws
