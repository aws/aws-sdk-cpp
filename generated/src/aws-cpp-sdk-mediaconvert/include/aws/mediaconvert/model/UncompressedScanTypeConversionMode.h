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
enum class UncompressedScanTypeConversionMode { NOT_SET, INTERLACED, INTERLACED_OPTIMIZE };

namespace UncompressedScanTypeConversionModeMapper {
AWS_MEDIACONVERT_API UncompressedScanTypeConversionMode GetUncompressedScanTypeConversionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForUncompressedScanTypeConversionMode(UncompressedScanTypeConversionMode value);
}  // namespace UncompressedScanTypeConversionModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
