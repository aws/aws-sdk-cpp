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
enum class VerticalTextAlignment { NOT_SET, TOP, MIDDLE, BOTTOM, AUTO };

namespace VerticalTextAlignmentMapper {
AWS_QUICKSIGHT_API VerticalTextAlignment GetVerticalTextAlignmentForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForVerticalTextAlignment(VerticalTextAlignment value);
}  // namespace VerticalTextAlignmentMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
