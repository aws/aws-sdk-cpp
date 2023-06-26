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
  enum class AutoMLAlgorithm
  {
    NOT_SET,
    xgboost,
    linear_learner,
    mlp,
    lightgbm,
    catboost,
    randomforest,
    extra_trees,
    nn_torch,
    fastai
  };

namespace AutoMLAlgorithmMapper
{
AWS_SAGEMAKER_API AutoMLAlgorithm GetAutoMLAlgorithmForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLAlgorithm(AutoMLAlgorithm value);
} // namespace AutoMLAlgorithmMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
