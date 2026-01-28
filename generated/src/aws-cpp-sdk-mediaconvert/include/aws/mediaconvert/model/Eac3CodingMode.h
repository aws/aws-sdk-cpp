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
enum class Eac3CodingMode { NOT_SET, CODING_MODE_1_0, CODING_MODE_2_0, CODING_MODE_3_2, CODING_MODE_AUTO };

namespace Eac3CodingModeMapper {
AWS_MEDIACONVERT_API Eac3CodingMode GetEac3CodingModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3CodingMode(Eac3CodingMode value);
}  // namespace Eac3CodingModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
