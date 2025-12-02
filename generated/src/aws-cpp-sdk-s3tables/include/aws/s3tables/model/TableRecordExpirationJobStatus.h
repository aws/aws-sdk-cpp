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
enum class TableRecordExpirationJobStatus { NOT_SET, NotYetRun, Successful, Failed, Disabled };

namespace TableRecordExpirationJobStatusMapper {
AWS_S3TABLES_API TableRecordExpirationJobStatus GetTableRecordExpirationJobStatusForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForTableRecordExpirationJobStatus(TableRecordExpirationJobStatus value);
}  // namespace TableRecordExpirationJobStatusMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
