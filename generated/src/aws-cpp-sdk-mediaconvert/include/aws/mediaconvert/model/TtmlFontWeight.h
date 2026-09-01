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
enum class TtmlFontWeight { NOT_SET, NORMAL, BOLD };

namespace TtmlFontWeightMapper {
AWS_MEDIACONVERT_API TtmlFontWeight GetTtmlFontWeightForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTtmlFontWeight(TtmlFontWeight value);
}  // namespace TtmlFontWeightMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
