/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class RackUnitHeight { NOT_SET, HEIGHT_42U, HEIGHT_2U, HEIGHT_1U };

namespace RackUnitHeightMapper {
AWS_OUTPOSTS_API RackUnitHeight GetRackUnitHeightForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForRackUnitHeight(RackUnitHeight value);
}  // namespace RackUnitHeightMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
