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
enum class DataGuardRole { NOT_SET, PRIMARY, STANDBY, DISABLED_STANDBY, BACKUP_COPY, SNAPSHOT_STANDBY };

namespace DataGuardRoleMapper {
AWS_ODB_API DataGuardRole GetDataGuardRoleForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDataGuardRole(DataGuardRole value);
}  // namespace DataGuardRoleMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
