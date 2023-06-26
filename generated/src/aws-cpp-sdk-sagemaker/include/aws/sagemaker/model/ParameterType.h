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
  enum class ParameterType
  {
    NOT_SET,
    Integer,
    Continuous,
    Categorical,
    FreeText
  };

namespace ParameterTypeMapper
{
AWS_SAGEMAKER_API ParameterType GetParameterTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForParameterType(ParameterType value);
} // namespace ParameterTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
