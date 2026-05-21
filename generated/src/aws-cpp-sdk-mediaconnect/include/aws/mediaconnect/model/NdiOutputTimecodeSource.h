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
enum class NdiOutputTimecodeSource { NOT_SET, EMBEDDED_TIMECODE, UTC_SYSTEM_TIME };

namespace NdiOutputTimecodeSourceMapper {
AWS_MEDIACONNECT_API NdiOutputTimecodeSource GetNdiOutputTimecodeSourceForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForNdiOutputTimecodeSource(NdiOutputTimecodeSource value);
}  // namespace NdiOutputTimecodeSourceMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
