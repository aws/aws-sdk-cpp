/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/RAM_EXPORTS.h>

namespace Aws {
namespace RAM {
namespace Model {
enum class UpdatePermissionStatus { NOT_SET, ATTACHABLE, DEPRECATED };

namespace UpdatePermissionStatusMapper {
AWS_RAM_API UpdatePermissionStatus GetUpdatePermissionStatusForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForUpdatePermissionStatus(UpdatePermissionStatus value);
}  // namespace UpdatePermissionStatusMapper
}  // namespace Model
}  // namespace RAM
}  // namespace Aws
