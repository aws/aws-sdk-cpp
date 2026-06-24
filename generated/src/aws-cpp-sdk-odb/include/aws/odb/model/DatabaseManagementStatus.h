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
enum class DatabaseManagementStatus { NOT_SET, ENABLING, ENABLED, DISABLING, NOT_ENABLED, FAILED_ENABLING, FAILED_DISABLING };

namespace DatabaseManagementStatusMapper {
AWS_ODB_API DatabaseManagementStatus GetDatabaseManagementStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDatabaseManagementStatus(DatabaseManagementStatus value);
}  // namespace DatabaseManagementStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
