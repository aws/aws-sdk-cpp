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
enum class DbNodeMaintenanceType { NOT_SET, VMDB_REBOOT_MIGRATION };

namespace DbNodeMaintenanceTypeMapper {
AWS_ODB_API DbNodeMaintenanceType GetDbNodeMaintenanceTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDbNodeMaintenanceType(DbNodeMaintenanceType value);
}  // namespace DbNodeMaintenanceTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
