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
enum class TimecodeConfigSource { NOT_SET, EMBEDDED, SYSTEMCLOCK, ZEROBASED };

namespace TimecodeConfigSourceMapper {
AWS_MEDIALIVE_API TimecodeConfigSource GetTimecodeConfigSourceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForTimecodeConfigSource(TimecodeConfigSource value);
}  // namespace TimecodeConfigSourceMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
