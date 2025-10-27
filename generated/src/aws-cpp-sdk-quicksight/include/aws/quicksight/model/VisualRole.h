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
enum class VisualRole { NOT_SET, PRIMARY, COMPLIMENTARY, MULTI_INTENT, FALLBACK, FRAGMENT };

namespace VisualRoleMapper {
AWS_QUICKSIGHT_API VisualRole GetVisualRoleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForVisualRole(VisualRole value);
}  // namespace VisualRoleMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
