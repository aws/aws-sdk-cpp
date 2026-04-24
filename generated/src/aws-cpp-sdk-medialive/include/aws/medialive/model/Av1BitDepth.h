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
enum class Av1BitDepth { NOT_SET, DEPTH_10, DEPTH_8 };

namespace Av1BitDepthMapper {
AWS_MEDIALIVE_API Av1BitDepth GetAv1BitDepthForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAv1BitDepth(Av1BitDepth value);
}  // namespace Av1BitDepthMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
