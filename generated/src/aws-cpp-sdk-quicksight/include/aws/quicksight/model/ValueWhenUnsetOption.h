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
enum class ValueWhenUnsetOption { NOT_SET, RECOMMENDED_VALUE, NULL_ };

namespace ValueWhenUnsetOptionMapper {
AWS_QUICKSIGHT_API ValueWhenUnsetOption GetValueWhenUnsetOptionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForValueWhenUnsetOption(ValueWhenUnsetOption value);
}  // namespace ValueWhenUnsetOptionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
