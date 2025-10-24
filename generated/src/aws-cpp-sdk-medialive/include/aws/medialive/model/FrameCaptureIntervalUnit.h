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
enum class FrameCaptureIntervalUnit { NOT_SET, MILLISECONDS, SECONDS };

namespace FrameCaptureIntervalUnitMapper {
AWS_MEDIALIVE_API FrameCaptureIntervalUnit GetFrameCaptureIntervalUnitForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForFrameCaptureIntervalUnit(FrameCaptureIntervalUnit value);
}  // namespace FrameCaptureIntervalUnitMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
