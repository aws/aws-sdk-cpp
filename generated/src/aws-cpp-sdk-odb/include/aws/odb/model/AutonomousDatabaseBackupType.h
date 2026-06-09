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
enum class AutonomousDatabaseBackupType {
  NOT_SET,
  INCREMENTAL,
  FULL,
  LONGTERM,
  VIRTUAL_FULL,
  CUMULATIVE_INCREMENTAL,
  ROLL_FORWARD_IMAGE_COPY
};

namespace AutonomousDatabaseBackupTypeMapper {
AWS_ODB_API AutonomousDatabaseBackupType GetAutonomousDatabaseBackupTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForAutonomousDatabaseBackupType(AutonomousDatabaseBackupType value);
}  // namespace AutonomousDatabaseBackupTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
