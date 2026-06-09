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
enum class PolicyValueSource { NOT_SET, SELF, CROSS_ACCOUNT };

namespace PolicyValueSourceMapper {
AWS_RESILIENCEHUBV2_API PolicyValueSource GetPolicyValueSourceForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForPolicyValueSource(PolicyValueSource value);
}  // namespace PolicyValueSourceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
