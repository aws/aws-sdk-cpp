/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class JobReportFormat
  {
    NOT_SET,
    Report_CSV_20180820
  };

namespace JobReportFormatMapper
{
AWS_S3CONTROL_API JobReportFormat GetJobReportFormatForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForJobReportFormat(JobReportFormat value);
} // namespace JobReportFormatMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
