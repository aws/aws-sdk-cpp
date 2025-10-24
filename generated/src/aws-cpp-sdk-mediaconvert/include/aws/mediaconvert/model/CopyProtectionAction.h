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
enum class CopyProtectionAction { NOT_SET, PASSTHROUGH, STRIP };

namespace CopyProtectionActionMapper {
AWS_MEDIACONVERT_API CopyProtectionAction GetCopyProtectionActionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCopyProtectionAction(CopyProtectionAction value);
}  // namespace CopyProtectionActionMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
