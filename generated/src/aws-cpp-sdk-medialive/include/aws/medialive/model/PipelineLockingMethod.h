/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class PipelineLockingMethod { NOT_SET, SOURCE_TIMECODE, VIDEO_ALIGNMENT };

namespace PipelineLockingMethodMapper {
AWS_MEDIALIVE_API PipelineLockingMethod GetPipelineLockingMethodForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForPipelineLockingMethod(PipelineLockingMethod value);
}  // namespace PipelineLockingMethodMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
