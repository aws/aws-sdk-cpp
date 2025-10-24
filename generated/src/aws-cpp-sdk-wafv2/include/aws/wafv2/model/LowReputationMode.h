/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class LowReputationMode { NOT_SET, ACTIVE_UNDER_DDOS, ALWAYS_ON };

namespace LowReputationModeMapper {
AWS_WAFV2_API LowReputationMode GetLowReputationModeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForLowReputationMode(LowReputationMode value);
}  // namespace LowReputationModeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
