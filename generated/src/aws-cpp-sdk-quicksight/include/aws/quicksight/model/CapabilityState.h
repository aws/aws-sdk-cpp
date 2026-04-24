/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class CapabilityState { NOT_SET, DENY };

namespace CapabilityStateMapper {
AWS_QUICKSIGHT_API CapabilityState GetCapabilityStateForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCapabilityState(CapabilityState value);
}  // namespace CapabilityStateMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
