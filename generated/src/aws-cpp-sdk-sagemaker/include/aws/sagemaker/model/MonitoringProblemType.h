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
  enum class MonitoringProblemType
  {
    NOT_SET,
    BinaryClassification,
    MulticlassClassification,
    Regression
  };

namespace MonitoringProblemTypeMapper
{
AWS_SAGEMAKER_API MonitoringProblemType GetMonitoringProblemTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMonitoringProblemType(MonitoringProblemType value);
} // namespace MonitoringProblemTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
