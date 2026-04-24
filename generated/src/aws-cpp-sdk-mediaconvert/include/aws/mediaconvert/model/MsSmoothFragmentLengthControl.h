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
enum class MsSmoothFragmentLengthControl { NOT_SET, EXACT, GOP_MULTIPLE };

namespace MsSmoothFragmentLengthControlMapper {
AWS_MEDIACONVERT_API MsSmoothFragmentLengthControl GetMsSmoothFragmentLengthControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMsSmoothFragmentLengthControl(MsSmoothFragmentLengthControl value);
}  // namespace MsSmoothFragmentLengthControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
