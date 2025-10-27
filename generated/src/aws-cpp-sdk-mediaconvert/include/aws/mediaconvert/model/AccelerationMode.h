/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class AccelerationMode { NOT_SET, DISABLED, ENABLED, PREFERRED };

namespace AccelerationModeMapper {
AWS_MEDIACONVERT_API AccelerationMode GetAccelerationModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAccelerationMode(AccelerationMode value);
}  // namespace AccelerationModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
