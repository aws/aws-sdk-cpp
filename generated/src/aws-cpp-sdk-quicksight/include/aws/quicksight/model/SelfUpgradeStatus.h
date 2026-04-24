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
enum class SelfUpgradeStatus { NOT_SET, AUTO_APPROVAL, ADMIN_APPROVAL };

namespace SelfUpgradeStatusMapper {
AWS_QUICKSIGHT_API SelfUpgradeStatus GetSelfUpgradeStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSelfUpgradeStatus(SelfUpgradeStatus value);
}  // namespace SelfUpgradeStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
