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
enum class MigrationState { NOT_SET, new_, planning, pendingReview, queued, migrating, succeeded, failed, cancelling, cancelled };

namespace MigrationStateMapper {
AWS_S3TABLES_API MigrationState GetMigrationStateForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForMigrationState(MigrationState value);
}  // namespace MigrationStateMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
