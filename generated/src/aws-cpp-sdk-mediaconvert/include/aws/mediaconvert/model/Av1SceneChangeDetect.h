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
enum class Av1SceneChangeDetect { NOT_SET, DISABLED, ENABLED, TRANSITION_DETECTION };

namespace Av1SceneChangeDetectMapper {
AWS_MEDIACONVERT_API Av1SceneChangeDetect GetAv1SceneChangeDetectForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAv1SceneChangeDetect(Av1SceneChangeDetect value);
}  // namespace Av1SceneChangeDetectMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
