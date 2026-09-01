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
enum class TtmlTextDecoration { NOT_SET, NONE, UNDERLINE };

namespace TtmlTextDecorationMapper {
AWS_MEDIACONVERT_API TtmlTextDecoration GetTtmlTextDecorationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTtmlTextDecoration(TtmlTextDecoration value);
}  // namespace TtmlTextDecorationMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
