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
enum class RtmpPushNamingType { NOT_SET, MANUAL, AUTOMATIC };

namespace RtmpPushNamingTypeMapper {
AWS_MEDIACONNECT_API RtmpPushNamingType GetRtmpPushNamingTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRtmpPushNamingType(RtmpPushNamingType value);
}  // namespace RtmpPushNamingTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
