/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>

namespace Aws {
namespace RolesAnywhere {
namespace Model {
enum class TipStatus { NOT_SET, ENABLED, DISABLED };

namespace TipStatusMapper {
AWS_ROLESANYWHERE_API TipStatus GetTipStatusForName(const Aws::String& name);

AWS_ROLESANYWHERE_API Aws::String GetNameForTipStatus(TipStatus value);
}  // namespace TipStatusMapper
}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
