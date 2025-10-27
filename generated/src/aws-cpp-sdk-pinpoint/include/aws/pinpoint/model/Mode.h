/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

namespace Aws {
namespace Pinpoint {
namespace Model {
enum class Mode { NOT_SET, DELIVERY, FILTER };

namespace ModeMapper {
AWS_PINPOINT_API Mode GetModeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForMode(Mode value);
}  // namespace ModeMapper
}  // namespace Model
}  // namespace Pinpoint
}  // namespace Aws
