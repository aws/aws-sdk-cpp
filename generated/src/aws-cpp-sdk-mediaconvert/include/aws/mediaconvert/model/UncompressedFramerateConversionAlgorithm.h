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
enum class UncompressedFramerateConversionAlgorithm { NOT_SET, DUPLICATE_DROP, INTERPOLATE, FRAMEFORMER, MAINTAIN_FRAME_COUNT };

namespace UncompressedFramerateConversionAlgorithmMapper {
AWS_MEDIACONVERT_API UncompressedFramerateConversionAlgorithm GetUncompressedFramerateConversionAlgorithmForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForUncompressedFramerateConversionAlgorithm(UncompressedFramerateConversionAlgorithm value);
}  // namespace UncompressedFramerateConversionAlgorithmMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
