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
enum class DtsxCodingMode { NOT_SET, CODING_MODE_5_1, CODING_MODE_5_1_4 };

namespace DtsxCodingModeMapper {
AWS_MEDIACONVERT_API DtsxCodingMode GetDtsxCodingModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDtsxCodingMode(DtsxCodingMode value);
}  // namespace DtsxCodingModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
