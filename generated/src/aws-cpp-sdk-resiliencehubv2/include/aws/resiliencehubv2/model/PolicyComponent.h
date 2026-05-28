/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class PolicyComponent { NOT_SET, AVAILABILITY_SLO, MULTI_AZ_DISASTER_RECOVERY, MULTI_REGION_DISASTER_RECOVERY, DATA_RECOVERY };

namespace PolicyComponentMapper {
AWS_RESILIENCEHUBV2_API PolicyComponent GetPolicyComponentForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForPolicyComponent(PolicyComponent value);
}  // namespace PolicyComponentMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
