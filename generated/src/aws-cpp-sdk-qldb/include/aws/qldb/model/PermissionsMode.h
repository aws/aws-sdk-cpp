/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/QLDB_EXPORTS.h>

namespace Aws {
namespace QLDB {
namespace Model {
enum class PermissionsMode { NOT_SET, ALLOW_ALL, STANDARD };

namespace PermissionsModeMapper {
AWS_QLDB_API PermissionsMode GetPermissionsModeForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForPermissionsMode(PermissionsMode value);
}  // namespace PermissionsModeMapper
}  // namespace Model
}  // namespace QLDB
}  // namespace Aws
