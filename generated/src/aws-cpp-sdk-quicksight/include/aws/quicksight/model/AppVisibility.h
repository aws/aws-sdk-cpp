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
enum class AppVisibility { NOT_SET, PRIVATE_, PUBLIC_ };

namespace AppVisibilityMapper {
AWS_QUICKSIGHT_API AppVisibility GetAppVisibilityForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAppVisibility(AppVisibility value);
}  // namespace AppVisibilityMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
