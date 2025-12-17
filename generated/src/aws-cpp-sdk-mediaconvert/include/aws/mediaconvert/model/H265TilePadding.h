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
enum class H265TilePadding { NOT_SET, NONE, PADDED };

namespace H265TilePaddingMapper {
AWS_MEDIACONVERT_API H265TilePadding GetH265TilePaddingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265TilePadding(H265TilePadding value);
}  // namespace H265TilePaddingMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
