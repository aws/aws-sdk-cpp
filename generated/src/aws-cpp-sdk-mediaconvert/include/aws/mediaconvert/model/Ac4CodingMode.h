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
enum class Ac4CodingMode { NOT_SET, CODING_MODE_2_0, CODING_MODE_3_2_LFE, CODING_MODE_5_1_4 };

namespace Ac4CodingModeMapper {
AWS_MEDIACONVERT_API Ac4CodingMode GetAc4CodingModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc4CodingMode(Ac4CodingMode value);
}  // namespace Ac4CodingModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
