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
enum class Ac4BitstreamMode { NOT_SET, COMPLETE_MAIN, EMERGENCY };

namespace Ac4BitstreamModeMapper {
AWS_MEDIACONVERT_API Ac4BitstreamMode GetAc4BitstreamModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc4BitstreamMode(Ac4BitstreamMode value);
}  // namespace Ac4BitstreamModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
