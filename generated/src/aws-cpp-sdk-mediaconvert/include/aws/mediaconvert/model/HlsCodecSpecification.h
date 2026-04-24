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
enum class HlsCodecSpecification { NOT_SET, RFC_6381, RFC_4281 };

namespace HlsCodecSpecificationMapper {
AWS_MEDIACONVERT_API HlsCodecSpecification GetHlsCodecSpecificationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsCodecSpecification(HlsCodecSpecification value);
}  // namespace HlsCodecSpecificationMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
