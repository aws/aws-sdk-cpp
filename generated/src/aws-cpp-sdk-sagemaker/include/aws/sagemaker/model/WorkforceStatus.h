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
  enum class WorkforceStatus
  {
    NOT_SET,
    Initializing,
    Updating,
    Deleting,
    Failed,
    Active
  };

namespace WorkforceStatusMapper
{
AWS_SAGEMAKER_API WorkforceStatus GetWorkforceStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForWorkforceStatus(WorkforceStatus value);
} // namespace WorkforceStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
