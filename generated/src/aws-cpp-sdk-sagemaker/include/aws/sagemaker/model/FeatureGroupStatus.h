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
  enum class FeatureGroupStatus
  {
    NOT_SET,
    Creating,
    Created,
    CreateFailed,
    Deleting,
    DeleteFailed
  };

namespace FeatureGroupStatusMapper
{
AWS_SAGEMAKER_API FeatureGroupStatus GetFeatureGroupStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFeatureGroupStatus(FeatureGroupStatus value);
} // namespace FeatureGroupStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
