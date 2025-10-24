﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class RefreshFailureAlertStatus { NOT_SET, ENABLED, DISABLED };

namespace RefreshFailureAlertStatusMapper {
AWS_QUICKSIGHT_API RefreshFailureAlertStatus GetRefreshFailureAlertStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForRefreshFailureAlertStatus(RefreshFailureAlertStatus value);
}  // namespace RefreshFailureAlertStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
