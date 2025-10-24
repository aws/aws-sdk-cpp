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
enum class CmafMpdProfile { NOT_SET, MAIN_PROFILE, ON_DEMAND_PROFILE };

namespace CmafMpdProfileMapper {
AWS_MEDIACONVERT_API CmafMpdProfile GetCmafMpdProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafMpdProfile(CmafMpdProfile value);
}  // namespace CmafMpdProfileMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
