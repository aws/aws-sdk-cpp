/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{
  enum class PerformanceTargetStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PerformanceTargetStatusMapper
{
AWS_REDSHIFTSERVERLESS_API PerformanceTargetStatus GetPerformanceTargetStatusForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForPerformanceTargetStatus(PerformanceTargetStatus value);
} // namespace PerformanceTargetStatusMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
