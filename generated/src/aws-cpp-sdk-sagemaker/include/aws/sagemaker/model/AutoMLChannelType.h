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
  enum class AutoMLChannelType
  {
    NOT_SET,
    training,
    validation
  };

namespace AutoMLChannelTypeMapper
{
AWS_SAGEMAKER_API AutoMLChannelType GetAutoMLChannelTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLChannelType(AutoMLChannelType value);
} // namespace AutoMLChannelTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
