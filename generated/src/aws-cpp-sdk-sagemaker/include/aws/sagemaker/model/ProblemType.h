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
  enum class ProblemType
  {
    NOT_SET,
    BinaryClassification,
    MulticlassClassification,
    Regression
  };

namespace ProblemTypeMapper
{
AWS_SAGEMAKER_API ProblemType GetProblemTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProblemType(ProblemType value);
} // namespace ProblemTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
