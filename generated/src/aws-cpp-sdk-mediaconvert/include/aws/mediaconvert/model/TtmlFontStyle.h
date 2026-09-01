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
enum class TtmlFontStyle { NOT_SET, NORMAL, ITALIC };

namespace TtmlFontStyleMapper {
AWS_MEDIACONVERT_API TtmlFontStyle GetTtmlFontStyleForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTtmlFontStyle(TtmlFontStyle value);
}  // namespace TtmlFontStyleMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
