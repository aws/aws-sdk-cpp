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
  enum class FeatureStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace FeatureStatusMapper
{
AWS_SAGEMAKER_API FeatureStatus GetFeatureStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFeatureStatus(FeatureStatus value);
} // namespace FeatureStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
