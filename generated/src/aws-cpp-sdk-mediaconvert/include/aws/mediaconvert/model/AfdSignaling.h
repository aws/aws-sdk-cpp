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
enum class AfdSignaling { NOT_SET, NONE, AUTO, FIXED };

namespace AfdSignalingMapper {
AWS_MEDIACONVERT_API AfdSignaling GetAfdSignalingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAfdSignaling(AfdSignaling value);
}  // namespace AfdSignalingMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
