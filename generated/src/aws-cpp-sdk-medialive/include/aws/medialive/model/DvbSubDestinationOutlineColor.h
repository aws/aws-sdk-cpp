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
enum class DvbSubDestinationOutlineColor { NOT_SET, BLACK, BLUE, GREEN, RED, WHITE, YELLOW };

namespace DvbSubDestinationOutlineColorMapper {
AWS_MEDIALIVE_API DvbSubDestinationOutlineColor GetDvbSubDestinationOutlineColorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDvbSubDestinationOutlineColor(DvbSubDestinationOutlineColor value);
}  // namespace DvbSubDestinationOutlineColorMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
