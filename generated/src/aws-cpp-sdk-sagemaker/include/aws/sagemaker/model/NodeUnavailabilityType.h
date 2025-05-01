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
  enum class NodeUnavailabilityType
  {
    NOT_SET,
    INSTANCE_COUNT,
    CAPACITY_PERCENTAGE
  };

namespace NodeUnavailabilityTypeMapper
{
AWS_SAGEMAKER_API NodeUnavailabilityType GetNodeUnavailabilityTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForNodeUnavailabilityType(NodeUnavailabilityType value);
} // namespace NodeUnavailabilityTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
