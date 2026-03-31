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
enum class Ac4StereoDownmix { NOT_SET, NOT_INDICATED, LO_RO, LT_RT, DPL2 };

namespace Ac4StereoDownmixMapper {
AWS_MEDIACONVERT_API Ac4StereoDownmix GetAc4StereoDownmixForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc4StereoDownmix(Ac4StereoDownmix value);
}  // namespace Ac4StereoDownmixMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
