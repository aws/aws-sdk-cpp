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
enum class DecalStyleType { NOT_SET, Manual, Auto };

namespace DecalStyleTypeMapper {
AWS_QUICKSIGHT_API DecalStyleType GetDecalStyleTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDecalStyleType(DecalStyleType value);
}  // namespace DecalStyleTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
