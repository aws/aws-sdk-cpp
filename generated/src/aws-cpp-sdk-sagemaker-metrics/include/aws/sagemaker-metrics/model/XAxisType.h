/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerMetrics
{
namespace Model
{
  enum class XAxisType
  {
    NOT_SET,
    IterationNumber,
    Timestamp
  };

namespace XAxisTypeMapper
{
AWS_SAGEMAKERMETRICS_API XAxisType GetXAxisTypeForName(const Aws::String& name);

AWS_SAGEMAKERMETRICS_API Aws::String GetNameForXAxisType(XAxisType value);
} // namespace XAxisTypeMapper
} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
