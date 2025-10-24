﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class ResourceType {
  NOT_SET,
  TrainingJob,
  Experiment,
  ExperimentTrial,
  ExperimentTrialComponent,
  Endpoint,
  Model,
  ModelPackage,
  ModelPackageGroup,
  Pipeline,
  PipelineExecution,
  FeatureGroup,
  FeatureMetadata,
  Image,
  ImageVersion,
  Project,
  HyperParameterTuningJob,
  ModelCard,
  PipelineVersion
};

namespace ResourceTypeMapper {
AWS_SAGEMAKER_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
