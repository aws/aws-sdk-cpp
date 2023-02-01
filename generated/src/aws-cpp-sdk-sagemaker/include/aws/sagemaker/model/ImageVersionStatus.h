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
  enum class ImageVersionStatus
  {
    NOT_SET,
    CREATING,
    CREATED,
    CREATE_FAILED,
    DELETING,
    DELETE_FAILED
  };

namespace ImageVersionStatusMapper
{
AWS_SAGEMAKER_API ImageVersionStatus GetImageVersionStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForImageVersionStatus(ImageVersionStatus value);
} // namespace ImageVersionStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
