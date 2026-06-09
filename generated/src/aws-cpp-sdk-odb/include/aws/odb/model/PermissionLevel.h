/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class PermissionLevel { NOT_SET, RESTRICTED, UNRESTRICTED };

namespace PermissionLevelMapper {
AWS_ODB_API PermissionLevel GetPermissionLevelForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForPermissionLevel(PermissionLevel value);
}  // namespace PermissionLevelMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
