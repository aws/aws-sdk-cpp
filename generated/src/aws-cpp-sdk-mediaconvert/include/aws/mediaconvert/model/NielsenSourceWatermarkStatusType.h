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
enum class NielsenSourceWatermarkStatusType { NOT_SET, CLEAN, WATERMARKED };

namespace NielsenSourceWatermarkStatusTypeMapper {
AWS_MEDIACONVERT_API NielsenSourceWatermarkStatusType GetNielsenSourceWatermarkStatusTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForNielsenSourceWatermarkStatusType(NielsenSourceWatermarkStatusType value);
}  // namespace NielsenSourceWatermarkStatusTypeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
