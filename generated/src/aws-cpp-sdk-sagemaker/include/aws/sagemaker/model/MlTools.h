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
  enum class MlTools
  {
    NOT_SET,
    DataWrangler,
    FeatureStore,
    EmrClusters,
    AutoMl,
    Experiments,
    Training,
    ModelEvaluation,
    Pipelines,
    Models,
    JumpStart,
    InferenceRecommender,
    Endpoints,
    Projects,
    InferenceOptimization,
    PerformanceEvaluation,
    LakeraGuard,
    Comet,
    DeepchecksLLMEvaluation,
    Fiddler,
    HyperPodClusters
  };

namespace MlToolsMapper
{
AWS_SAGEMAKER_API MlTools GetMlToolsForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMlTools(MlTools value);
} // namespace MlToolsMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
