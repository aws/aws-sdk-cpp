/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>

namespace Aws {
namespace Sustainability {
namespace Model {
enum class Dimension { NOT_SET, USAGE_ACCOUNT_ID, REGION, SERVICE };

namespace DimensionMapper {
AWS_SUSTAINABILITY_API Dimension GetDimensionForName(const Aws::String& name);

AWS_SUSTAINABILITY_API Aws::String GetNameForDimension(Dimension value);
}  // namespace DimensionMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
