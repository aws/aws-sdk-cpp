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
enum class AutonomousDatabaseBackupStatus { NOT_SET, ACTIVE, CREATING, UPDATING, DELETING, FAILED };

namespace AutonomousDatabaseBackupStatusMapper {
AWS_ODB_API AutonomousDatabaseBackupStatus GetAutonomousDatabaseBackupStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForAutonomousDatabaseBackupStatus(AutonomousDatabaseBackupStatus value);
}  // namespace AutonomousDatabaseBackupStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
