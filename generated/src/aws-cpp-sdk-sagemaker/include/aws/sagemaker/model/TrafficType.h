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
  enum class TrafficType
  {
    NOT_SET,
    PHASES,
    STAIRS
  };

namespace TrafficTypeMapper
{
AWS_SAGEMAKER_API TrafficType GetTrafficTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrafficType(TrafficType value);
} // namespace TrafficTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
