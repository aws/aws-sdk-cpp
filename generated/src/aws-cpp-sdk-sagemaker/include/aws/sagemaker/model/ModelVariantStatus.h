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
  enum class ModelVariantStatus
  {
    NOT_SET,
    Creating,
    Updating,
    InService,
    Deleting,
    Deleted
  };

namespace ModelVariantStatusMapper
{
AWS_SAGEMAKER_API ModelVariantStatus GetModelVariantStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelVariantStatus(ModelVariantStatus value);
} // namespace ModelVariantStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
