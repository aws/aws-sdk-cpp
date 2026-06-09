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
enum class SourceType {
  NOT_SET,
  NONE,
  DATABASE,
  BACKUP_FROM_ID,
  BACKUP_FROM_TIMESTAMP,
  CROSS_REGION_DATAGUARD,
  CROSS_REGION_DISASTER_RECOVERY,
  CLONE_TO_REFRESHABLE
};

namespace SourceTypeMapper {
AWS_ODB_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForSourceType(SourceType value);
}  // namespace SourceTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
