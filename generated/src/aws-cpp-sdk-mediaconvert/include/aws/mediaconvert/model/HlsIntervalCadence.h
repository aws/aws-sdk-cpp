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
enum class HlsIntervalCadence { NOT_SET, FOLLOW_IFRAME, FOLLOW_CUSTOM };

namespace HlsIntervalCadenceMapper {
AWS_MEDIACONVERT_API HlsIntervalCadence GetHlsIntervalCadenceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsIntervalCadence(HlsIntervalCadence value);
}  // namespace HlsIntervalCadenceMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
