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
enum class DvbSubtitlingType { NOT_SET, HEARING_IMPAIRED, STANDARD };

namespace DvbSubtitlingTypeMapper {
AWS_MEDIACONVERT_API DvbSubtitlingType GetDvbSubtitlingTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubtitlingType(DvbSubtitlingType value);
}  // namespace DvbSubtitlingTypeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
