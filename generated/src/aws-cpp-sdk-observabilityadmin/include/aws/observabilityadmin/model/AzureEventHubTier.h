/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class AzureEventHubTier { NOT_SET, Standard, Premium };

namespace AzureEventHubTierMapper {
AWS_OBSERVABILITYADMIN_API AzureEventHubTier GetAzureEventHubTierForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForAzureEventHubTier(AzureEventHubTier value);
}  // namespace AzureEventHubTierMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
