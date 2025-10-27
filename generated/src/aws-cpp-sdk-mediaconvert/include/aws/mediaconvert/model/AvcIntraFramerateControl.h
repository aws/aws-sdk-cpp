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
enum class AvcIntraFramerateControl { NOT_SET, INITIALIZE_FROM_SOURCE, SPECIFIED };

namespace AvcIntraFramerateControlMapper {
AWS_MEDIACONVERT_API AvcIntraFramerateControl GetAvcIntraFramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAvcIntraFramerateControl(AvcIntraFramerateControl value);
}  // namespace AvcIntraFramerateControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
