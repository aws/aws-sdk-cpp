/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class EncodingProfile { NOT_SET, DISTRIBUTION_H264_DEFAULT, CONTRIBUTION_H264_DEFAULT };

namespace EncodingProfileMapper {
AWS_MEDIACONNECT_API EncodingProfile GetEncodingProfileForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForEncodingProfile(EncodingProfile value);
}  // namespace EncodingProfileMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
