﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class TsPtsOffset { NOT_SET, AUTO, SECONDS, MILLISECONDS };

namespace TsPtsOffsetMapper {
AWS_MEDIACONVERT_API TsPtsOffset GetTsPtsOffsetForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTsPtsOffset(TsPtsOffset value);
}  // namespace TsPtsOffsetMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
