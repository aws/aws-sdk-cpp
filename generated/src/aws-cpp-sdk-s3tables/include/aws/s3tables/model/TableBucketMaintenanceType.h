/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Tables
{
namespace Model
{
  enum class TableBucketMaintenanceType
  {
    NOT_SET,
    icebergUnreferencedFileRemoval
  };

namespace TableBucketMaintenanceTypeMapper
{
AWS_S3TABLES_API TableBucketMaintenanceType GetTableBucketMaintenanceTypeForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForTableBucketMaintenanceType(TableBucketMaintenanceType value);
} // namespace TableBucketMaintenanceTypeMapper
} // namespace Model
} // namespace S3Tables
} // namespace Aws
