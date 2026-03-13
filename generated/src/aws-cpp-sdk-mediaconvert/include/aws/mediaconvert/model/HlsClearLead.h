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
enum class HlsClearLead { NOT_SET, ENABLED, DISABLED };

namespace HlsClearLeadMapper {
AWS_MEDIACONVERT_API HlsClearLead GetHlsClearLeadForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsClearLead(HlsClearLead value);
}  // namespace HlsClearLeadMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
