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
enum class ButtonAction { NOT_SET, LINK, DEEP_LINK, CLOSE };

namespace ButtonActionMapper {
AWS_PINPOINT_API ButtonAction GetButtonActionForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForButtonAction(ButtonAction value);
}  // namespace ButtonActionMapper
}  // namespace Model
}  // namespace Pinpoint
}  // namespace Aws
