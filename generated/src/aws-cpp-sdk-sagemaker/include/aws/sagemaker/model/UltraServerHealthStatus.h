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
  enum class UltraServerHealthStatus
  {
    NOT_SET,
    OK,
    Impaired,
    Insufficient_Data
  };

namespace UltraServerHealthStatusMapper
{
AWS_SAGEMAKER_API UltraServerHealthStatus GetUltraServerHealthStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForUltraServerHealthStatus(UltraServerHealthStatus value);
} // namespace UltraServerHealthStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
