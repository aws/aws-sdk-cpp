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
enum class DolbyVisionCompatibility { NOT_SET, DUPLICATE_STREAM, SUPPLEMENTAL_CODECS };

namespace DolbyVisionCompatibilityMapper {
AWS_MEDIACONVERT_API DolbyVisionCompatibility GetDolbyVisionCompatibilityForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDolbyVisionCompatibility(DolbyVisionCompatibility value);
}  // namespace DolbyVisionCompatibilityMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
