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
enum class DefaultCategoryEffect { NOT_SET, DENY_BY_DEFAULT };

namespace DefaultCategoryEffectMapper {
AWS_QUICKSIGHT_API DefaultCategoryEffect GetDefaultCategoryEffectForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDefaultCategoryEffect(DefaultCategoryEffect value);
}  // namespace DefaultCategoryEffectMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
