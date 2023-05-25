/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class MetricsStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace MetricsStatusMapper
{
AWS_S3CRT_API MetricsStatus GetMetricsStatusForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForMetricsStatus(MetricsStatus value);
} // namespace MetricsStatusMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
