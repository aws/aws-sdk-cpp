/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

namespace Aws {
namespace S3Tables {
namespace Model {
enum class MigrationFailureCode {
  NOT_SET,
  rolePermissions,
  sourcePermissions,
  destinationPermissions,
  resourceNotFound,
  sourceNotSupported,
  objectMigrationReport,
  objectCompatibilityReport,
  tableCompatibilityReport,
  internalError,
  reportBucketNotSupported
};

namespace MigrationFailureCodeMapper {
AWS_S3TABLES_API MigrationFailureCode GetMigrationFailureCodeForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForMigrationFailureCode(MigrationFailureCode value);
}  // namespace MigrationFailureCodeMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
