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
  enum class MonitoringAlertStatus
  {
    NOT_SET,
    InAlert,
    OK
  };

namespace MonitoringAlertStatusMapper
{
AWS_SAGEMAKER_API MonitoringAlertStatus GetMonitoringAlertStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMonitoringAlertStatus(MonitoringAlertStatus value);
} // namespace MonitoringAlertStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
