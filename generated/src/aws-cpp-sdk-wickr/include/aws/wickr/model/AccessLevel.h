/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Wickr {
namespace Model {
enum class AccessLevel { NOT_SET, STANDARD, PREMIUM };

namespace AccessLevelMapper {
AWS_WICKR_API AccessLevel GetAccessLevelForName(const Aws::String& name);

AWS_WICKR_API Aws::String GetNameForAccessLevel(AccessLevel value);
}  // namespace AccessLevelMapper
}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
