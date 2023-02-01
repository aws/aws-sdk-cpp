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
  enum class RetentionType
  {
    NOT_SET,
    Retain,
    Delete
  };

namespace RetentionTypeMapper
{
AWS_SAGEMAKER_API RetentionType GetRetentionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRetentionType(RetentionType value);
} // namespace RetentionTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
