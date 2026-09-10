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
enum class RackScalingType { NOT_SET, SINGLE_RACK, MULTI_RACK };

namespace RackScalingTypeMapper {
AWS_OUTPOSTS_API RackScalingType GetRackScalingTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForRackScalingType(RackScalingType value);
}  // namespace RackScalingTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
