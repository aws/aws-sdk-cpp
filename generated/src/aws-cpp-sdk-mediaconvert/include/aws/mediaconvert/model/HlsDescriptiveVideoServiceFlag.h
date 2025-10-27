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
enum class HlsDescriptiveVideoServiceFlag { NOT_SET, DONT_FLAG, FLAG };

namespace HlsDescriptiveVideoServiceFlagMapper {
AWS_MEDIACONVERT_API HlsDescriptiveVideoServiceFlag GetHlsDescriptiveVideoServiceFlagForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsDescriptiveVideoServiceFlag(HlsDescriptiveVideoServiceFlag value);
}  // namespace HlsDescriptiveVideoServiceFlagMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
