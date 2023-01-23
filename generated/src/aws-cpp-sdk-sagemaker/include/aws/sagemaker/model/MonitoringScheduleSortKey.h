/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class MonitoringScheduleSortKey
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace MonitoringScheduleSortKeyMapper
{
AWS_SAGEMAKER_API MonitoringScheduleSortKey GetMonitoringScheduleSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMonitoringScheduleSortKey(MonitoringScheduleSortKey value);
} // namespace MonitoringScheduleSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
