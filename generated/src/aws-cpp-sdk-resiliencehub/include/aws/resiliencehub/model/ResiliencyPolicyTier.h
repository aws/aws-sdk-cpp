/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Model {
enum class ResiliencyPolicyTier { NOT_SET, MissionCritical, Critical, Important, CoreServices, NonCritical, NotApplicable };

namespace ResiliencyPolicyTierMapper {
AWS_RESILIENCEHUB_API ResiliencyPolicyTier GetResiliencyPolicyTierForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForResiliencyPolicyTier(ResiliencyPolicyTier value);
}  // namespace ResiliencyPolicyTierMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
