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
enum class JobStatus { NOT_SET, Not_Yet_Run, Successful, Failed, Disabled };

namespace JobStatusMapper {
AWS_S3TABLES_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForJobStatus(JobStatus value);
}  // namespace JobStatusMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
