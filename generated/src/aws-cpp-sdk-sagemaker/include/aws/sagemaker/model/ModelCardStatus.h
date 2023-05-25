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
  enum class ModelCardStatus
  {
    NOT_SET,
    Draft,
    PendingReview,
    Approved,
    Archived
  };

namespace ModelCardStatusMapper
{
AWS_SAGEMAKER_API ModelCardStatus GetModelCardStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelCardStatus(ModelCardStatus value);
} // namespace ModelCardStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
