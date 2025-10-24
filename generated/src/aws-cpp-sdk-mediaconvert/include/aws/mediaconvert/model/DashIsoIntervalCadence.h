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
enum class DashIsoIntervalCadence { NOT_SET, FOLLOW_IFRAME, FOLLOW_CUSTOM };

namespace DashIsoIntervalCadenceMapper {
AWS_MEDIACONVERT_API DashIsoIntervalCadence GetDashIsoIntervalCadenceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoIntervalCadence(DashIsoIntervalCadence value);
}  // namespace DashIsoIntervalCadenceMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
