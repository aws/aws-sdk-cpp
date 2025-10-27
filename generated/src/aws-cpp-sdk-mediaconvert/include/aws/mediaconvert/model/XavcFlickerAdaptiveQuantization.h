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
enum class XavcFlickerAdaptiveQuantization { NOT_SET, DISABLED, ENABLED };

namespace XavcFlickerAdaptiveQuantizationMapper {
AWS_MEDIACONVERT_API XavcFlickerAdaptiveQuantization GetXavcFlickerAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcFlickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization value);
}  // namespace XavcFlickerAdaptiveQuantizationMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
