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
enum class SheetLayoutGroupMemberType { NOT_SET, ELEMENT, GROUP };

namespace SheetLayoutGroupMemberTypeMapper {
AWS_QUICKSIGHT_API SheetLayoutGroupMemberType GetSheetLayoutGroupMemberTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSheetLayoutGroupMemberType(SheetLayoutGroupMemberType value);
}  // namespace SheetLayoutGroupMemberTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
