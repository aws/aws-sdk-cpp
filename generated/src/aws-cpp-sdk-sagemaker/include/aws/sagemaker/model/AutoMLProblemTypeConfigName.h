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
  enum class AutoMLProblemTypeConfigName
  {
    NOT_SET,
    ImageClassification,
    TextClassification,
    TimeSeriesForecasting,
    Tabular,
    TextGeneration
  };

namespace AutoMLProblemTypeConfigNameMapper
{
AWS_SAGEMAKER_API AutoMLProblemTypeConfigName GetAutoMLProblemTypeConfigNameForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLProblemTypeConfigName(AutoMLProblemTypeConfigName value);
} // namespace AutoMLProblemTypeConfigNameMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
