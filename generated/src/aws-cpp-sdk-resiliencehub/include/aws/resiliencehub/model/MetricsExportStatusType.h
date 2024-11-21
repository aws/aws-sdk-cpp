/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class MetricsExportStatusType
  {
    NOT_SET,
    Pending,
    InProgress,
    Failed,
    Success
  };

namespace MetricsExportStatusTypeMapper
{
AWS_RESILIENCEHUB_API MetricsExportStatusType GetMetricsExportStatusTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForMetricsExportStatusType(MetricsExportStatusType value);
} // namespace MetricsExportStatusTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
