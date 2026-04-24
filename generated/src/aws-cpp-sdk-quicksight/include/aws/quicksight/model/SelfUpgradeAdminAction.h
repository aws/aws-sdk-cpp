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
enum class SelfUpgradeAdminAction { NOT_SET, APPROVE, DENY, VERIFY };

namespace SelfUpgradeAdminActionMapper {
AWS_QUICKSIGHT_API SelfUpgradeAdminAction GetSelfUpgradeAdminActionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSelfUpgradeAdminAction(SelfUpgradeAdminAction value);
}  // namespace SelfUpgradeAdminActionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
