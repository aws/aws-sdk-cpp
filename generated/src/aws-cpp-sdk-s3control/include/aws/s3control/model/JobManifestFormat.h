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
  enum class JobManifestFormat
  {
    NOT_SET,
    S3BatchOperations_CSV_20180820,
    S3InventoryReport_CSV_20161130
  };

namespace JobManifestFormatMapper
{
AWS_S3CONTROL_API JobManifestFormat GetJobManifestFormatForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForJobManifestFormat(JobManifestFormat value);
} // namespace JobManifestFormatMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
