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
  enum class TableMaintenanceJobType
  {
    NOT_SET,
    icebergCompaction,
    icebergSnapshotManagement,
    icebergUnreferencedFileRemoval
  };

namespace TableMaintenanceJobTypeMapper
{
AWS_S3TABLES_API TableMaintenanceJobType GetTableMaintenanceJobTypeForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForTableMaintenanceJobType(TableMaintenanceJobType value);
} // namespace TableMaintenanceJobTypeMapper
} // namespace Model
} // namespace S3Tables
} // namespace Aws
