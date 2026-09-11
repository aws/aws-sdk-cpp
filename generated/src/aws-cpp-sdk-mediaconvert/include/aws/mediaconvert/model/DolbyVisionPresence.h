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
enum class DolbyVisionPresence { NOT_SET, PRESENT, ABSENT };

namespace DolbyVisionPresenceMapper {
AWS_MEDIACONVERT_API DolbyVisionPresence GetDolbyVisionPresenceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDolbyVisionPresence(DolbyVisionPresence value);
}  // namespace DolbyVisionPresenceMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
