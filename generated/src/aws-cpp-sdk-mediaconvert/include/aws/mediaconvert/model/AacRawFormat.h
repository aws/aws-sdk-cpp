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
enum class AacRawFormat { NOT_SET, LATM_LOAS, NONE };

namespace AacRawFormatMapper {
AWS_MEDIACONVERT_API AacRawFormat GetAacRawFormatForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAacRawFormat(AacRawFormat value);
}  // namespace AacRawFormatMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
