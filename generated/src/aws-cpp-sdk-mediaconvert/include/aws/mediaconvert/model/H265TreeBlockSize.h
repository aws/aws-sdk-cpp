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
enum class H265TreeBlockSize { NOT_SET, AUTO, TREE_SIZE_32X32 };

namespace H265TreeBlockSizeMapper {
AWS_MEDIACONVERT_API H265TreeBlockSize GetH265TreeBlockSizeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265TreeBlockSize(H265TreeBlockSize value);
}  // namespace H265TreeBlockSizeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
