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
enum class Av1FastDecode { NOT_SET, DISABLED, ENABLED };

namespace Av1FastDecodeMapper {
AWS_MEDIACONVERT_API Av1FastDecode GetAv1FastDecodeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAv1FastDecode(Av1FastDecode value);
}  // namespace Av1FastDecodeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
