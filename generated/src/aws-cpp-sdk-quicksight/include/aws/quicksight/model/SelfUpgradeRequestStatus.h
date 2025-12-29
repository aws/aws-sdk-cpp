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
enum class SelfUpgradeRequestStatus { NOT_SET, PENDING, APPROVED, DENIED, UPDATE_FAILED, VERIFY_FAILED };

namespace SelfUpgradeRequestStatusMapper {
AWS_QUICKSIGHT_API SelfUpgradeRequestStatus GetSelfUpgradeRequestStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSelfUpgradeRequestStatus(SelfUpgradeRequestStatus value);
}  // namespace SelfUpgradeRequestStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
