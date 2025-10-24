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
enum class UncompressedFramerateControl { NOT_SET, INITIALIZE_FROM_SOURCE, SPECIFIED };

namespace UncompressedFramerateControlMapper {
AWS_MEDIACONVERT_API UncompressedFramerateControl GetUncompressedFramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForUncompressedFramerateControl(UncompressedFramerateControl value);
}  // namespace UncompressedFramerateControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
